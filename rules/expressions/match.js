module.exports = {
  // match expr with Pat -> arm | Pat -> arm
  expression_match: $ =>
    seq(
      "match",
      field("expression", $._expression),
      "with",
      field("arm", repeat1($.expression_match_arm)),
      "end"
    ),

  expression_match_arm: $ =>
    seq(
      "|",
      field("match_arm_pattern", $._pattern),
      "->",
      field("match_arm_expression", $._expression)
    ),
};
