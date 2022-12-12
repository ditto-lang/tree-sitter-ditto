const { commaSep, commaSep1 } = require("../helpers");

module.exports = {
  expression_record: $ =>
    seq("{", field("field", commaSep($.expression_record_field)), "}"),

  expression_record_field: $ =>
    seq(
      field("label", $.expression_record_field_label),
      "=",
      field("value", $._expression)
    ),

  expression_record_field_label: $ => $._name,

  expression_record_update: $ =>
    seq(
      "{",
      field("target", $._expression_record_update_target),
      "|",
      field("field", commaSep1($.expression_record_field)),
      "}"
    ),

  _expression_record_update_target: $ => $._expression1,

  expression_record_access: $ =>
    seq($._expression0, ".", $.expression_record_field_label),
};
