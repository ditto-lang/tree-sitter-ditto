module.exports = {
  // if condition then yes else no
  expression_if: $ =>
    seq(
      "if",
      field("condition", $._expression),
      "then",
      field("true_clause", $._expression),
      "else",
      field("false_clause", $._expression)
    ),
};
