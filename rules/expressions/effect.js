module.exports = {
  expression_effect: $ => seq("do", "{", $._expression_effect_statement, "}"),

  _expression_effect_statement: $ =>
    choice(
      $.expression_effect_bind,
      $.expression_effect_let,
      $.expression_effect_expression,
      $.expression_effect_return
    ),

  // name <- expr;
  expression_effect_bind: $ =>
    seq(
      field("bind_name", $.expression_effect_bind_name),
      "<-",
      field("bind_expression", $._expression),
      ";",
      field("rest", $._expression_effect_statement)
    ),
  expression_effect_bind_name: $ => $._name,

  // let five = 5;
  expression_effect_let: $ =>
    seq(
      "let",
      field("let_binder", $.expression_effect_let_binder),
      "=",
      field("let_expression", $._expression),
      ";",
      field("rest", $._expression_effect_statement)
    ),
  expression_effect_let_binder: $ =>
    seq(
      field("pattern", $._pattern),
      field("type_annotation", optional($.type_annotation))
    ),

  // discard_this();
  expression_effect_expression: $ =>
    seq(
      $._expression3, // `let` expressions should parse as `expression_effect_let`
      optional(seq(";", field("rest", $._expression_effect_statement)))
    ),

  // return expr;
  expression_effect_return: $ => seq("return", $._expression),
};
