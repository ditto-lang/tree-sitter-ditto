const { commaSep, commaSep1 } = require("../helpers");

module.exports = {
  // { foo: Int, bar: Bool }
  type_closed_record: $ =>
    seq("{", field("field", commaSep($.type_record_field)), "}"),

  type_record_field: $ =>
    seq(
      field("label", $.type_record_field_label),
      ":",
      field("value", $._type)
    ),

  type_record_field_label: $ => $._name,

  // { r | foo: Int, bar: Bool }
  type_open_record: $ =>
    seq(
      "{",
      $.type_open_record_row_variable,
      "|",
      field("field", commaSep1($.type_record_field)),
      "}"
    ),

  type_open_record_row_variable: $ => $._name,
};
