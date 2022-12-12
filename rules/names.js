module.exports = {
  // SomeModule.
  qualifier: $ => seq($._proper_name, "."),

  // ProperName
  _proper_name: $ => /\p{Lu}[_\d\p{L}]*/,

  // package-name
  _package_name: $ => /\p{Ll}[-\d\p{L}]*/,

  // Name
  _name: $ => /\p{Ll}[_\d\p{L}]*/,

  // _unused
  _unused_name: $ => /_[_\d\p{L}]*/,
};
