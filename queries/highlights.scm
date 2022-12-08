; Following the helix highlights for now:
; https://github.com/helix-editor/helix/tree/f41f28b6627bd2ae0152f468cde80df167889a2d/runtime/queries
; 
; Particularly the Haskell highlight queries:
; https://github.com/helix-editor/helix/blob/f41f28b6627bd2ae0152f468cde80df167889a2d/runtime/queries/haskell/highlights.scm

(comment) @comment

[
  "["
  "]"
  "("
  ")"
  "{"
  "}"
] @punctuation.bracket

[
  ","
  ";"
  "|"
] @punctuation.delimiter

[
  "module"
  "exports"
  "import"
  "as"
] @keyword.control.import

[
  "type"
  "foreign"
  "fn"
  "do"
  "alias"
  "let"
  "in"
] @keyword

[
  "return"
] @keyword.return

[
  "if"
  "then"
  "else"
  "match"
  "with"
  "end"
] @keyword.control.conditional

[
  ":"
] @operator

[
  (exposing_everything)
  (exposing_type_constructors)
] @symbol

(module_name) @namespace
(module_import_alias) @namespace
(qualifier) @namespace

; types
(exposing_type_name) @type
(type_declaration_name) @type
(type_constructor_proper_name) @type
(type_function ("->" @type))

; type variables
(type_declaration_variable) @variable.parameter
(type_variable) @variable.parameter
(type_open_record_row_variable) @variable.parameter

; constructors
(type_declaration_constructor_name) @constructor
(expression_constructor_proper_name) @constructor
(pattern_constructor_proper_name) @constructor

; values
(value_declaration_name) @function
(pattern_variable) @variable
(expression_variable_name) @variable
(expression_function ("->" @operator))
(expression_match_arm ("->" @operator))
("<-" @operator)
("|>" @operator)

; literals
(expression_string) @string
(expression_int) @constant.numeric.integer
(expression_float) @constant.numeric.float
(expression_true) @constant.builtin.boolean
(expression_false) @constant.builtin.boolean
(expression_unit) @constant.builtin
