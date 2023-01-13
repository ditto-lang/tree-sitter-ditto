module.exports = {
  // let five: Int = 5; six = 6; in [five, six]
  expression_let: $ =>
    seq(
      "let",
      repeat1($.expression_let_value_declaration),
      "in",
      $._expression
    ),

  expression_let_value_declaration: $ =>
    seq(
      field("binder", $._pattern),
      field("type_annotation", optional($.type_annotation)),
      "=",
      field("expression", $._expression)
    ),
};
