module.exports = grammar({
  name: "ditto",

  conflicts: $ => [
    [$.module_name],
    [$.expression_function_parameter_name, $._qualified_name],
    [$.type_function, $._type_parens],
  ],

  extras: $ => [
    $.comment,
    // Whitespace, taken from
    // https://github.com/tree-sitter/tree-sitter-javascript/blob/08f70a92f50a2373563d0e1f2a60089a02d19ca4/grammar.js#L12
    /[\s\p{Zs}\uFEFF\u2060\u200B]/,
  ],

  rules: {
    source_file: $ =>
      seq(
        field("header", $.module_header),
        field("import", repeat($.module_import)),
        field("declaration", repeat($._module_declaration))
      ),

    module_header: $ =>
      seq(
        "module",
        field("module_name", $.module_name),
        "exports",
        field("exports", $._exposing),
        ";"
      ),

    module_name: $ => sep1($._proper_name, "."),

    module_import: $ =>
      seq(
        "import",
        field("package", optional($.module_import_package)),
        field("module_name", $.module_name),
        field("alias", optional(seq("as", $.module_import_alias))),
        field("imports", optional($._exposing)),
        ";"
      ),

    module_import_package: $ => seq("(", $._package_name, ")"),

    module_import_alias: $ => $._proper_name,

    _exposing: $ => choice($.exposing_everything, $.exposing_list),

    exposing_everything: $ => $._everything,

    exposing_list: $ => seq("(", commaSep1($._exposing_list_item), ")"),

    _exposing_list_item: $ => choice($.exposing_type, $.exposing_value),

    exposing_type: $ =>
      seq($.exposing_type_name, optional($.exposing_type_constructors)),

    exposing_type_name: $ => $._proper_name,

    exposing_type_constructors: $ => $._everything,

    _everything: $ => seq("(", "..", ")"),

    exposing_value: $ => $._name,

    _module_declaration: $ =>
      choice(
        $._type_declaration,
        $.foreign_value_declaration,
        $.value_declaration
      ),

    _type_declaration: $ =>
      choice($.type_declaration, $.empty_type_declaration),

    empty_type_declaration: $ =>
      seq(
        "type",
        field("name", $.type_declaration_name),
        field("variables", optional($.type_declaration_variables)),
        ";"
      ),

    type_declaration: $ =>
      seq(
        "type",
        field("name", $.type_declaration_name),
        field("variables", optional($.type_declaration_variables)),
        "=",
        field(
          "constructor",
          seq(optional("|"), $.type_declaration_constructor)
        ),
        field("constructor", repeat(seq("|", $.type_declaration_constructor))),
        ";"
      ),

    type_declaration_name: $ => $._proper_name,

    type_declaration_variables: $ =>
      seq("(", field("variable", commaSep1($.type_declaration_variable)), ")"),

    type_declaration_variable: $ => $._name,

    type_declaration_constructor: $ =>
      seq(
        field("name", $.type_declaration_constructor_name),
        field("fields", optional($.type_declaration_constructor_fields))
      ),

    type_declaration_constructor_name: $ => $._proper_name,

    type_declaration_constructor_fields: $ =>
      seq("(", field("field", commaSep1($._type)), ")"),

    _type: $ => choice($.type_function, $._type1),

    _type1: $ =>
      choice($._type_parens, $.type_call, $.type_constructor, $.type_variable),

    type_function: $ =>
      seq(
        "(",
        field("parameter", commaSep($._type)),
        ")",
        "->",
        field("return_type", $._type)
      ),

    _type_parens: $ => seq("(", $._type, ")"),

    type_call: $ =>
      prec.left(
        seq(
          field("function", $.type_constructor),
          field("argument", commaSep1($._type))
        )
      ),

    type_constructor: $ => $._qualified_proper_name,

    type_variable: $ => $._name,

    type_annotation: $ => seq(":", $._type),

    return_type_annotation: $ => seq(":", $._type1),

    foreign_value_declaration: $ =>
      seq(
        "foreign",
        field("name", $.value_declaration_name),
        field("type_annotation", $.type_annotation),
        ";"
      ),

    value_declaration: $ =>
      seq(
        field("name", $.value_declaration_name),
        field("type_annotation", optional($.type_annotation)),
        "=",
        field("expression", $._expression),
        ";"
      ),

    value_declaration_name: $ => $._name,

    _expression: $ => choice($.expression_function, $._expression1),

    _expression1: $ =>
      choice(
        $._expression_parens,
        $.expression_call,
        $.expression_string,
        $.expression_array,
        $.expression_int,
        $.expression_float,
        $.expression_constructor,
        $.expression_variable,
        $.expression_true,
        $.expression_false,
        $.expression_unit
      ),

    expression_function: $ =>
      seq(
        "(",
        field("parameter", commaSep($.expression_function_parameter)),
        ")",
        field("return_type", optional($.return_type_annotation)),
        "->",
        field("body", $._expression)
      ),

    expression_function_parameter: $ =>
      seq(
        field("name", $.expression_function_parameter_name),
        field("type_annotation", optional($.type_annotation))
      ),

    expression_function_parameter_name: $ => $._name,

    _expression_parens: $ => seq("(", $._expression, ")"),

    expression_call: $ =>
      seq(
        field("function", $._expression1),
        field("arguments", $.expression_call_arguments)
      ),

    expression_call_arguments: $ =>
      seq("(", field("argument", commaSep($._expression)), ")"),

    expression_array: $ =>
      seq("[", field("element", commaSep($._expression)), "]"),

    expression_string: $ => token(seq('"', repeat(/[^"]/), '"')),

    expression_int: $ => /\d+/,

    expression_float: $ => /\d+\.\d+/,

    expression_constructor: $ => $._qualified_proper_name,

    expression_variable: $ => $._qualified_name,

    expression_true: $ => "true",

    expression_false: $ => "false",

    expression_unit: $ => "unit",

    _qualified_proper_name: $ => seq(optional($.qualifier), $._proper_name),

    _qualified_name: $ => seq(optional($.qualifier), $._name),

    qualifier: $ => seq($._proper_name, "."),

    _proper_name: $ => /\p{Lu}[_\d\p{L}]*/,

    _package_name: $ => /\p{Ll}[-\d\p{L}]*/,

    _name: $ => /\p{Ll}[_\d\p{L}]*/,

    comment: $ => token(seq(/--/, repeat(/[^\n]/))),
  },
});

function commaSep(rule) {
  return optional(commaSep1(rule));
}

function commaSep1(rule) {
  return seq(rule, repeat(seq(",", rule)), optional(","));
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
