const { commaSep } = require("../helpers");

module.exports = {
  // (Int, Bool) -> String
  type_function: $ =>
    seq(
      "(",
      field("parameter", commaSep($._type)),
      ")",
      "->",
      field("return_type", $._type)
    ),
};
