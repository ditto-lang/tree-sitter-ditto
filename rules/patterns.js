const { qualified, commaSep } = require("./helpers");

module.exports = {
  _pattern: $ =>
    choice($.pattern_constructor, $.pattern_variable, $.pattern_unused),

  // Nothing
  // Just(a)
  pattern_constructor: $ =>
    seq(
      qualified($, $.pattern_constructor_proper_name),
      optional($.pattern_constructor_fields)
    ),
  pattern_constructor_proper_name: $ => $._proper_name,
  pattern_constructor_fields: $ =>
    seq("(", field("field", commaSep($._pattern)), ")"),

  // a
  pattern_variable: $ => $._name,

  // _unused
  pattern_unused: $ => $._unused_name,
};
