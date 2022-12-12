const { qualified } = require("../helpers.js");

module.exports = {
  // (var)
  _type_parens: $ => seq("(", $._type, ")"),

  // Maybe
  type_constructor: $ => qualified($, $.type_constructor_proper_name),
  type_constructor_proper_name: $ => $._proper_name,

  // var
  type_variable: $ => $._name,
};
