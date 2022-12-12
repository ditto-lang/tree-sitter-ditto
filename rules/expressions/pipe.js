module.exports = {
  // x |> y
  expression_right_pipe: $ =>
    seq(field("lhs", $._expression2), "|>", field("rhs", $._expression1)),
};
