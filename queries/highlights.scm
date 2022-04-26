; Following the nvim-treesitter highlights for now:
; https://github.com/nvim-treesitter/nvim-treesitter/blob/3a92d77b5684d58d777675c1863d304e0be71250/lua/nvim-treesitter/highlight.lua
; 
; See :h nvim-treesitter-highlights
; 
; Particularly the Haskell highlight queries:
; https://github.com/nvim-treesitter/nvim-treesitter/blob/3a92d77b5684d58d777675c1863d304e0be71250/queries/haskell/highlights.scm

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
  "type"
  "foreign"
  "do"
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
] @conditional

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
(type_declaration_variable) @parameter
(type_variable) @parameter

; constructors
(type_declaration_constructor_name) @constructor
(expression_constructor_proper_name) @constructor
(pattern_constructor_proper_name) @constructor

; values
(value_declaration_name) @function
(expression_function ("->" @operator))
(expression_match_arm ("->" @operator))
("<-" @operator)
("|>" @operator)

; literals
(expression_string) @string
(expression_int) @number
(expression_float) @float
(expression_true) @boolean
(expression_false) @boolean
(expression_unit) @symbol
