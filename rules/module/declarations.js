const { commaSep1 } = require("../helpers");

module.exports = {
  _module_declaration: $ =>
    choice(
      $._type_declaration,
      $.type_alias_declaration,
      $.foreign_value_declaration,
      $.value_declaration
    ),

  _type_declaration: $ => choice($.type_declaration, $.type_declaration_empty),

  // type Maybe(a) = Just(a) | Nothing
  type_declaration: $ =>
    seq(
      "type",
      field("name", $.type_declaration_name),
      field("variables", optional($.type_declaration_variables)),
      "=",
      field("constructor", seq(optional("|"), $.type_declaration_constructor)),
      field("constructor", repeat(seq("|", $.type_declaration_constructor)))
    ),

  // type Unknown
  type_declaration_empty: $ =>
    seq(
      "type",
      field("name", $.type_declaration_name),
      field("variables", optional($.type_declaration_variables))
    ),

  // type alias Double = Float
  type_alias_declaration: $ =>
    seq(
      "type",
      "alias",
      field("name", $.type_declaration_name),
      field("variables", optional($.type_declaration_variables)),
      "=",
      field("aliased_type", $._type)
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

  // five = 5
  value_declaration: $ =>
    seq(
      field("name", $.value_declaration_name),
      field("type_annotation", optional($.type_annotation)),
      "=",
      field("expression", $._expression)
    ),

  value_declaration_name: $ => $._name,

  // foreign is_eq_impl = (Int, Int) -> Bool
  foreign_value_declaration: $ =>
    seq(
      "foreign",
      field("name", $.foreign_value_declaration_name),
      field("type_annotation", $.type_annotation)
    ),

  foreign_value_declaration_name: $ => $._name,
};
