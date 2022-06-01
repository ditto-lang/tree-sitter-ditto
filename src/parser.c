#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 294
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 123
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 34
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 59

enum {
  anon_sym_module = 1,
  anon_sym_exports = 2,
  anon_sym_SEMI = 3,
  anon_sym_DOT = 4,
  anon_sym_import = 5,
  anon_sym_as = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_COMMA = 9,
  anon_sym_DOT_DOT = 10,
  anon_sym_type = 11,
  anon_sym_EQ = 12,
  anon_sym_PIPE = 13,
  anon_sym_DASH_GT = 14,
  anon_sym_COLON = 15,
  anon_sym_foreign = 16,
  anon_sym_PIPE_GT = 17,
  anon_sym_fn = 18,
  anon_sym_if = 19,
  anon_sym_then = 20,
  anon_sym_else = 21,
  anon_sym_match = 22,
  anon_sym_with = 23,
  anon_sym_end = 24,
  anon_sym_do = 25,
  anon_sym_LBRACE = 26,
  anon_sym_RBRACE = 27,
  anon_sym_LT_DASH = 28,
  anon_sym_return = 29,
  anon_sym_LBRACK = 30,
  anon_sym_RBRACK = 31,
  sym_expression_string = 32,
  sym_expression_int = 33,
  sym_expression_float = 34,
  sym_expression_true = 35,
  sym_expression_false = 36,
  sym_expression_unit = 37,
  sym__proper_name = 38,
  sym__package_name = 39,
  sym__name = 40,
  sym_comment = 41,
  sym_source_file = 42,
  sym_module_header = 43,
  sym_module_name = 44,
  sym_module_import = 45,
  sym_module_import_package = 46,
  sym_module_import_alias = 47,
  sym__exposing = 48,
  sym_exposing_everything = 49,
  sym_exposing_list = 50,
  sym__exposing_list_item = 51,
  sym_exposing_type = 52,
  sym_exposing_type_name = 53,
  sym_exposing_type_constructors = 54,
  sym__everything = 55,
  sym_exposing_value = 56,
  sym__module_declaration = 57,
  sym__type_declaration = 58,
  sym_empty_type_declaration = 59,
  sym_type_declaration = 60,
  sym_type_declaration_name = 61,
  sym_type_declaration_variables = 62,
  sym_type_declaration_variable = 63,
  sym_type_declaration_constructor = 64,
  sym_type_declaration_constructor_name = 65,
  sym_type_declaration_constructor_fields = 66,
  sym__type = 67,
  sym__type1 = 68,
  sym_type_function = 69,
  sym__type_parens = 70,
  sym_type_call = 71,
  sym_type_call_arguments = 72,
  sym_type_constructor = 73,
  sym_type_constructor_proper_name = 74,
  sym_type_variable = 75,
  sym_type_annotation = 76,
  sym_return_type_annotation = 77,
  sym_foreign_value_declaration = 78,
  sym_value_declaration = 79,
  sym_value_declaration_name = 80,
  sym__expression = 81,
  sym__expression2 = 82,
  sym__expression1 = 83,
  sym__expression0 = 84,
  sym_expression_right_pipe = 85,
  sym_expression_function = 86,
  sym_expression_function_parameter = 87,
  sym_expression_function_parameter_name = 88,
  sym_expression_if = 89,
  sym_expression_match = 90,
  sym_expression_effect = 91,
  sym__expression_effect_statement = 92,
  sym_expression_effect_bind = 93,
  sym_expression_effect_expression = 94,
  sym_expression_effect_bind_name = 95,
  sym_expression_effect_return = 96,
  sym_expression_match_arm = 97,
  sym__expression_parens = 98,
  sym_expression_call = 99,
  sym_expression_call_arguments = 100,
  sym_expression_array = 101,
  sym_expression_constructor = 102,
  sym_expression_constructor_proper_name = 103,
  sym_expression_variable = 104,
  sym_expression_variable_name = 105,
  sym__pattern = 106,
  sym_pattern_constructor = 107,
  sym_pattern_constructor_proper_name = 108,
  sym_pattern_constructor_fields = 109,
  sym_pattern_variable = 110,
  sym_qualifier = 111,
  aux_sym_source_file_repeat1 = 112,
  aux_sym_source_file_repeat2 = 113,
  aux_sym_module_name_repeat1 = 114,
  aux_sym_exposing_list_repeat1 = 115,
  aux_sym_type_declaration_repeat1 = 116,
  aux_sym_type_declaration_variables_repeat1 = 117,
  aux_sym_type_declaration_constructor_fields_repeat1 = 118,
  aux_sym_expression_function_repeat1 = 119,
  aux_sym_expression_match_repeat1 = 120,
  aux_sym_expression_call_arguments_repeat1 = 121,
  aux_sym_pattern_constructor_fields_repeat1 = 122,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_exports] = "exports",
  [anon_sym_SEMI] = ";",
  [anon_sym_DOT] = ".",
  [anon_sym_import] = "import",
  [anon_sym_as] = "as",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_type] = "type",
  [anon_sym_EQ] = "=",
  [anon_sym_PIPE] = "|",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_COLON] = ":",
  [anon_sym_foreign] = "foreign",
  [anon_sym_PIPE_GT] = "|>",
  [anon_sym_fn] = "fn",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_match] = "match",
  [anon_sym_with] = "with",
  [anon_sym_end] = "end",
  [anon_sym_do] = "do",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_return] = "return",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_expression_string] = "expression_string",
  [sym_expression_int] = "expression_int",
  [sym_expression_float] = "expression_float",
  [sym_expression_true] = "expression_true",
  [sym_expression_false] = "expression_false",
  [sym_expression_unit] = "expression_unit",
  [sym__proper_name] = "_proper_name",
  [sym__package_name] = "_package_name",
  [sym__name] = "_name",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_module_header] = "module_header",
  [sym_module_name] = "module_name",
  [sym_module_import] = "module_import",
  [sym_module_import_package] = "module_import_package",
  [sym_module_import_alias] = "module_import_alias",
  [sym__exposing] = "_exposing",
  [sym_exposing_everything] = "exposing_everything",
  [sym_exposing_list] = "exposing_list",
  [sym__exposing_list_item] = "_exposing_list_item",
  [sym_exposing_type] = "exposing_type",
  [sym_exposing_type_name] = "exposing_type_name",
  [sym_exposing_type_constructors] = "exposing_type_constructors",
  [sym__everything] = "_everything",
  [sym_exposing_value] = "exposing_value",
  [sym__module_declaration] = "_module_declaration",
  [sym__type_declaration] = "_type_declaration",
  [sym_empty_type_declaration] = "empty_type_declaration",
  [sym_type_declaration] = "type_declaration",
  [sym_type_declaration_name] = "type_declaration_name",
  [sym_type_declaration_variables] = "type_declaration_variables",
  [sym_type_declaration_variable] = "type_declaration_variable",
  [sym_type_declaration_constructor] = "type_declaration_constructor",
  [sym_type_declaration_constructor_name] = "type_declaration_constructor_name",
  [sym_type_declaration_constructor_fields] = "type_declaration_constructor_fields",
  [sym__type] = "_type",
  [sym__type1] = "_type1",
  [sym_type_function] = "type_function",
  [sym__type_parens] = "_type_parens",
  [sym_type_call] = "type_call",
  [sym_type_call_arguments] = "type_call_arguments",
  [sym_type_constructor] = "type_constructor",
  [sym_type_constructor_proper_name] = "type_constructor_proper_name",
  [sym_type_variable] = "type_variable",
  [sym_type_annotation] = "type_annotation",
  [sym_return_type_annotation] = "return_type_annotation",
  [sym_foreign_value_declaration] = "foreign_value_declaration",
  [sym_value_declaration] = "value_declaration",
  [sym_value_declaration_name] = "value_declaration_name",
  [sym__expression] = "_expression",
  [sym__expression2] = "_expression2",
  [sym__expression1] = "_expression1",
  [sym__expression0] = "_expression0",
  [sym_expression_right_pipe] = "expression_right_pipe",
  [sym_expression_function] = "expression_function",
  [sym_expression_function_parameter] = "expression_function_parameter",
  [sym_expression_function_parameter_name] = "expression_function_parameter_name",
  [sym_expression_if] = "expression_if",
  [sym_expression_match] = "expression_match",
  [sym_expression_effect] = "expression_effect",
  [sym__expression_effect_statement] = "_expression_effect_statement",
  [sym_expression_effect_bind] = "expression_effect_bind",
  [sym_expression_effect_expression] = "expression_effect_expression",
  [sym_expression_effect_bind_name] = "expression_effect_bind_name",
  [sym_expression_effect_return] = "expression_effect_return",
  [sym_expression_match_arm] = "expression_match_arm",
  [sym__expression_parens] = "_expression_parens",
  [sym_expression_call] = "expression_call",
  [sym_expression_call_arguments] = "expression_call_arguments",
  [sym_expression_array] = "expression_array",
  [sym_expression_constructor] = "expression_constructor",
  [sym_expression_constructor_proper_name] = "expression_constructor_proper_name",
  [sym_expression_variable] = "expression_variable",
  [sym_expression_variable_name] = "expression_variable_name",
  [sym__pattern] = "_pattern",
  [sym_pattern_constructor] = "pattern_constructor",
  [sym_pattern_constructor_proper_name] = "pattern_constructor_proper_name",
  [sym_pattern_constructor_fields] = "pattern_constructor_fields",
  [sym_pattern_variable] = "pattern_variable",
  [sym_qualifier] = "qualifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_module_name_repeat1] = "module_name_repeat1",
  [aux_sym_exposing_list_repeat1] = "exposing_list_repeat1",
  [aux_sym_type_declaration_repeat1] = "type_declaration_repeat1",
  [aux_sym_type_declaration_variables_repeat1] = "type_declaration_variables_repeat1",
  [aux_sym_type_declaration_constructor_fields_repeat1] = "type_declaration_constructor_fields_repeat1",
  [aux_sym_expression_function_repeat1] = "expression_function_repeat1",
  [aux_sym_expression_match_repeat1] = "expression_match_repeat1",
  [aux_sym_expression_call_arguments_repeat1] = "expression_call_arguments_repeat1",
  [aux_sym_pattern_constructor_fields_repeat1] = "pattern_constructor_fields_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_exports] = anon_sym_exports,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_foreign] = anon_sym_foreign,
  [anon_sym_PIPE_GT] = anon_sym_PIPE_GT,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_expression_string] = sym_expression_string,
  [sym_expression_int] = sym_expression_int,
  [sym_expression_float] = sym_expression_float,
  [sym_expression_true] = sym_expression_true,
  [sym_expression_false] = sym_expression_false,
  [sym_expression_unit] = sym_expression_unit,
  [sym__proper_name] = sym__proper_name,
  [sym__package_name] = sym__package_name,
  [sym__name] = sym__name,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_module_header] = sym_module_header,
  [sym_module_name] = sym_module_name,
  [sym_module_import] = sym_module_import,
  [sym_module_import_package] = sym_module_import_package,
  [sym_module_import_alias] = sym_module_import_alias,
  [sym__exposing] = sym__exposing,
  [sym_exposing_everything] = sym_exposing_everything,
  [sym_exposing_list] = sym_exposing_list,
  [sym__exposing_list_item] = sym__exposing_list_item,
  [sym_exposing_type] = sym_exposing_type,
  [sym_exposing_type_name] = sym_exposing_type_name,
  [sym_exposing_type_constructors] = sym_exposing_type_constructors,
  [sym__everything] = sym__everything,
  [sym_exposing_value] = sym_exposing_value,
  [sym__module_declaration] = sym__module_declaration,
  [sym__type_declaration] = sym__type_declaration,
  [sym_empty_type_declaration] = sym_empty_type_declaration,
  [sym_type_declaration] = sym_type_declaration,
  [sym_type_declaration_name] = sym_type_declaration_name,
  [sym_type_declaration_variables] = sym_type_declaration_variables,
  [sym_type_declaration_variable] = sym_type_declaration_variable,
  [sym_type_declaration_constructor] = sym_type_declaration_constructor,
  [sym_type_declaration_constructor_name] = sym_type_declaration_constructor_name,
  [sym_type_declaration_constructor_fields] = sym_type_declaration_constructor_fields,
  [sym__type] = sym__type,
  [sym__type1] = sym__type1,
  [sym_type_function] = sym_type_function,
  [sym__type_parens] = sym__type_parens,
  [sym_type_call] = sym_type_call,
  [sym_type_call_arguments] = sym_type_call_arguments,
  [sym_type_constructor] = sym_type_constructor,
  [sym_type_constructor_proper_name] = sym_type_constructor_proper_name,
  [sym_type_variable] = sym_type_variable,
  [sym_type_annotation] = sym_type_annotation,
  [sym_return_type_annotation] = sym_return_type_annotation,
  [sym_foreign_value_declaration] = sym_foreign_value_declaration,
  [sym_value_declaration] = sym_value_declaration,
  [sym_value_declaration_name] = sym_value_declaration_name,
  [sym__expression] = sym__expression,
  [sym__expression2] = sym__expression2,
  [sym__expression1] = sym__expression1,
  [sym__expression0] = sym__expression0,
  [sym_expression_right_pipe] = sym_expression_right_pipe,
  [sym_expression_function] = sym_expression_function,
  [sym_expression_function_parameter] = sym_expression_function_parameter,
  [sym_expression_function_parameter_name] = sym_expression_function_parameter_name,
  [sym_expression_if] = sym_expression_if,
  [sym_expression_match] = sym_expression_match,
  [sym_expression_effect] = sym_expression_effect,
  [sym__expression_effect_statement] = sym__expression_effect_statement,
  [sym_expression_effect_bind] = sym_expression_effect_bind,
  [sym_expression_effect_expression] = sym_expression_effect_expression,
  [sym_expression_effect_bind_name] = sym_expression_effect_bind_name,
  [sym_expression_effect_return] = sym_expression_effect_return,
  [sym_expression_match_arm] = sym_expression_match_arm,
  [sym__expression_parens] = sym__expression_parens,
  [sym_expression_call] = sym_expression_call,
  [sym_expression_call_arguments] = sym_expression_call_arguments,
  [sym_expression_array] = sym_expression_array,
  [sym_expression_constructor] = sym_expression_constructor,
  [sym_expression_constructor_proper_name] = sym_expression_constructor_proper_name,
  [sym_expression_variable] = sym_expression_variable,
  [sym_expression_variable_name] = sym_expression_variable_name,
  [sym__pattern] = sym__pattern,
  [sym_pattern_constructor] = sym_pattern_constructor,
  [sym_pattern_constructor_proper_name] = sym_pattern_constructor_proper_name,
  [sym_pattern_constructor_fields] = sym_pattern_constructor_fields,
  [sym_pattern_variable] = sym_pattern_variable,
  [sym_qualifier] = sym_qualifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_module_name_repeat1] = aux_sym_module_name_repeat1,
  [aux_sym_exposing_list_repeat1] = aux_sym_exposing_list_repeat1,
  [aux_sym_type_declaration_repeat1] = aux_sym_type_declaration_repeat1,
  [aux_sym_type_declaration_variables_repeat1] = aux_sym_type_declaration_variables_repeat1,
  [aux_sym_type_declaration_constructor_fields_repeat1] = aux_sym_type_declaration_constructor_fields_repeat1,
  [aux_sym_expression_function_repeat1] = aux_sym_expression_function_repeat1,
  [aux_sym_expression_match_repeat1] = aux_sym_expression_match_repeat1,
  [aux_sym_expression_call_arguments_repeat1] = aux_sym_expression_call_arguments_repeat1,
  [aux_sym_pattern_constructor_fields_repeat1] = aux_sym_pattern_constructor_fields_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exports] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foreign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_expression_string] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_int] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_float] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_true] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_false] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_unit] = {
    .visible = true,
    .named = true,
  },
  [sym__proper_name] = {
    .visible = false,
    .named = true,
  },
  [sym__package_name] = {
    .visible = false,
    .named = true,
  },
  [sym__name] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_module_header] = {
    .visible = true,
    .named = true,
  },
  [sym_module_name] = {
    .visible = true,
    .named = true,
  },
  [sym_module_import] = {
    .visible = true,
    .named = true,
  },
  [sym_module_import_package] = {
    .visible = true,
    .named = true,
  },
  [sym_module_import_alias] = {
    .visible = true,
    .named = true,
  },
  [sym__exposing] = {
    .visible = false,
    .named = true,
  },
  [sym_exposing_everything] = {
    .visible = true,
    .named = true,
  },
  [sym_exposing_list] = {
    .visible = true,
    .named = true,
  },
  [sym__exposing_list_item] = {
    .visible = false,
    .named = true,
  },
  [sym_exposing_type] = {
    .visible = true,
    .named = true,
  },
  [sym_exposing_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym_exposing_type_constructors] = {
    .visible = true,
    .named = true,
  },
  [sym__everything] = {
    .visible = false,
    .named = true,
  },
  [sym_exposing_value] = {
    .visible = true,
    .named = true,
  },
  [sym__module_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym__type_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_empty_type_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declaration_name] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declaration_variables] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declaration_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declaration_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declaration_constructor_name] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declaration_constructor_fields] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym__type1] = {
    .visible = false,
    .named = true,
  },
  [sym_type_function] = {
    .visible = true,
    .named = true,
  },
  [sym__type_parens] = {
    .visible = false,
    .named = true,
  },
  [sym_type_call] = {
    .visible = true,
    .named = true,
  },
  [sym_type_call_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_type_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_type_constructor_proper_name] = {
    .visible = true,
    .named = true,
  },
  [sym_type_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_type_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_return_type_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_foreign_value_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_value_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_value_declaration_name] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__expression2] = {
    .visible = false,
    .named = true,
  },
  [sym__expression1] = {
    .visible = false,
    .named = true,
  },
  [sym__expression0] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_right_pipe] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_function] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_function_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_function_parameter_name] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_if] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_match] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_effect] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_effect_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_effect_bind] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_effect_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_effect_bind_name] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_effect_return] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_match_arm] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_parens] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_call] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_call_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_array] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_constructor_proper_name] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_variable_name] = {
    .visible = true,
    .named = true,
  },
  [sym__pattern] = {
    .visible = false,
    .named = true,
  },
  [sym_pattern_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_constructor_proper_name] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_constructor_fields] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_qualifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exposing_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_declaration_variables_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_declaration_constructor_fields_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_function_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_match_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_call_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pattern_constructor_fields_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alias = 1,
  field_argument = 2,
  field_arguments = 3,
  field_arm = 4,
  field_bind_expression = 5,
  field_bind_name = 6,
  field_body = 7,
  field_condition = 8,
  field_constructor = 9,
  field_declaration = 10,
  field_element = 11,
  field_exports = 12,
  field_expression = 13,
  field_false_clause = 14,
  field_field = 15,
  field_fields = 16,
  field_function = 17,
  field_header = 18,
  field_import = 19,
  field_imports = 20,
  field_lhs = 21,
  field_match_arm_expression = 22,
  field_match_arm_pattern = 23,
  field_module_name = 24,
  field_name = 25,
  field_package = 26,
  field_parameter = 27,
  field_rest = 28,
  field_return_type = 29,
  field_rhs = 30,
  field_true_clause = 31,
  field_type_annotation = 32,
  field_variable = 33,
  field_variables = 34,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_argument] = "argument",
  [field_arguments] = "arguments",
  [field_arm] = "arm",
  [field_bind_expression] = "bind_expression",
  [field_bind_name] = "bind_name",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_constructor] = "constructor",
  [field_declaration] = "declaration",
  [field_element] = "element",
  [field_exports] = "exports",
  [field_expression] = "expression",
  [field_false_clause] = "false_clause",
  [field_field] = "field",
  [field_fields] = "fields",
  [field_function] = "function",
  [field_header] = "header",
  [field_import] = "import",
  [field_imports] = "imports",
  [field_lhs] = "lhs",
  [field_match_arm_expression] = "match_arm_expression",
  [field_match_arm_pattern] = "match_arm_pattern",
  [field_module_name] = "module_name",
  [field_name] = "name",
  [field_package] = "package",
  [field_parameter] = "parameter",
  [field_rest] = "rest",
  [field_return_type] = "return_type",
  [field_rhs] = "rhs",
  [field_true_clause] = "true_clause",
  [field_type_annotation] = "type_annotation",
  [field_variable] = "variable",
  [field_variables] = "variables",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 3},
  [5] = {.index = 8, .length = 1},
  [6] = {.index = 9, .length = 1},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 2},
  [10] = {.index = 16, .length = 1},
  [11] = {.index = 17, .length = 2},
  [12] = {.index = 19, .length = 2},
  [13] = {.index = 21, .length = 2},
  [14] = {.index = 23, .length = 2},
  [15] = {.index = 25, .length = 3},
  [16] = {.index = 28, .length = 3},
  [17] = {.index = 31, .length = 1},
  [18] = {.index = 32, .length = 2},
  [19] = {.index = 34, .length = 2},
  [20] = {.index = 36, .length = 1},
  [21] = {.index = 37, .length = 2},
  [22] = {.index = 39, .length = 3},
  [23] = {.index = 42, .length = 4},
  [24] = {.index = 46, .length = 4},
  [25] = {.index = 50, .length = 2},
  [26] = {.index = 52, .length = 3},
  [27] = {.index = 55, .length = 3},
  [28] = {.index = 58, .length = 2},
  [29] = {.index = 60, .length = 2},
  [30] = {.index = 62, .length = 1},
  [31] = {.index = 63, .length = 1},
  [32] = {.index = 64, .length = 5},
  [33] = {.index = 69, .length = 3},
  [34] = {.index = 72, .length = 4},
  [35] = {.index = 76, .length = 1},
  [36] = {.index = 77, .length = 4},
  [37] = {.index = 81, .length = 1},
  [38] = {.index = 82, .length = 2},
  [39] = {.index = 84, .length = 1},
  [40] = {.index = 85, .length = 3},
  [41] = {.index = 88, .length = 2},
  [42] = {.index = 90, .length = 2},
  [43] = {.index = 92, .length = 2},
  [44] = {.index = 94, .length = 5},
  [45] = {.index = 99, .length = 2},
  [46] = {.index = 101, .length = 2},
  [47] = {.index = 103, .length = 3},
  [48] = {.index = 106, .length = 3},
  [49] = {.index = 109, .length = 3},
  [50] = {.index = 112, .length = 3},
  [51] = {.index = 115, .length = 3},
  [52] = {.index = 118, .length = 3},
  [53] = {.index = 121, .length = 2},
  [54] = {.index = 123, .length = 3},
  [55] = {.index = 126, .length = 4},
  [56] = {.index = 130, .length = 4},
  [57] = {.index = 134, .length = 4},
  [58] = {.index = 138, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_header, 0},
  [1] =
    {field_header, 0},
    {field_import, 1},
  [3] =
    {field_declaration, 1},
    {field_header, 0},
  [5] =
    {field_declaration, 2},
    {field_header, 0},
    {field_import, 1},
  [8] =
    {field_module_name, 1},
  [9] =
    {field_name, 1},
  [10] =
    {field_exports, 3},
    {field_module_name, 1},
  [12] =
    {field_imports, 2},
    {field_module_name, 1},
  [14] =
    {field_module_name, 2},
    {field_package, 1},
  [16] =
    {field_name, 0},
  [17] =
    {field_name, 1},
    {field_variables, 2},
  [19] =
    {field_name, 1},
    {field_type_annotation, 2},
  [21] =
    {field_expression, 2},
    {field_name, 0},
  [23] =
    {field_arguments, 1},
    {field_function, 0},
  [25] =
    {field_alias, 2},
    {field_alias, 3},
    {field_module_name, 1},
  [28] =
    {field_imports, 3},
    {field_module_name, 2},
    {field_package, 1},
  [31] =
    {field_variable, 1},
  [32] =
    {field_constructor, 3},
    {field_name, 1},
  [34] =
    {field_fields, 1},
    {field_name, 0},
  [36] =
    {field_element, 1},
  [37] =
    {field_lhs, 0},
    {field_rhs, 2},
  [39] =
    {field_expression, 3},
    {field_name, 0},
    {field_type_annotation, 1},
  [42] =
    {field_alias, 2},
    {field_alias, 3},
    {field_imports, 4},
    {field_module_name, 1},
  [46] =
    {field_alias, 3},
    {field_alias, 4},
    {field_module_name, 2},
    {field_package, 1},
  [50] =
    {field_variable, 1},
    {field_variable, 2},
  [52] =
    {field_constructor, 3},
    {field_constructor, 4},
    {field_name, 1},
  [55] =
    {field_constructor, 4},
    {field_name, 1},
    {field_variables, 2},
  [58] =
    {field_name, 0},
    {field_type_annotation, 1},
  [60] =
    {field_element, 1},
    {field_element, 2},
  [62] =
    {field_argument, 1},
  [63] =
    {field_return_type, 3},
  [64] =
    {field_alias, 3},
    {field_alias, 4},
    {field_imports, 5},
    {field_module_name, 2},
    {field_package, 1},
  [69] =
    {field_variable, 1},
    {field_variable, 2},
    {field_variable, 3},
  [72] =
    {field_constructor, 3},
    {field_constructor, 4},
    {field_constructor, 5},
    {field_name, 1},
  [76] =
    {field_field, 1},
  [77] =
    {field_constructor, 4},
    {field_constructor, 5},
    {field_name, 1},
    {field_variables, 2},
  [81] =
    {field_body, 4},
  [82] =
    {field_arm, 3},
    {field_expression, 1},
  [84] =
    {field_rest, 2},
  [85] =
    {field_element, 1},
    {field_element, 2},
    {field_element, 3},
  [88] =
    {field_argument, 1},
    {field_argument, 2},
  [90] =
    {field_parameter, 1},
    {field_return_type, 4},
  [92] =
    {field_field, 1},
    {field_field, 2},
  [94] =
    {field_constructor, 4},
    {field_constructor, 5},
    {field_constructor, 6},
    {field_name, 1},
    {field_variables, 2},
  [99] =
    {field_body, 5},
    {field_return_type, 3},
  [101] =
    {field_body, 5},
    {field_parameter, 2},
  [103] =
    {field_condition, 1},
    {field_false_clause, 5},
    {field_true_clause, 3},
  [106] =
    {field_argument, 1},
    {field_argument, 2},
    {field_argument, 3},
  [109] =
    {field_parameter, 1},
    {field_parameter, 2},
    {field_return_type, 5},
  [112] =
    {field_field, 1},
    {field_field, 2},
    {field_field, 3},
  [115] =
    {field_body, 6},
    {field_parameter, 2},
    {field_return_type, 4},
  [118] =
    {field_body, 6},
    {field_parameter, 2},
    {field_parameter, 3},
  [121] =
    {field_match_arm_expression, 3},
    {field_match_arm_pattern, 1},
  [123] =
    {field_bind_expression, 2},
    {field_bind_name, 0},
    {field_rest, 4},
  [126] =
    {field_parameter, 1},
    {field_parameter, 2},
    {field_parameter, 3},
    {field_return_type, 6},
  [130] =
    {field_body, 7},
    {field_parameter, 2},
    {field_parameter, 3},
    {field_return_type, 5},
  [134] =
    {field_body, 7},
    {field_parameter, 2},
    {field_parameter, 3},
    {field_parameter, 4},
  [138] =
    {field_body, 8},
    {field_parameter, 2},
    {field_parameter, 3},
    {field_parameter, 4},
    {field_return_type, 6},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool anon_sym_LPAREN_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < ' '
      ? (c < '\r'
        ? (c >= '\t' && c <= '\n')
        : c <= '\r')
      : (c <= ' ' || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8203 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8288)
      : (c <= 12288 || c == 65279))));
}

static inline bool sym__proper_name_character_set_1(int32_t c) {
  return (c < 7734
    ? (c < 913
      ? (c < 422
        ? (c < 327
          ? (c < 288
            ? (c < 268
              ? (c < 258
                ? (c < 216
                  ? (c < 192
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 214)
                  : (c <= 222 || c == 256))
                : (c <= 258 || (c < 264
                  ? (c < 262
                    ? c == 260
                    : c <= 262)
                  : (c <= 264 || c == 266))))
              : (c <= 268 || (c < 278
                ? (c < 274
                  ? (c < 272
                    ? c == 270
                    : c <= 272)
                  : (c <= 274 || c == 276))
                : (c <= 278 || (c < 284
                  ? (c < 282
                    ? c == 280
                    : c <= 282)
                  : (c <= 284 || c == 286))))))
            : (c <= 288 || (c < 308
              ? (c < 298
                ? (c < 294
                  ? (c < 292
                    ? c == 290
                    : c <= 292)
                  : (c <= 294 || c == 296))
                : (c <= 298 || (c < 304
                  ? (c < 302
                    ? c == 300
                    : c <= 302)
                  : (c <= 304 || c == 306))))
              : (c <= 308 || (c < 319
                ? (c < 315
                  ? (c < 313
                    ? c == 310
                    : c <= 313)
                  : (c <= 315 || c == 317))
                : (c <= 319 || (c < 323
                  ? c == 321
                  : (c <= 323 || c == 325))))))))
          : (c <= 327 || (c < 366
            ? (c < 348
              ? (c < 338
                ? (c < 334
                  ? (c < 332
                    ? c == 330
                    : c <= 332)
                  : (c <= 334 || c == 336))
                : (c <= 338 || (c < 344
                  ? (c < 342
                    ? c == 340
                    : c <= 342)
                  : (c <= 344 || c == 346))))
              : (c <= 348 || (c < 358
                ? (c < 354
                  ? (c < 352
                    ? c == 350
                    : c <= 352)
                  : (c <= 354 || c == 356))
                : (c <= 358 || (c < 362
                  ? c == 360
                  : (c <= 362 || c == 364))))))
            : (c <= 366 || (c < 390
              ? (c < 376
                ? (c < 372
                  ? (c < 370
                    ? c == 368
                    : c <= 370)
                  : (c <= 372 || c == 374))
                : (c <= 377 || (c < 385
                  ? (c < 381
                    ? c == 379
                    : c <= 381)
                  : (c <= 386 || c == 388))))
              : (c <= 391 || (c < 412
                ? (c < 403
                  ? (c < 398
                    ? (c >= 393 && c <= 395)
                    : c <= 401)
                  : (c <= 404 || (c >= 406 && c <= 408)))
                : (c <= 413 || (c < 418
                  ? (c >= 415 && c <= 416)
                  : (c <= 418 || c == 420))))))))))
        : (c <= 423 || (c < 520
          ? (c < 478
            ? (c < 458
              ? (c < 437
                ? (c < 430
                  ? (c < 428
                    ? c == 425
                    : c <= 428)
                  : (c <= 431 || (c >= 433 && c <= 435)))
                : (c <= 437 || (c < 452
                  ? (c < 444
                    ? (c >= 439 && c <= 440)
                    : c <= 444)
                  : (c <= 452 || c == 455))))
              : (c <= 458 || (c < 469
                ? (c < 465
                  ? (c < 463
                    ? c == 461
                    : c <= 463)
                  : (c <= 465 || c == 467))
                : (c <= 469 || (c < 473
                  ? c == 471
                  : (c <= 473 || c == 475))))))
            : (c <= 478 || (c < 500
              ? (c < 488
                ? (c < 484
                  ? (c < 482
                    ? c == 480
                    : c <= 482)
                  : (c <= 484 || c == 486))
                : (c <= 488 || (c < 494
                  ? (c < 492
                    ? c == 490
                    : c <= 492)
                  : (c <= 494 || c == 497))))
              : (c <= 500 || (c < 512
                ? (c < 508
                  ? (c < 506
                    ? (c >= 502 && c <= 504)
                    : c <= 506)
                  : (c <= 508 || c == 510))
                : (c <= 512 || (c < 516
                  ? c == 514
                  : (c <= 516 || c == 518))))))))
          : (c <= 520 || (c < 558
            ? (c < 540
              ? (c < 530
                ? (c < 526
                  ? (c < 524
                    ? c == 522
                    : c <= 524)
                  : (c <= 526 || c == 528))
                : (c <= 530 || (c < 536
                  ? (c < 534
                    ? c == 532
                    : c <= 534)
                  : (c <= 536 || c == 538))))
              : (c <= 540 || (c < 550
                ? (c < 546
                  ? (c < 544
                    ? c == 542
                    : c <= 544)
                  : (c <= 546 || c == 548))
                : (c <= 550 || (c < 554
                  ? c == 552
                  : (c <= 554 || c == 556))))))
            : (c <= 558 || (c < 590
              ? (c < 577
                ? (c < 570
                  ? (c < 562
                    ? c == 560
                    : c <= 562)
                  : (c <= 571 || (c >= 573 && c <= 574)))
                : (c <= 577 || (c < 586
                  ? (c < 584
                    ? (c >= 579 && c <= 582)
                    : c <= 584)
                  : (c <= 586 || c == 588))))
              : (c <= 590 || (c < 902
                ? (c < 886
                  ? (c < 882
                    ? c == 880
                    : c <= 882)
                  : (c <= 886 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 911)))))))))))))
      : (c <= 929 || (c < 1244
        ? (c < 1166
          ? (c < 1120
            ? (c < 996
              ? (c < 986
                ? (c < 978
                  ? (c < 975
                    ? (c >= 931 && c <= 939)
                    : c <= 975)
                  : (c <= 980 || c == 984))
                : (c <= 986 || (c < 992
                  ? (c < 990
                    ? c == 988
                    : c <= 990)
                  : (c <= 992 || c == 994))))
              : (c <= 996 || (c < 1006
                ? (c < 1002
                  ? (c < 1000
                    ? c == 998
                    : c <= 1000)
                  : (c <= 1002 || c == 1004))
                : (c <= 1006 || (c < 1017
                  ? (c < 1015
                    ? c == 1012
                    : c <= 1015)
                  : (c <= 1018 || (c >= 1021 && c <= 1071)))))))
            : (c <= 1120 || (c < 1140
              ? (c < 1130
                ? (c < 1126
                  ? (c < 1124
                    ? c == 1122
                    : c <= 1124)
                  : (c <= 1126 || c == 1128))
                : (c <= 1130 || (c < 1136
                  ? (c < 1134
                    ? c == 1132
                    : c <= 1134)
                  : (c <= 1136 || c == 1138))))
              : (c <= 1140 || (c < 1150
                ? (c < 1146
                  ? (c < 1144
                    ? c == 1142
                    : c <= 1144)
                  : (c <= 1146 || c == 1148))
                : (c <= 1150 || (c < 1162
                  ? c == 1152
                  : (c <= 1162 || c == 1164))))))))
          : (c <= 1166 || (c < 1204
            ? (c < 1186
              ? (c < 1176
                ? (c < 1172
                  ? (c < 1170
                    ? c == 1168
                    : c <= 1170)
                  : (c <= 1172 || c == 1174))
                : (c <= 1176 || (c < 1182
                  ? (c < 1180
                    ? c == 1178
                    : c <= 1180)
                  : (c <= 1182 || c == 1184))))
              : (c <= 1186 || (c < 1196
                ? (c < 1192
                  ? (c < 1190
                    ? c == 1188
                    : c <= 1190)
                  : (c <= 1192 || c == 1194))
                : (c <= 1196 || (c < 1200
                  ? c == 1198
                  : (c <= 1200 || c == 1202))))))
            : (c <= 1204 || (c < 1225
              ? (c < 1214
                ? (c < 1210
                  ? (c < 1208
                    ? c == 1206
                    : c <= 1208)
                  : (c <= 1210 || c == 1212))
                : (c <= 1214 || (c < 1221
                  ? (c < 1219
                    ? (c >= 1216 && c <= 1217)
                    : c <= 1219)
                  : (c <= 1221 || c == 1223))))
              : (c <= 1225 || (c < 1236
                ? (c < 1232
                  ? (c < 1229
                    ? c == 1227
                    : c <= 1229)
                  : (c <= 1232 || c == 1234))
                : (c <= 1236 || (c < 1240
                  ? c == 1238
                  : (c <= 1240 || c == 1242))))))))))
        : (c <= 1244 || (c < 1320
          ? (c < 1282
            ? (c < 1264
              ? (c < 1254
                ? (c < 1250
                  ? (c < 1248
                    ? c == 1246
                    : c <= 1248)
                  : (c <= 1250 || c == 1252))
                : (c <= 1254 || (c < 1260
                  ? (c < 1258
                    ? c == 1256
                    : c <= 1258)
                  : (c <= 1260 || c == 1262))))
              : (c <= 1264 || (c < 1274
                ? (c < 1270
                  ? (c < 1268
                    ? c == 1266
                    : c <= 1268)
                  : (c <= 1270 || c == 1272))
                : (c <= 1274 || (c < 1278
                  ? c == 1276
                  : (c <= 1278 || c == 1280))))))
            : (c <= 1282 || (c < 1302
              ? (c < 1292
                ? (c < 1288
                  ? (c < 1286
                    ? c == 1284
                    : c <= 1286)
                  : (c <= 1288 || c == 1290))
                : (c <= 1292 || (c < 1298
                  ? (c < 1296
                    ? c == 1294
                    : c <= 1296)
                  : (c <= 1298 || c == 1300))))
              : (c <= 1302 || (c < 1312
                ? (c < 1308
                  ? (c < 1306
                    ? c == 1304
                    : c <= 1306)
                  : (c <= 1308 || c == 1310))
                : (c <= 1312 || (c < 1316
                  ? c == 1314
                  : (c <= 1316 || c == 1318))))))))
          : (c <= 1320 || (c < 7696
            ? (c < 7357
              ? (c < 4256
                ? (c < 1326
                  ? (c < 1324
                    ? c == 1322
                    : c <= 1324)
                  : (c <= 1326 || (c >= 1329 && c <= 1366)))
                : (c <= 4293 || (c < 5024
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 5109 || (c >= 7312 && c <= 7354)))))
              : (c <= 7359 || (c < 7688
                ? (c < 7684
                  ? (c < 7682
                    ? c == 7680
                    : c <= 7682)
                  : (c <= 7684 || c == 7686))
                : (c <= 7688 || (c < 7692
                  ? c == 7690
                  : (c <= 7692 || c == 7694))))))
            : (c <= 7696 || (c < 7716
              ? (c < 7706
                ? (c < 7702
                  ? (c < 7700
                    ? c == 7698
                    : c <= 7700)
                  : (c <= 7702 || c == 7704))
                : (c <= 7706 || (c < 7712
                  ? (c < 7710
                    ? c == 7708
                    : c <= 7710)
                  : (c <= 7712 || c == 7714))))
              : (c <= 7716 || (c < 7726
                ? (c < 7722
                  ? (c < 7720
                    ? c == 7718
                    : c <= 7720)
                  : (c <= 7722 || c == 7724))
                : (c <= 7726 || (c < 7730
                  ? c == 7728
                  : (c <= 7730 || c == 7732))))))))))))))
    : (c <= 7734 || (c < 11428
      ? (c < 7896
        ? (c < 7812
          ? (c < 7774
            ? (c < 7754
              ? (c < 7744
                ? (c < 7740
                  ? (c < 7738
                    ? c == 7736
                    : c <= 7738)
                  : (c <= 7740 || c == 7742))
                : (c <= 7744 || (c < 7750
                  ? (c < 7748
                    ? c == 7746
                    : c <= 7748)
                  : (c <= 7750 || c == 7752))))
              : (c <= 7754 || (c < 7764
                ? (c < 7760
                  ? (c < 7758
                    ? c == 7756
                    : c <= 7758)
                  : (c <= 7760 || c == 7762))
                : (c <= 7764 || (c < 7770
                  ? (c < 7768
                    ? c == 7766
                    : c <= 7768)
                  : (c <= 7770 || c == 7772))))))
            : (c <= 7774 || (c < 7794
              ? (c < 7784
                ? (c < 7780
                  ? (c < 7778
                    ? c == 7776
                    : c <= 7778)
                  : (c <= 7780 || c == 7782))
                : (c <= 7784 || (c < 7790
                  ? (c < 7788
                    ? c == 7786
                    : c <= 7788)
                  : (c <= 7790 || c == 7792))))
              : (c <= 7794 || (c < 7804
                ? (c < 7800
                  ? (c < 7798
                    ? c == 7796
                    : c <= 7798)
                  : (c <= 7800 || c == 7802))
                : (c <= 7804 || (c < 7808
                  ? c == 7806
                  : (c <= 7808 || c == 7810))))))))
          : (c <= 7812 || (c < 7858
            ? (c < 7840
              ? (c < 7822
                ? (c < 7818
                  ? (c < 7816
                    ? c == 7814
                    : c <= 7816)
                  : (c <= 7818 || c == 7820))
                : (c <= 7822 || (c < 7828
                  ? (c < 7826
                    ? c == 7824
                    : c <= 7826)
                  : (c <= 7828 || c == 7838))))
              : (c <= 7840 || (c < 7850
                ? (c < 7846
                  ? (c < 7844
                    ? c == 7842
                    : c <= 7844)
                  : (c <= 7846 || c == 7848))
                : (c <= 7850 || (c < 7854
                  ? c == 7852
                  : (c <= 7854 || c == 7856))))))
            : (c <= 7858 || (c < 7878
              ? (c < 7868
                ? (c < 7864
                  ? (c < 7862
                    ? c == 7860
                    : c <= 7862)
                  : (c <= 7864 || c == 7866))
                : (c <= 7868 || (c < 7874
                  ? (c < 7872
                    ? c == 7870
                    : c <= 7872)
                  : (c <= 7874 || c == 7876))))
              : (c <= 7878 || (c < 7888
                ? (c < 7884
                  ? (c < 7882
                    ? c == 7880
                    : c <= 7882)
                  : (c <= 7884 || c == 7886))
                : (c <= 7888 || (c < 7892
                  ? c == 7890
                  : (c <= 7892 || c == 7894))))))))))
        : (c <= 7896 || (c < 8464
          ? (c < 7934
            ? (c < 7916
              ? (c < 7906
                ? (c < 7902
                  ? (c < 7900
                    ? c == 7898
                    : c <= 7900)
                  : (c <= 7902 || c == 7904))
                : (c <= 7906 || (c < 7912
                  ? (c < 7910
                    ? c == 7908
                    : c <= 7910)
                  : (c <= 7912 || c == 7914))))
              : (c <= 7916 || (c < 7926
                ? (c < 7922
                  ? (c < 7920
                    ? c == 7918
                    : c <= 7920)
                  : (c <= 7922 || c == 7924))
                : (c <= 7926 || (c < 7930
                  ? c == 7928
                  : (c <= 7930 || c == 7932))))))
            : (c <= 7934 || (c < 8040
              ? (c < 8008
                ? (c < 7976
                  ? (c < 7960
                    ? (c >= 7944 && c <= 7951)
                    : c <= 7965)
                  : (c <= 7983 || (c >= 7992 && c <= 7999)))
                : (c <= 8013 || (c < 8029
                  ? (c < 8027
                    ? c == 8025
                    : c <= 8027)
                  : (c <= 8029 || c == 8031))))
              : (c <= 8047 || (c < 8184
                ? (c < 8152
                  ? (c < 8136
                    ? (c >= 8120 && c <= 8123)
                    : c <= 8139)
                  : (c <= 8155 || (c >= 8168 && c <= 8172)))
                : (c <= 8187 || (c < 8455
                  ? c == 8450
                  : (c <= 8455 || (c >= 8459 && c <= 8461)))))))))
          : (c <= 8466 || (c < 11381
            ? (c < 8579
              ? (c < 8488
                ? (c < 8484
                  ? (c < 8473
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8510
                  ? (c < 8496
                    ? (c >= 8490 && c <= 8493)
                    : c <= 8499)
                  : (c <= 8511 || c == 8517))))
              : (c <= 8579 || (c < 11369
                ? (c < 11362
                  ? (c < 11360
                    ? (c >= 11264 && c <= 11311)
                    : c <= 11360)
                  : (c <= 11364 || c == 11367))
                : (c <= 11369 || (c < 11373
                  ? c == 11371
                  : (c <= 11376 || c == 11378))))))
            : (c <= 11381 || (c < 11410
              ? (c < 11400
                ? (c < 11396
                  ? (c < 11394
                    ? (c >= 11390 && c <= 11392)
                    : c <= 11394)
                  : (c <= 11396 || c == 11398))
                : (c <= 11400 || (c < 11406
                  ? (c < 11404
                    ? c == 11402
                    : c <= 11404)
                  : (c <= 11406 || c == 11408))))
              : (c <= 11410 || (c < 11420
                ? (c < 11416
                  ? (c < 11414
                    ? c == 11412
                    : c <= 11414)
                  : (c <= 11416 || c == 11418))
                : (c <= 11420 || (c < 11424
                  ? c == 11422
                  : (c <= 11424 || c == 11426))))))))))))
      : (c <= 11428 || (c < 42796
        ? (c < 42568
          ? (c < 11468
            ? (c < 11448
              ? (c < 11438
                ? (c < 11434
                  ? (c < 11432
                    ? c == 11430
                    : c <= 11432)
                  : (c <= 11434 || c == 11436))
                : (c <= 11438 || (c < 11444
                  ? (c < 11442
                    ? c == 11440
                    : c <= 11442)
                  : (c <= 11444 || c == 11446))))
              : (c <= 11448 || (c < 11458
                ? (c < 11454
                  ? (c < 11452
                    ? c == 11450
                    : c <= 11452)
                  : (c <= 11454 || c == 11456))
                : (c <= 11458 || (c < 11464
                  ? (c < 11462
                    ? c == 11460
                    : c <= 11462)
                  : (c <= 11464 || c == 11466))))))
            : (c <= 11468 || (c < 11488
              ? (c < 11478
                ? (c < 11474
                  ? (c < 11472
                    ? c == 11470
                    : c <= 11472)
                  : (c <= 11474 || c == 11476))
                : (c <= 11478 || (c < 11484
                  ? (c < 11482
                    ? c == 11480
                    : c <= 11482)
                  : (c <= 11484 || c == 11486))))
              : (c <= 11488 || (c < 42560
                ? (c < 11501
                  ? (c < 11499
                    ? c == 11490
                    : c <= 11499)
                  : (c <= 11501 || c == 11506))
                : (c <= 42560 || (c < 42564
                  ? c == 42562
                  : (c <= 42564 || c == 42566))))))))
          : (c <= 42568 || (c < 42624
            ? (c < 42588
              ? (c < 42578
                ? (c < 42574
                  ? (c < 42572
                    ? c == 42570
                    : c <= 42572)
                  : (c <= 42574 || c == 42576))
                : (c <= 42578 || (c < 42584
                  ? (c < 42582
                    ? c == 42580
                    : c <= 42582)
                  : (c <= 42584 || c == 42586))))
              : (c <= 42588 || (c < 42598
                ? (c < 42594
                  ? (c < 42592
                    ? c == 42590
                    : c <= 42592)
                  : (c <= 42594 || c == 42596))
                : (c <= 42598 || (c < 42602
                  ? c == 42600
                  : (c <= 42602 || c == 42604))))))
            : (c <= 42624 || (c < 42644
              ? (c < 42634
                ? (c < 42630
                  ? (c < 42628
                    ? c == 42626
                    : c <= 42628)
                  : (c <= 42630 || c == 42632))
                : (c <= 42634 || (c < 42640
                  ? (c < 42638
                    ? c == 42636
                    : c <= 42638)
                  : (c <= 42640 || c == 42642))))
              : (c <= 42644 || (c < 42788
                ? (c < 42650
                  ? (c < 42648
                    ? c == 42646
                    : c <= 42648)
                  : (c <= 42650 || c == 42786))
                : (c <= 42788 || (c < 42792
                  ? c == 42790
                  : (c <= 42792 || c == 42794))))))))))
        : (c <= 42796 || (c < 42884
          ? (c < 42836
            ? (c < 42818
              ? (c < 42808
                ? (c < 42804
                  ? (c < 42802
                    ? c == 42798
                    : c <= 42802)
                  : (c <= 42804 || c == 42806))
                : (c <= 42808 || (c < 42814
                  ? (c < 42812
                    ? c == 42810
                    : c <= 42812)
                  : (c <= 42814 || c == 42816))))
              : (c <= 42818 || (c < 42828
                ? (c < 42824
                  ? (c < 42822
                    ? c == 42820
                    : c <= 42822)
                  : (c <= 42824 || c == 42826))
                : (c <= 42828 || (c < 42832
                  ? c == 42830
                  : (c <= 42832 || c == 42834))))))
            : (c <= 42836 || (c < 42856
              ? (c < 42846
                ? (c < 42842
                  ? (c < 42840
                    ? c == 42838
                    : c <= 42840)
                  : (c <= 42842 || c == 42844))
                : (c <= 42846 || (c < 42852
                  ? (c < 42850
                    ? c == 42848
                    : c <= 42850)
                  : (c <= 42852 || c == 42854))))
              : (c <= 42856 || (c < 42875
                ? (c < 42862
                  ? (c < 42860
                    ? c == 42858
                    : c <= 42860)
                  : (c <= 42862 || c == 42873))
                : (c <= 42875 || (c < 42880
                  ? (c >= 42877 && c <= 42878)
                  : (c <= 42880 || c == 42882))))))))
          : (c <= 42884 || (c < 42936
            ? (c < 42910
              ? (c < 42898
                ? (c < 42893
                  ? (c < 42891
                    ? c == 42886
                    : c <= 42891)
                  : (c <= 42893 || c == 42896))
                : (c <= 42898 || (c < 42906
                  ? (c < 42904
                    ? c == 42902
                    : c <= 42904)
                  : (c <= 42906 || c == 42908))))
              : (c <= 42910 || (c < 42920
                ? (c < 42916
                  ? (c < 42914
                    ? c == 42912
                    : c <= 42914)
                  : (c <= 42916 || c == 42918))
                : (c <= 42920 || (c < 42928
                  ? (c >= 42922 && c <= 42926)
                  : (c <= 42932 || c == 42934))))))
            : (c <= 42936 || (c < 42968
              ? (c < 42946
                ? (c < 42942
                  ? (c < 42940
                    ? c == 42938
                    : c <= 42940)
                  : (c <= 42942 || c == 42944))
                : (c <= 42946 || (c < 42960
                  ? (c < 42953
                    ? (c >= 42948 && c <= 42951)
                    : c <= 42953)
                  : (c <= 42960 || c == 42966))))
              : (c <= 42968 || (c < 66928
                ? (c < 66560
                  ? (c < 65313
                    ? c == 42997
                    : c <= 65338)
                  : (c <= 66599 || (c >= 66736 && c <= 66771)))
                : (c <= 66938 || (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))))))))))))))));
}

static inline bool sym__package_name_character_set_1(int32_t c) {
  return (c < 7749
    ? (c < 987
      ? (c < 424
        ? (c < 326
          ? (c < 287
            ? (c < 267
              ? (c < 257
                ? (c < 223
                  ? (c < 181
                    ? (c >= 'a' && c <= 'z')
                    : c <= 181)
                  : (c <= 246 || (c >= 248 && c <= 255)))
                : (c <= 257 || (c < 263
                  ? (c < 261
                    ? c == 259
                    : c <= 261)
                  : (c <= 263 || c == 265))))
              : (c <= 267 || (c < 277
                ? (c < 273
                  ? (c < 271
                    ? c == 269
                    : c <= 271)
                  : (c <= 273 || c == 275))
                : (c <= 277 || (c < 283
                  ? (c < 281
                    ? c == 279
                    : c <= 281)
                  : (c <= 283 || c == 285))))))
            : (c <= 287 || (c < 307
              ? (c < 297
                ? (c < 293
                  ? (c < 291
                    ? c == 289
                    : c <= 291)
                  : (c <= 293 || c == 295))
                : (c <= 297 || (c < 303
                  ? (c < 301
                    ? c == 299
                    : c <= 301)
                  : (c <= 303 || c == 305))))
              : (c <= 307 || (c < 318
                ? (c < 314
                  ? (c < 311
                    ? c == 309
                    : c <= 312)
                  : (c <= 314 || c == 316))
                : (c <= 318 || (c < 322
                  ? c == 320
                  : (c <= 322 || c == 324))))))))
          : (c <= 326 || (c < 367
            ? (c < 347
              ? (c < 337
                ? (c < 333
                  ? (c < 331
                    ? (c >= 328 && c <= 329)
                    : c <= 331)
                  : (c <= 333 || c == 335))
                : (c <= 337 || (c < 343
                  ? (c < 341
                    ? c == 339
                    : c <= 341)
                  : (c <= 343 || c == 345))))
              : (c <= 347 || (c < 357
                ? (c < 353
                  ? (c < 351
                    ? c == 349
                    : c <= 351)
                  : (c <= 353 || c == 355))
                : (c <= 357 || (c < 363
                  ? (c < 361
                    ? c == 359
                    : c <= 361)
                  : (c <= 363 || c == 365))))))
            : (c <= 367 || (c < 392
              ? (c < 378
                ? (c < 373
                  ? (c < 371
                    ? c == 369
                    : c <= 371)
                  : (c <= 373 || c == 375))
                : (c <= 378 || (c < 387
                  ? (c < 382
                    ? c == 380
                    : c <= 384)
                  : (c <= 387 || c == 389))))
              : (c <= 392 || (c < 414
                ? (c < 405
                  ? (c < 402
                    ? (c >= 396 && c <= 397)
                    : c <= 402)
                  : (c <= 405 || (c >= 409 && c <= 411)))
                : (c <= 414 || (c < 419
                  ? c == 417
                  : (c <= 419 || c == 421))))))))))
        : (c <= 424 || (c < 523
          ? (c < 481
            ? (c < 460
              ? (c < 438
                ? (c < 432
                  ? (c < 429
                    ? (c >= 426 && c <= 427)
                    : c <= 429)
                  : (c <= 432 || c == 436))
                : (c <= 438 || (c < 454
                  ? (c < 445
                    ? (c >= 441 && c <= 442)
                    : c <= 447)
                  : (c <= 454 || c == 457))))
              : (c <= 460 || (c < 470
                ? (c < 466
                  ? (c < 464
                    ? c == 462
                    : c <= 464)
                  : (c <= 466 || c == 468))
                : (c <= 470 || (c < 476
                  ? (c < 474
                    ? c == 472
                    : c <= 474)
                  : (c <= 477 || c == 479))))))
            : (c <= 481 || (c < 505
              ? (c < 491
                ? (c < 487
                  ? (c < 485
                    ? c == 483
                    : c <= 485)
                  : (c <= 487 || c == 489))
                : (c <= 491 || (c < 499
                  ? (c < 495
                    ? c == 493
                    : c <= 496)
                  : (c <= 499 || c == 501))))
              : (c <= 505 || (c < 515
                ? (c < 511
                  ? (c < 509
                    ? c == 507
                    : c <= 509)
                  : (c <= 511 || c == 513))
                : (c <= 515 || (c < 519
                  ? c == 517
                  : (c <= 519 || c == 521))))))))
          : (c <= 523 || (c < 563
            ? (c < 543
              ? (c < 533
                ? (c < 529
                  ? (c < 527
                    ? c == 525
                    : c <= 527)
                  : (c <= 529 || c == 531))
                : (c <= 533 || (c < 539
                  ? (c < 537
                    ? c == 535
                    : c <= 537)
                  : (c <= 539 || c == 541))))
              : (c <= 543 || (c < 553
                ? (c < 549
                  ? (c < 547
                    ? c == 545
                    : c <= 547)
                  : (c <= 549 || c == 551))
                : (c <= 553 || (c < 559
                  ? (c < 557
                    ? c == 555
                    : c <= 557)
                  : (c <= 559 || c == 561))))))
            : (c <= 569 || (c < 881
              ? (c < 585
                ? (c < 578
                  ? (c < 575
                    ? c == 572
                    : c <= 576)
                  : (c <= 578 || c == 583))
                : (c <= 585 || (c < 591
                  ? (c < 589
                    ? c == 587
                    : c <= 589)
                  : (c <= 659 || (c >= 661 && c <= 687)))))
              : (c <= 881 || (c < 940
                ? (c < 891
                  ? (c < 887
                    ? c == 883
                    : c <= 887)
                  : (c <= 893 || c == 912))
                : (c <= 974 || (c < 981
                  ? (c >= 976 && c <= 977)
                  : (c <= 983 || c == 985))))))))))))
      : (c <= 987 || (c < 1257
        ? (c < 1177
          ? (c < 1131
            ? (c < 1007
              ? (c < 997
                ? (c < 993
                  ? (c < 991
                    ? c == 989
                    : c <= 991)
                  : (c <= 993 || c == 995))
                : (c <= 997 || (c < 1003
                  ? (c < 1001
                    ? c == 999
                    : c <= 1001)
                  : (c <= 1003 || c == 1005))))
              : (c <= 1011 || (c < 1121
                ? (c < 1019
                  ? (c < 1016
                    ? c == 1013
                    : c <= 1016)
                  : (c <= 1020 || (c >= 1072 && c <= 1119)))
                : (c <= 1121 || (c < 1127
                  ? (c < 1125
                    ? c == 1123
                    : c <= 1125)
                  : (c <= 1127 || c == 1129))))))
            : (c <= 1131 || (c < 1151
              ? (c < 1141
                ? (c < 1137
                  ? (c < 1135
                    ? c == 1133
                    : c <= 1135)
                  : (c <= 1137 || c == 1139))
                : (c <= 1141 || (c < 1147
                  ? (c < 1145
                    ? c == 1143
                    : c <= 1145)
                  : (c <= 1147 || c == 1149))))
              : (c <= 1151 || (c < 1169
                ? (c < 1165
                  ? (c < 1163
                    ? c == 1153
                    : c <= 1163)
                  : (c <= 1165 || c == 1167))
                : (c <= 1169 || (c < 1173
                  ? c == 1171
                  : (c <= 1173 || c == 1175))))))))
          : (c <= 1177 || (c < 1218
            ? (c < 1197
              ? (c < 1187
                ? (c < 1183
                  ? (c < 1181
                    ? c == 1179
                    : c <= 1181)
                  : (c <= 1183 || c == 1185))
                : (c <= 1187 || (c < 1193
                  ? (c < 1191
                    ? c == 1189
                    : c <= 1191)
                  : (c <= 1193 || c == 1195))))
              : (c <= 1197 || (c < 1207
                ? (c < 1203
                  ? (c < 1201
                    ? c == 1199
                    : c <= 1201)
                  : (c <= 1203 || c == 1205))
                : (c <= 1207 || (c < 1213
                  ? (c < 1211
                    ? c == 1209
                    : c <= 1211)
                  : (c <= 1213 || c == 1215))))))
            : (c <= 1218 || (c < 1239
              ? (c < 1228
                ? (c < 1224
                  ? (c < 1222
                    ? c == 1220
                    : c <= 1222)
                  : (c <= 1224 || c == 1226))
                : (c <= 1228 || (c < 1235
                  ? (c < 1233
                    ? (c >= 1230 && c <= 1231)
                    : c <= 1233)
                  : (c <= 1235 || c == 1237))))
              : (c <= 1239 || (c < 1249
                ? (c < 1245
                  ? (c < 1243
                    ? c == 1241
                    : c <= 1243)
                  : (c <= 1245 || c == 1247))
                : (c <= 1249 || (c < 1253
                  ? c == 1251
                  : (c <= 1253 || c == 1255))))))))))
        : (c <= 1257 || (c < 5112
          ? (c < 1297
            ? (c < 1277
              ? (c < 1267
                ? (c < 1263
                  ? (c < 1261
                    ? c == 1259
                    : c <= 1261)
                  : (c <= 1263 || c == 1265))
                : (c <= 1267 || (c < 1273
                  ? (c < 1271
                    ? c == 1269
                    : c <= 1271)
                  : (c <= 1273 || c == 1275))))
              : (c <= 1277 || (c < 1287
                ? (c < 1283
                  ? (c < 1281
                    ? c == 1279
                    : c <= 1281)
                  : (c <= 1283 || c == 1285))
                : (c <= 1287 || (c < 1293
                  ? (c < 1291
                    ? c == 1289
                    : c <= 1291)
                  : (c <= 1293 || c == 1295))))))
            : (c <= 1297 || (c < 1317
              ? (c < 1307
                ? (c < 1303
                  ? (c < 1301
                    ? c == 1299
                    : c <= 1301)
                  : (c <= 1303 || c == 1305))
                : (c <= 1307 || (c < 1313
                  ? (c < 1311
                    ? c == 1309
                    : c <= 1311)
                  : (c <= 1313 || c == 1315))))
              : (c <= 1317 || (c < 1327
                ? (c < 1323
                  ? (c < 1321
                    ? c == 1319
                    : c <= 1321)
                  : (c <= 1323 || c == 1325))
                : (c <= 1327 || (c < 4304
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 4346 || (c >= 4349 && c <= 4351)))))))))
          : (c <= 5117 || (c < 7711
            ? (c < 7691
              ? (c < 7681
                ? (c < 7531
                  ? (c < 7424
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7467)
                  : (c <= 7543 || (c >= 7545 && c <= 7578)))
                : (c <= 7681 || (c < 7687
                  ? (c < 7685
                    ? c == 7683
                    : c <= 7685)
                  : (c <= 7687 || c == 7689))))
              : (c <= 7691 || (c < 7701
                ? (c < 7697
                  ? (c < 7695
                    ? c == 7693
                    : c <= 7695)
                  : (c <= 7697 || c == 7699))
                : (c <= 7701 || (c < 7707
                  ? (c < 7705
                    ? c == 7703
                    : c <= 7705)
                  : (c <= 7707 || c == 7709))))))
            : (c <= 7711 || (c < 7731
              ? (c < 7721
                ? (c < 7717
                  ? (c < 7715
                    ? c == 7713
                    : c <= 7715)
                  : (c <= 7717 || c == 7719))
                : (c <= 7721 || (c < 7727
                  ? (c < 7725
                    ? c == 7723
                    : c <= 7725)
                  : (c <= 7727 || c == 7729))))
              : (c <= 7731 || (c < 7741
                ? (c < 7737
                  ? (c < 7735
                    ? c == 7733
                    : c <= 7735)
                  : (c <= 7737 || c == 7739))
                : (c <= 7741 || (c < 7745
                  ? c == 7743
                  : (c <= 7745 || c == 7747))))))))))))))
    : (c <= 7749 || (c < 11447
      ? (c < 7913
        ? (c < 7827
          ? (c < 7789
            ? (c < 7769
              ? (c < 7759
                ? (c < 7755
                  ? (c < 7753
                    ? c == 7751
                    : c <= 7753)
                  : (c <= 7755 || c == 7757))
                : (c <= 7759 || (c < 7765
                  ? (c < 7763
                    ? c == 7761
                    : c <= 7763)
                  : (c <= 7765 || c == 7767))))
              : (c <= 7769 || (c < 7779
                ? (c < 7775
                  ? (c < 7773
                    ? c == 7771
                    : c <= 7773)
                  : (c <= 7775 || c == 7777))
                : (c <= 7779 || (c < 7785
                  ? (c < 7783
                    ? c == 7781
                    : c <= 7783)
                  : (c <= 7785 || c == 7787))))))
            : (c <= 7789 || (c < 7809
              ? (c < 7799
                ? (c < 7795
                  ? (c < 7793
                    ? c == 7791
                    : c <= 7793)
                  : (c <= 7795 || c == 7797))
                : (c <= 7799 || (c < 7805
                  ? (c < 7803
                    ? c == 7801
                    : c <= 7803)
                  : (c <= 7805 || c == 7807))))
              : (c <= 7809 || (c < 7819
                ? (c < 7815
                  ? (c < 7813
                    ? c == 7811
                    : c <= 7813)
                  : (c <= 7815 || c == 7817))
                : (c <= 7819 || (c < 7823
                  ? c == 7821
                  : (c <= 7823 || c == 7825))))))))
          : (c <= 7827 || (c < 7875
            ? (c < 7855
              ? (c < 7845
                ? (c < 7841
                  ? (c < 7839
                    ? (c >= 7829 && c <= 7837)
                    : c <= 7839)
                  : (c <= 7841 || c == 7843))
                : (c <= 7845 || (c < 7851
                  ? (c < 7849
                    ? c == 7847
                    : c <= 7849)
                  : (c <= 7851 || c == 7853))))
              : (c <= 7855 || (c < 7865
                ? (c < 7861
                  ? (c < 7859
                    ? c == 7857
                    : c <= 7859)
                  : (c <= 7861 || c == 7863))
                : (c <= 7865 || (c < 7871
                  ? (c < 7869
                    ? c == 7867
                    : c <= 7869)
                  : (c <= 7871 || c == 7873))))))
            : (c <= 7875 || (c < 7895
              ? (c < 7885
                ? (c < 7881
                  ? (c < 7879
                    ? c == 7877
                    : c <= 7879)
                  : (c <= 7881 || c == 7883))
                : (c <= 7885 || (c < 7891
                  ? (c < 7889
                    ? c == 7887
                    : c <= 7889)
                  : (c <= 7891 || c == 7893))))
              : (c <= 7895 || (c < 7905
                ? (c < 7901
                  ? (c < 7899
                    ? c == 7897
                    : c <= 7899)
                  : (c <= 7901 || c == 7903))
                : (c <= 7905 || (c < 7909
                  ? c == 7907
                  : (c <= 7909 || c == 7911))))))))))
        : (c <= 7913 || (c < 8518
          ? (c < 8080
            ? (c < 7933
              ? (c < 7923
                ? (c < 7919
                  ? (c < 7917
                    ? c == 7915
                    : c <= 7917)
                  : (c <= 7919 || c == 7921))
                : (c <= 7923 || (c < 7929
                  ? (c < 7927
                    ? c == 7925
                    : c <= 7927)
                  : (c <= 7929 || c == 7931))))
              : (c <= 7933 || (c < 8000
                ? (c < 7968
                  ? (c < 7952
                    ? (c >= 7935 && c <= 7943)
                    : c <= 7957)
                  : (c <= 7975 || (c >= 7984 && c <= 7991)))
                : (c <= 8005 || (c < 8048
                  ? (c < 8032
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8039)
                  : (c <= 8061 || (c >= 8064 && c <= 8071)))))))
            : (c <= 8087 || (c < 8178
              ? (c < 8130
                ? (c < 8118
                  ? (c < 8112
                    ? (c >= 8096 && c <= 8103)
                    : c <= 8116)
                  : (c <= 8119 || c == 8126))
                : (c <= 8132 || (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8135)
                    : c <= 8147)
                  : (c <= 8151 || (c >= 8160 && c <= 8167)))))
              : (c <= 8180 || (c < 8495
                ? (c < 8462
                  ? (c < 8458
                    ? (c >= 8182 && c <= 8183)
                    : c <= 8458)
                  : (c <= 8463 || c == 8467))
                : (c <= 8495 || (c < 8505
                  ? c == 8500
                  : (c <= 8505 || (c >= 8508 && c <= 8509)))))))))
          : (c <= 8521 || (c < 11409
            ? (c < 11379
              ? (c < 11365
                ? (c < 11312
                  ? (c < 8580
                    ? c == 8526
                    : c <= 8580)
                  : (c <= 11359 || c == 11361))
                : (c <= 11366 || (c < 11372
                  ? (c < 11370
                    ? c == 11368
                    : c <= 11370)
                  : (c <= 11372 || c == 11377))))
              : (c <= 11380 || (c < 11399
                ? (c < 11395
                  ? (c < 11393
                    ? (c >= 11382 && c <= 11387)
                    : c <= 11393)
                  : (c <= 11395 || c == 11397))
                : (c <= 11399 || (c < 11405
                  ? (c < 11403
                    ? c == 11401
                    : c <= 11403)
                  : (c <= 11405 || c == 11407))))))
            : (c <= 11409 || (c < 11429
              ? (c < 11419
                ? (c < 11415
                  ? (c < 11413
                    ? c == 11411
                    : c <= 11413)
                  : (c <= 11415 || c == 11417))
                : (c <= 11419 || (c < 11425
                  ? (c < 11423
                    ? c == 11421
                    : c <= 11423)
                  : (c <= 11425 || c == 11427))))
              : (c <= 11429 || (c < 11439
                ? (c < 11435
                  ? (c < 11433
                    ? c == 11431
                    : c <= 11433)
                  : (c <= 11435 || c == 11437))
                : (c <= 11439 || (c < 11443
                  ? c == 11441
                  : (c <= 11443 || c == 11445))))))))))))
      : (c <= 11447 || (c < 42813
        ? (c < 42581
          ? (c < 11487
            ? (c < 11467
              ? (c < 11457
                ? (c < 11453
                  ? (c < 11451
                    ? c == 11449
                    : c <= 11451)
                  : (c <= 11453 || c == 11455))
                : (c <= 11457 || (c < 11463
                  ? (c < 11461
                    ? c == 11459
                    : c <= 11461)
                  : (c <= 11463 || c == 11465))))
              : (c <= 11467 || (c < 11477
                ? (c < 11473
                  ? (c < 11471
                    ? c == 11469
                    : c <= 11471)
                  : (c <= 11473 || c == 11475))
                : (c <= 11477 || (c < 11483
                  ? (c < 11481
                    ? c == 11479
                    : c <= 11481)
                  : (c <= 11483 || c == 11485))))))
            : (c <= 11487 || (c < 42563
              ? (c < 11507
                ? (c < 11500
                  ? (c < 11491
                    ? c == 11489
                    : c <= 11492)
                  : (c <= 11500 || c == 11502))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || c == 42561))))
              : (c <= 42563 || (c < 42573
                ? (c < 42569
                  ? (c < 42567
                    ? c == 42565
                    : c <= 42567)
                  : (c <= 42569 || c == 42571))
                : (c <= 42573 || (c < 42577
                  ? c == 42575
                  : (c <= 42577 || c == 42579))))))))
          : (c <= 42581 || (c < 42639
            ? (c < 42601
              ? (c < 42591
                ? (c < 42587
                  ? (c < 42585
                    ? c == 42583
                    : c <= 42585)
                  : (c <= 42587 || c == 42589))
                : (c <= 42591 || (c < 42597
                  ? (c < 42595
                    ? c == 42593
                    : c <= 42595)
                  : (c <= 42597 || c == 42599))))
              : (c <= 42601 || (c < 42629
                ? (c < 42625
                  ? (c < 42605
                    ? c == 42603
                    : c <= 42605)
                  : (c <= 42625 || c == 42627))
                : (c <= 42629 || (c < 42635
                  ? (c < 42633
                    ? c == 42631
                    : c <= 42633)
                  : (c <= 42635 || c == 42637))))))
            : (c <= 42639 || (c < 42793
              ? (c < 42649
                ? (c < 42645
                  ? (c < 42643
                    ? c == 42641
                    : c <= 42643)
                  : (c <= 42645 || c == 42647))
                : (c <= 42649 || (c < 42789
                  ? (c < 42787
                    ? c == 42651
                    : c <= 42787)
                  : (c <= 42789 || c == 42791))))
              : (c <= 42793 || (c < 42805
                ? (c < 42799
                  ? (c < 42797
                    ? c == 42795
                    : c <= 42797)
                  : (c <= 42801 || c == 42803))
                : (c <= 42805 || (c < 42809
                  ? c == 42807
                  : (c <= 42809 || c == 42811))))))))))
        : (c <= 42813 || (c < 42905
          ? (c < 42853
            ? (c < 42833
              ? (c < 42823
                ? (c < 42819
                  ? (c < 42817
                    ? c == 42815
                    : c <= 42817)
                  : (c <= 42819 || c == 42821))
                : (c <= 42823 || (c < 42829
                  ? (c < 42827
                    ? c == 42825
                    : c <= 42827)
                  : (c <= 42829 || c == 42831))))
              : (c <= 42833 || (c < 42843
                ? (c < 42839
                  ? (c < 42837
                    ? c == 42835
                    : c <= 42837)
                  : (c <= 42839 || c == 42841))
                : (c <= 42843 || (c < 42849
                  ? (c < 42847
                    ? c == 42845
                    : c <= 42847)
                  : (c <= 42849 || c == 42851))))))
            : (c <= 42853 || (c < 42881
              ? (c < 42863
                ? (c < 42859
                  ? (c < 42857
                    ? c == 42855
                    : c <= 42857)
                  : (c <= 42859 || c == 42861))
                : (c <= 42863 || (c < 42876
                  ? (c < 42874
                    ? (c >= 42865 && c <= 42872)
                    : c <= 42874)
                  : (c <= 42876 || c == 42879))))
              : (c <= 42881 || (c < 42894
                ? (c < 42887
                  ? (c < 42885
                    ? c == 42883
                    : c <= 42885)
                  : (c <= 42887 || c == 42892))
                : (c <= 42894 || (c < 42899
                  ? c == 42897
                  : (c <= 42901 || c == 42903))))))))
          : (c <= 42905 || (c < 42961
            ? (c < 42933
              ? (c < 42915
                ? (c < 42911
                  ? (c < 42909
                    ? c == 42907
                    : c <= 42909)
                  : (c <= 42911 || c == 42913))
                : (c <= 42915 || (c < 42921
                  ? (c < 42919
                    ? c == 42917
                    : c <= 42919)
                  : (c <= 42921 || c == 42927))))
              : (c <= 42933 || (c < 42943
                ? (c < 42939
                  ? (c < 42937
                    ? c == 42935
                    : c <= 42937)
                  : (c <= 42939 || c == 42941))
                : (c <= 42943 || (c < 42952
                  ? (c < 42947
                    ? c == 42945
                    : c <= 42947)
                  : (c <= 42952 || c == 42954))))))
            : (c <= 42961 || (c < 64256
              ? (c < 42998
                ? (c < 42967
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42965)
                  : (c <= 42967 || c == 42969))
                : (c <= 42998 || (c < 43872
                  ? (c < 43824
                    ? c == 43002
                    : c <= 43866)
                  : (c <= 43880 || (c >= 43888 && c <= 43967)))))
              : (c <= 64262 || (c < 66967
                ? (c < 66600
                  ? (c < 65345
                    ? (c >= 64275 && c <= 64279)
                    : c <= 65370)
                  : (c <= 66639 || (c >= 66776 && c <= 66811)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : (c <= 67001 || (c >= 67003 && c <= 67004)))))))))))))))));
}

static inline bool sym__package_name_character_set_2(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__name_character_set_1(int32_t c) {
  return (c < 8160
    ? (c < 4349
      ? (c < 661
        ? (c < 445
          ? (c < 223
            ? (c < 181
              ? (c >= 'a' && c <= 'z')
              : c <= 181)
            : (c <= 246 || (c >= 248 && c <= 442)))
          : (c <= 447 || (c < 460
            ? (c < 457
              ? c == 454
              : c <= 457)
            : (c <= 496 || (c >= 499 && c <= 659)))))
        : (c <= 687 || (c < 940
          ? (c < 891
            ? (c < 887
              ? (c >= 881 && c <= 883)
              : c <= 887)
            : (c <= 893 || c == 912))
          : (c <= 1013 || (c < 1376
            ? (c < 1163
              ? (c >= 1016 && c <= 1153)
              : c <= 1327)
            : (c <= 1416 || (c >= 4304 && c <= 4346)))))))
      : (c <= 4351 || (c < 8064
        ? (c < 7545
          ? (c < 7424
            ? (c < 7296
              ? (c >= 5112 && c <= 5117)
              : c <= 7304)
            : (c <= 7467 || (c >= 7531 && c <= 7543)))
          : (c <= 7578 || (c < 8016
            ? (c < 7968
              ? (c >= 7681 && c <= 7957)
              : c <= 8005)
            : (c <= 8023 || (c >= 8032 && c <= 8061)))))
        : (c <= 8071 || (c < 8126
          ? (c < 8112
            ? (c < 8096
              ? (c >= 8080 && c <= 8087)
              : c <= 8103)
            : (c <= 8116 || (c >= 8118 && c <= 8119)))
          : (c <= 8126 || (c < 8144
            ? (c < 8134
              ? (c >= 8130 && c <= 8132)
              : c <= 8135)
            : (c <= 8147 || (c >= 8150 && c <= 8151)))))))))
    : (c <= 8167 || (c < 42865
      ? (c < 11312
        ? (c < 8505
          ? (c < 8458
            ? (c < 8182
              ? (c >= 8178 && c <= 8180)
              : c <= 8183)
            : (c <= 8467 || (c >= 8495 && c <= 8500)))
          : (c <= 8505 || (c < 8526
            ? (c < 8518
              ? (c >= 8508 && c <= 8509)
              : c <= 8521)
            : (c <= 8526 || c == 8580))))
        : (c <= 11387 || (c < 11559
          ? (c < 11507
            ? (c < 11500
              ? (c >= 11393 && c <= 11492)
              : c <= 11502)
            : (c <= 11507 || (c >= 11520 && c <= 11557)))
          : (c <= 11559 || (c < 42625
            ? (c < 42561
              ? c == 11565
              : c <= 42605)
            : (c <= 42651 || (c >= 42787 && c <= 42863)))))))
      : (c <= 42887 || (c < 43888
        ? (c < 42965
          ? (c < 42961
            ? (c < 42897
              ? (c >= 42892 && c <= 42894)
              : c <= 42954)
            : (c <= 42961 || c == 42963))
          : (c <= 42969 || (c < 43824
            ? (c < 43002
              ? c == 42998
              : c <= 43002)
            : (c <= 43866 || (c >= 43872 && c <= 43880)))))
        : (c <= 43967 || (c < 66776
          ? (c < 65345
            ? (c < 64275
              ? (c >= 64256 && c <= 64262)
              : c <= 64279)
            : (c <= 65370 || (c >= 66600 && c <= 66639)))
          : (c <= 66811 || (c < 66995
            ? (c < 66979
              ? (c >= 66967 && c <= 66977)
              : c <= 66993)
            : (c <= 67001 || (c >= 67003 && c <= 67004)))))))))));
}

static inline bool sym__name_character_set_2(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym__name_character_set_3(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'b'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(67);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == ';') ADVANCE(70);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '[') ADVANCE(106);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'd') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 'm') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(40);
      if (lookahead == 'w') ADVANCE(32);
      if (lookahead == '{') ADVANCE(101);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '}') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(0)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == ';') ADVANCE(70);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '[') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(138);
      if (lookahead == 'f') ADVANCE(119);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == 'u') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(1)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(117);
      if (sym__name_character_set_1(lookahead)) ADVANCE(155);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '[') ADVANCE(106);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == 'd') ADVANCE(138);
      if (lookahead == 'f') ADVANCE(119);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == 'u') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(2)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(117);
      if (sym__name_character_set_1(lookahead)) ADVANCE(155);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '[') ADVANCE(106);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == 'u') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(3)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(117);
      if (sym__name_character_set_1(lookahead)) ADVANCE(155);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(108);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == ';') ADVANCE(70);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'w') ADVANCE(32);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '}') ADVANCE(102);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(11);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(6)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(117);
      if (sym__name_character_set_1(lookahead)) ADVANCE(155);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(156);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(156);
      if (lookahead == '>') ADVANCE(84);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(103);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(7);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(10)
      if (sym__package_name_character_set_1(lookahead)) ADVANCE(118);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(79);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 26:
      if (lookahead == 'g') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'h') ADVANCE(97);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(95);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(22);
      END_STATE();
    case 30:
      if (lookahead == 'h') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead == 'y') ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 'x') ADVANCE(44);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 44:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 46:
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 65:
      if (eof) ADVANCE(67);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 't') ADVANCE(154);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(65)
      if (sym__package_name_character_set_1(lookahead)) ADVANCE(155);
      END_STATE();
    case 66:
      if (eof) ADVANCE(67);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == 't') ADVANCE(154);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(66)
      if (sym__package_name_character_set_1(lookahead)) ADVANCE(155);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_exports);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(79);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_import);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_type);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '>') ADVANCE(88);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_foreign);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_fn);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_match);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_do);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_return);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_expression_string);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_expression_int);
      if (lookahead == '.') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_expression_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_expression_true);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_expression_true);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_expression_false);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_expression_false);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_expression_unit);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_expression_unit);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__proper_name);
      if (sym__name_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__package_name);
      if (sym__package_name_character_set_2(lookahead)) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(90);
      if (sym__name_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(133);
      if (sym__name_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(148);
      if (sym__name_character_set_3(lookahead)) ADVANCE(155);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c') ADVANCE(130);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(112);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(114);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(81);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(151);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(131);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f') ADVANCE(92);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g') ADVANCE(137);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h') ADVANCE(96);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(129);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(149);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(147);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'm') ADVANCE(142);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(132);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(105);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(87);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(100);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(145);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(146);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p') ADVANCE(125);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p') ADVANCE(140);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(152);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(136);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(127);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(150);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's') ADVANCE(124);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(122);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(116);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(74);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(153);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u') ADVANCE(123);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u') ADVANCE(144);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'y') ADVANCE(141);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__name);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(156);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 65},
  [32] = {.lex_state = 65},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 66},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 66},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 66},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 65},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 65},
  [110] = {.lex_state = 65},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 65},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 65},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 65},
  [121] = {.lex_state = 65},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 65},
  [125] = {.lex_state = 65},
  [126] = {.lex_state = 65},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 66},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 66},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 66},
  [141] = {.lex_state = 66},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 66},
  [144] = {.lex_state = 66},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 66},
  [153] = {.lex_state = 66},
  [154] = {.lex_state = 66},
  [155] = {.lex_state = 66},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 66},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 6},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 6},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 6},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 6},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 6},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 6},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 6},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 2},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 10},
  [293] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_exports] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_foreign] = ACTIONS(1),
    [anon_sym_PIPE_GT] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_expression_string] = ACTIONS(1),
    [sym_expression_int] = ACTIONS(1),
    [sym_expression_float] = ACTIONS(1),
    [sym_expression_true] = ACTIONS(1),
    [sym_expression_false] = ACTIONS(1),
    [sym_expression_unit] = ACTIONS(1),
    [sym__proper_name] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(283),
    [sym_module_header] = STATE(31),
    [anon_sym_module] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__proper_name,
    ACTIONS(27), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_constructor_proper_name,
    STATE(61), 1,
      sym_expression_variable_name,
    STATE(148), 1,
      sym_qualifier,
    STATE(257), 1,
      sym_expression_effect_bind_name,
    ACTIONS(21), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(71), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(23), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(255), 4,
      sym__expression_effect_statement,
      sym_expression_effect_bind,
      sym_expression_effect_expression,
      sym_expression_effect_return,
    STATE(245), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(36), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [79] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__proper_name,
    ACTIONS(27), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_constructor_proper_name,
    STATE(61), 1,
      sym_expression_variable_name,
    STATE(148), 1,
      sym_qualifier,
    STATE(257), 1,
      sym_expression_effect_bind_name,
    ACTIONS(21), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(71), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(23), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(276), 4,
      sym__expression_effect_statement,
      sym_expression_effect_bind,
      sym_expression_effect_expression,
      sym_expression_effect_return,
    STATE(245), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(36), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [158] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__proper_name,
    ACTIONS(27), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_constructor_proper_name,
    STATE(61), 1,
      sym_expression_variable_name,
    STATE(148), 1,
      sym_qualifier,
    STATE(257), 1,
      sym_expression_effect_bind_name,
    ACTIONS(21), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(71), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(23), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(279), 4,
      sym__expression_effect_statement,
      sym_expression_effect_bind,
      sym_expression_effect_expression,
      sym_expression_effect_return,
    STATE(245), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(36), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [237] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__proper_name,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    ACTIONS(31), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_constructor_proper_name,
    STATE(61), 1,
      sym_expression_variable_name,
    STATE(148), 1,
      sym_qualifier,
    ACTIONS(21), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(71), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(23), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(190), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(36), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [307] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__proper_name,
    ACTIONS(31), 1,
      sym__name,
    ACTIONS(33), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      sym_expression_constructor_proper_name,
    STATE(61), 1,
      sym_expression_variable_name,
    STATE(148), 1,
      sym_qualifier,
    ACTIONS(21), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(71), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(23), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(190), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(36), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [377] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__proper_name,
    ACTIONS(31), 1,
      sym__name,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      sym_expression_constructor_proper_name,
    STATE(61), 1,
      sym_expression_variable_name,
    STATE(148), 1,
      sym_qualifier,
    ACTIONS(21), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(71), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(23), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(190), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(36), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [447] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__proper_name,
    ACTIONS(31), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym_expression_constructor_proper_name,
    STATE(61), 1,
      sym_expression_variable_name,
    STATE(148), 1,
      sym_qualifier,
    ACTIONS(21), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(71), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(23), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(190), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(36), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [517] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__proper_name,
    ACTIONS(31), 1,
      sym__name,
    ACTIONS(39), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      sym_expression_constructor_proper_name,
    STATE(61), 1,
      sym_expression_variable_name,
    STATE(148), 1,
      sym_qualifier,
    ACTIONS(21), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(71), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(23), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(194), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(36), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [587] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__proper_name,
    ACTIONS(31), 1,
      sym__name,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym_expression_constructor_proper_name,
    STATE(61), 1,
      sym_expression_variable_name,
    STATE(148), 1,
      sym_qualifier,
    ACTIONS(21), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(71), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(23), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(179), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(36), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [657] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__proper_name,
    ACTIONS(31), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_constructor_proper_name,
    STATE(61), 1,
      sym_expression_variable_name,
    STATE(148), 1,
      sym_qualifier,
    ACTIONS(21), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(71), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(23), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(83), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(36), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [724] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__proper_name,
    ACTIONS(31), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_constructor_proper_name,
    STATE(61), 1,
      sym_expression_variable_name,
    STATE(148), 1,
      sym_qualifier,
    ACTIONS(21), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(71), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(23), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(78), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(36), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [791] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__proper_name,
    ACTIONS(31), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_constructor_proper_name,
    STATE(61), 1,
      sym_expression_variable_name,
    STATE(148), 1,
      sym_qualifier,
    ACTIONS(21), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(71), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(23), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(76), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(36), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [858] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__proper_name,
    ACTIONS(31), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_constructor_proper_name,
    STATE(61), 1,
      sym_expression_variable_name,
    STATE(148), 1,
      sym_qualifier,
    ACTIONS(21), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(71), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(23), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(190), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(36), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [925] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__proper_name,
    ACTIONS(31), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_constructor_proper_name,
    STATE(61), 1,
      sym_expression_variable_name,
    STATE(148), 1,
      sym_qualifier,
    ACTIONS(21), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(71), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(23), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(82), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(36), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [992] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__proper_name,
    ACTIONS(31), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_constructor_proper_name,
    STATE(61), 1,
      sym_expression_variable_name,
    STATE(148), 1,
      sym_qualifier,
    ACTIONS(21), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(71), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(23), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(259), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(36), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [1059] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__proper_name,
    ACTIONS(31), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_constructor_proper_name,
    STATE(61), 1,
      sym_expression_variable_name,
    STATE(148), 1,
      sym_qualifier,
    ACTIONS(21), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(71), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(23), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(81), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(36), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [1126] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__proper_name,
    ACTIONS(31), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_constructor_proper_name,
    STATE(61), 1,
      sym_expression_variable_name,
    STATE(148), 1,
      sym_qualifier,
    ACTIONS(21), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(71), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(23), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(74), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(36), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [1193] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__proper_name,
    ACTIONS(31), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_constructor_proper_name,
    STATE(61), 1,
      sym_expression_variable_name,
    STATE(148), 1,
      sym_qualifier,
    ACTIONS(21), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(71), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(23), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(251), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(36), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [1260] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__proper_name,
    ACTIONS(31), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_constructor_proper_name,
    STATE(61), 1,
      sym_expression_variable_name,
    STATE(148), 1,
      sym_qualifier,
    ACTIONS(21), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(71), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(23), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(262), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(36), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [1327] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__proper_name,
    ACTIONS(31), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_constructor_proper_name,
    STATE(61), 1,
      sym_expression_variable_name,
    STATE(148), 1,
      sym_qualifier,
    ACTIONS(21), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(71), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(23), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(79), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(36), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [1394] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__proper_name,
    ACTIONS(31), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_constructor_proper_name,
    STATE(61), 1,
      sym_expression_variable_name,
    STATE(148), 1,
      sym_qualifier,
    ACTIONS(21), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(71), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(23), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(271), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(36), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [1461] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__proper_name,
    ACTIONS(31), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_constructor_proper_name,
    STATE(61), 1,
      sym_expression_variable_name,
    STATE(148), 1,
      sym_qualifier,
    ACTIONS(21), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(71), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(23), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(273), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(36), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [1528] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__proper_name,
    ACTIONS(31), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_constructor_proper_name,
    STATE(61), 1,
      sym_expression_variable_name,
    STATE(148), 1,
      sym_qualifier,
    ACTIONS(21), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(71), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(23), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(275), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(36), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [1595] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__proper_name,
    ACTIONS(31), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_constructor_proper_name,
    STATE(61), 1,
      sym_expression_variable_name,
    STATE(148), 1,
      sym_qualifier,
    ACTIONS(21), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(71), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(23), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(234), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(36), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [1662] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__proper_name,
    ACTIONS(31), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_constructor_proper_name,
    STATE(61), 1,
      sym_expression_variable_name,
    STATE(148), 1,
      sym_qualifier,
    ACTIONS(21), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(71), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(23), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(80), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(36), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [1729] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__proper_name,
    ACTIONS(31), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_constructor_proper_name,
    STATE(61), 1,
      sym_expression_variable_name,
    STATE(148), 1,
      sym_qualifier,
    ACTIONS(21), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(71), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(23), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(73), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(36), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [1796] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__proper_name,
    ACTIONS(31), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_constructor_proper_name,
    STATE(61), 1,
      sym_expression_variable_name,
    STATE(148), 1,
      sym_qualifier,
    ACTIONS(21), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(71), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(23), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(260), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(36), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [1863] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__proper_name,
    ACTIONS(31), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_constructor_proper_name,
    STATE(61), 1,
      sym_expression_variable_name,
    STATE(148), 1,
      sym_qualifier,
    ACTIONS(21), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(71), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(23), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(256), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(36), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [1930] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__proper_name,
    ACTIONS(31), 1,
      sym__name,
    STATE(60), 1,
      sym_expression_constructor_proper_name,
    STATE(61), 1,
      sym_expression_variable_name,
    STATE(148), 1,
      sym_qualifier,
    ACTIONS(43), 2,
      sym_expression_string,
      sym_expression_float,
    ACTIONS(45), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(34), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [1974] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      anon_sym_import,
    ACTIONS(51), 1,
      anon_sym_type,
    ACTIONS(53), 1,
      anon_sym_foreign,
    ACTIONS(55), 1,
      sym__name,
    STATE(189), 1,
      sym_value_declaration_name,
    STATE(32), 2,
      sym_module_import,
      aux_sym_source_file_repeat1,
    STATE(64), 7,
      sym__module_declaration,
      sym__type_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [2009] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_import,
    ACTIONS(51), 1,
      anon_sym_type,
    ACTIONS(53), 1,
      anon_sym_foreign,
    ACTIONS(55), 1,
      sym__name,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(189), 1,
      sym_value_declaration_name,
    STATE(87), 2,
      sym_module_import,
      aux_sym_source_file_repeat1,
    STATE(69), 7,
      sym__module_declaration,
      sym__type_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [2044] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(63), 1,
      sym__proper_name,
    ACTIONS(65), 1,
      sym__name,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(235), 1,
      sym_qualifier,
    STATE(93), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(237), 5,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
  [2077] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_PIPE,
    STATE(52), 1,
      sym_expression_call_arguments,
    ACTIONS(67), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2102] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      sym__proper_name,
    ACTIONS(65), 1,
      sym__name,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(235), 1,
      sym_qualifier,
    STATE(93), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(237), 5,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
  [2135] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_PIPE,
    STATE(52), 1,
      sym_expression_call_arguments,
    ACTIONS(75), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2160] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      sym__proper_name,
    ACTIONS(65), 1,
      sym__name,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(235), 1,
      sym_qualifier,
    STATE(93), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(237), 5,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
  [2193] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      sym__proper_name,
    ACTIONS(65), 1,
      sym__name,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(235), 1,
      sym_qualifier,
    STATE(93), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(237), 5,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
  [2226] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_DOT,
    ACTIONS(87), 1,
      anon_sym_PIPE,
    ACTIONS(83), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2249] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      sym__proper_name,
    ACTIONS(65), 1,
      sym__name,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(235), 1,
      sym_qualifier,
    STATE(93), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(237), 5,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
  [2282] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      sym__proper_name,
    ACTIONS(65), 1,
      sym__name,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(235), 1,
      sym_qualifier,
    STATE(93), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(198), 5,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
  [2315] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      sym__proper_name,
    ACTIONS(65), 1,
      sym__name,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(235), 1,
      sym_qualifier,
    STATE(93), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(237), 5,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
  [2348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_PIPE,
    ACTIONS(95), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2368] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      sym__proper_name,
    ACTIONS(65), 1,
      sym__name,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(235), 1,
      sym_qualifier,
    STATE(93), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(237), 5,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
  [2398] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      sym__proper_name,
    ACTIONS(65), 1,
      sym__name,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(235), 1,
      sym_qualifier,
    STATE(93), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(211), 5,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
  [2428] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      anon_sym_type,
    ACTIONS(104), 1,
      anon_sym_foreign,
    ACTIONS(107), 1,
      sym__name,
    STATE(189), 1,
      sym_value_declaration_name,
    STATE(46), 7,
      sym__module_declaration,
      sym__type_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [2456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(110), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_PIPE,
    ACTIONS(114), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_PIPE,
    ACTIONS(118), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2516] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      sym__proper_name,
    ACTIONS(65), 1,
      sym__name,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(235), 1,
      sym_qualifier,
    STATE(93), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(132), 5,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
  [2546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_PIPE,
    ACTIONS(83), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_PIPE,
    ACTIONS(122), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_PIPE,
    ACTIONS(126), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_PIPE,
    ACTIONS(130), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_PIPE,
    ACTIONS(134), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2646] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      sym__proper_name,
    ACTIONS(65), 1,
      sym__name,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(235), 1,
      sym_qualifier,
    STATE(93), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(129), 5,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
  [2676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_PIPE,
    ACTIONS(138), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_PIPE,
    ACTIONS(142), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_PIPE,
    ACTIONS(146), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_PIPE,
    ACTIONS(150), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(154), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2776] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      sym__proper_name,
    ACTIONS(65), 1,
      sym__name,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(235), 1,
      sym_qualifier,
    STATE(93), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(253), 5,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
  [2806] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      sym__proper_name,
    ACTIONS(65), 1,
      sym__name,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(235), 1,
      sym_qualifier,
    STATE(93), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(171), 5,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
  [2836] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_type,
    ACTIONS(53), 1,
      anon_sym_foreign,
    ACTIONS(55), 1,
      sym__name,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    STATE(189), 1,
      sym_value_declaration_name,
    STATE(46), 7,
      sym__module_declaration,
      sym__type_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [2864] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      sym__proper_name,
    ACTIONS(65), 1,
      sym__name,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(235), 1,
      sym_qualifier,
    STATE(93), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(151), 5,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
  [2894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_PIPE,
    ACTIONS(160), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_PIPE,
    ACTIONS(164), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [2934] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      sym__proper_name,
    ACTIONS(65), 1,
      sym__name,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(235), 1,
      sym_qualifier,
    STATE(93), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(145), 5,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
  [2964] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_type,
    ACTIONS(53), 1,
      anon_sym_foreign,
    ACTIONS(55), 1,
      sym__name,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    STATE(189), 1,
      sym_value_declaration_name,
    STATE(46), 7,
      sym__module_declaration,
      sym__type_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [2992] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      sym__proper_name,
    ACTIONS(65), 1,
      sym__name,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(235), 1,
      sym_qualifier,
    STATE(93), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(149), 5,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
  [3022] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_PIPE,
    ACTIONS(174), 1,
      anon_sym_PIPE_GT,
    ACTIONS(170), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [3043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [3059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [3075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [3091] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__proper_name,
    ACTIONS(65), 1,
      sym__name,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(235), 1,
      sym_qualifier,
    STATE(93), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(258), 3,
      sym__type1,
      sym__type_parens,
      sym_type_call,
  [3119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [3135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [3151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [3167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [3183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [3199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [3215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [3231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [3247] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
    ACTIONS(202), 1,
      sym__proper_name,
    ACTIONS(204), 1,
      sym__name,
    STATE(111), 1,
      sym_pattern_constructor_proper_name,
    STATE(231), 1,
      sym_qualifier,
    STATE(169), 3,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
  [3271] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym__proper_name,
    ACTIONS(204), 1,
      sym__name,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      sym_pattern_constructor_proper_name,
    STATE(231), 1,
      sym_qualifier,
    STATE(223), 3,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
  [3295] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym__proper_name,
    ACTIONS(204), 1,
      sym__name,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      sym_pattern_constructor_proper_name,
    STATE(231), 1,
      sym_qualifier,
    STATE(223), 3,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
  [3319] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    ACTIONS(212), 1,
      anon_sym_import,
    STATE(87), 2,
      sym_module_import,
      aux_sym_source_file_repeat1,
    ACTIONS(215), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_DOT,
    ACTIONS(217), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [3353] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_SEMI,
    ACTIONS(221), 1,
      anon_sym_as,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(284), 1,
      sym__everything,
    STATE(290), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [3374] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym__proper_name,
    ACTIONS(204), 1,
      sym__name,
    STATE(111), 1,
      sym_pattern_constructor_proper_name,
    STATE(231), 1,
      sym_qualifier,
    STATE(286), 3,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
  [3395] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    ACTIONS(227), 1,
      sym__proper_name,
    ACTIONS(229), 1,
      sym__name,
    STATE(107), 1,
      sym_exposing_type_name,
    STATE(222), 3,
      sym__exposing_list_item,
      sym_exposing_type,
      sym_exposing_value,
  [3416] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym__proper_name,
    ACTIONS(229), 1,
      sym__name,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      sym_exposing_type_name,
    STATE(222), 3,
      sym__exposing_list_item,
      sym_exposing_type,
      sym_exposing_value,
  [3437] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    STATE(108), 1,
      sym_type_call_arguments,
    ACTIONS(233), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [3454] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym__proper_name,
    ACTIONS(204), 1,
      sym__name,
    STATE(111), 1,
      sym_pattern_constructor_proper_name,
    STATE(231), 1,
      sym_qualifier,
    STATE(223), 3,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
  [3475] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_SEMI,
    ACTIONS(239), 1,
      anon_sym_as,
    STATE(284), 1,
      sym__everything,
    STATE(261), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [3496] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym__proper_name,
    ACTIONS(229), 1,
      sym__name,
    ACTIONS(241), 1,
      anon_sym_DOT_DOT,
    STATE(107), 1,
      sym_exposing_type_name,
    STATE(177), 3,
      sym__exposing_list_item,
      sym_exposing_type,
      sym_exposing_value,
  [3517] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym__proper_name,
    ACTIONS(229), 1,
      sym__name,
    STATE(107), 1,
      sym_exposing_type_name,
    STATE(222), 3,
      sym__exposing_list_item,
      sym_exposing_type,
      sym_exposing_value,
  [3535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [3547] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_SEMI,
    STATE(284), 1,
      sym__everything,
    STATE(291), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [3565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_DOT,
    STATE(100), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(247), 4,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LPAREN,
  [3581] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_DOT,
    STATE(104), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(252), 4,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LPAREN,
  [3597] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      anon_sym_SEMI,
    STATE(284), 1,
      sym__everything,
    STATE(293), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [3615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [3627] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_DOT,
    STATE(100), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(260), 4,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LPAREN,
  [3643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [3655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [3667] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
    STATE(215), 1,
      sym__everything,
    STATE(226), 1,
      sym_exposing_type_constructors,
    ACTIONS(266), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [3695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
    ACTIONS(272), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
    ACTIONS(276), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3721] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_LPAREN,
    STATE(181), 1,
      sym_pattern_constructor_fields,
    ACTIONS(280), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [3736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_DOT,
    ACTIONS(286), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [3762] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(284), 1,
      sym__everything,
    STATE(252), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [3777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DASH_GT,
    ACTIONS(288), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [3790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 5,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_LPAREN,
  [3801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
    ACTIONS(294), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [3825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [3836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      ts_builtin_sym_end,
    ACTIONS(302), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      ts_builtin_sym_end,
    ACTIONS(306), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_LT_DASH,
    ACTIONS(138), 4,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_PIPE_GT,
      anon_sym_RBRACE,
  [3875] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_LPAREN,
    STATE(168), 1,
      sym_pattern_constructor_fields,
    ACTIONS(310), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [3890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    ACTIONS(314), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
    ACTIONS(318), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
    ACTIONS(322), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [3940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
    ACTIONS(328), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [3962] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_SEMI,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      anon_sym_EQ,
    STATE(229), 1,
      sym_type_declaration_variables,
  [3978] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    STATE(233), 1,
      sym_type_declaration_constructor_fields,
    ACTIONS(338), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [3992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [4002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [4012] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      aux_sym_expression_call_arguments_repeat1,
    ACTIONS(344), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4026] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_PIPE,
    ACTIONS(352), 1,
      anon_sym_end,
    STATE(135), 2,
      sym_expression_match_arm,
      aux_sym_expression_match_repeat1,
  [4040] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_COLON,
    STATE(239), 1,
      sym_type_annotation,
    ACTIONS(354), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4054] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_PIPE,
    ACTIONS(360), 1,
      sym__proper_name,
    STATE(131), 1,
      sym_type_declaration_constructor_name,
    STATE(197), 1,
      sym_type_declaration_constructor,
  [4070] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
    ACTIONS(364), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4082] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(368), 1,
      sym__proper_name,
    STATE(89), 1,
      sym_module_name,
    STATE(219), 1,
      sym_module_import_package,
  [4098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
    ACTIONS(372), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      ts_builtin_sym_end,
    ACTIONS(376), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4122] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_PIPE,
    ACTIONS(380), 1,
      anon_sym_end,
    STATE(135), 2,
      sym_expression_match_arm,
      aux_sym_expression_match_repeat1,
  [4136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      ts_builtin_sym_end,
    ACTIONS(384), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      ts_builtin_sym_end,
    ACTIONS(388), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [4170] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    ACTIONS(394), 1,
      sym__name,
    STATE(136), 1,
      sym_expression_function_parameter_name,
    STATE(225), 1,
      sym_expression_function_parameter,
  [4186] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      sym__name,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(136), 1,
      sym_expression_function_parameter_name,
    STATE(192), 1,
      sym_expression_function_parameter,
  [4202] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      sym__proper_name,
    ACTIONS(400), 1,
      sym__name,
    STATE(48), 1,
      sym_expression_variable_name,
    STATE(49), 1,
      sym_expression_constructor_proper_name,
  [4218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [4228] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym__proper_name,
    ACTIONS(404), 1,
      anon_sym_PIPE,
    STATE(131), 1,
      sym_type_declaration_constructor_name,
    STATE(188), 1,
      sym_type_declaration_constructor,
  [4244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [4254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      ts_builtin_sym_end,
    ACTIONS(410), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      ts_builtin_sym_end,
    ACTIONS(414), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      ts_builtin_sym_end,
    ACTIONS(418), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      ts_builtin_sym_end,
    ACTIONS(422), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4302] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      sym__name,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    STATE(136), 1,
      sym_expression_function_parameter_name,
    STATE(225), 1,
      sym_expression_function_parameter,
  [4318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      ts_builtin_sym_end,
    ACTIONS(428), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4330] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_SEMI,
    ACTIONS(432), 1,
      anon_sym_PIPE,
    STATE(170), 1,
      aux_sym_type_declaration_repeat1,
  [4343] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_PIPE,
    ACTIONS(434), 1,
      anon_sym_SEMI,
    STATE(170), 1,
      aux_sym_type_declaration_repeat1,
  [4356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [4365] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
    ACTIONS(440), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_pattern_constructor_fields_repeat1,
  [4378] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
    ACTIONS(445), 1,
      anon_sym_COMMA,
    STATE(162), 1,
      aux_sym_exposing_list_repeat1,
  [4391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [4400] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_pattern_constructor_fields_repeat1,
  [4413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [4422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    ACTIONS(456), 1,
      sym__name,
    STATE(228), 1,
      sym_type_declaration_variable,
  [4435] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    ACTIONS(460), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      aux_sym_type_declaration_variables_repeat1,
  [4448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [4457] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym_pattern_constructor_fields_repeat1,
  [4470] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_SEMI,
    ACTIONS(471), 1,
      anon_sym_PIPE,
    STATE(170), 1,
      aux_sym_type_declaration_repeat1,
  [4483] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    STATE(213), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [4496] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_PIPE,
    ACTIONS(478), 1,
      anon_sym_SEMI,
    STATE(159), 1,
      aux_sym_type_declaration_repeat1,
  [4509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [4518] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_PIPE,
    ACTIONS(478), 1,
      anon_sym_SEMI,
    STATE(170), 1,
      aux_sym_type_declaration_repeat1,
  [4531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4540] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(484), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [4553] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      aux_sym_exposing_list_repeat1,
  [4566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_DASH_GT,
    ACTIONS(492), 1,
      anon_sym_COLON,
    STATE(289), 1,
      sym_return_type_annotation,
  [4579] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      aux_sym_expression_call_arguments_repeat1,
  [4592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    ACTIONS(498), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym_expression_function_repeat1,
  [4605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [4614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
    ACTIONS(502), 1,
      anon_sym_COMMA,
    STATE(214), 1,
      aux_sym_type_declaration_variables_repeat1,
  [4627] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_RBRACK,
    ACTIONS(504), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      aux_sym_expression_call_arguments_repeat1,
  [4640] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      sym__name,
    STATE(136), 1,
      sym_expression_function_parameter_name,
    STATE(225), 1,
      sym_expression_function_parameter,
  [4653] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_COLON,
    ACTIONS(506), 1,
      anon_sym_DASH_GT,
    STATE(274), 1,
      sym_return_type_annotation,
  [4666] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym__proper_name,
    STATE(131), 1,
      sym_type_declaration_constructor_name,
    STATE(210), 1,
      sym_type_declaration_constructor,
  [4679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_PIPE,
  [4688] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_PIPE,
    ACTIONS(510), 1,
      anon_sym_SEMI,
    STATE(206), 1,
      aux_sym_type_declaration_repeat1,
  [4701] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_COLON,
    ACTIONS(512), 1,
      anon_sym_EQ,
    STATE(254), 1,
      sym_type_annotation,
  [4714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_PIPE,
    STATE(142), 2,
      sym_expression_match_arm,
      aux_sym_expression_match_repeat1,
  [4734] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_expression_function_repeat1,
  [4747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
  [4756] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    ACTIONS(522), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      aux_sym_expression_call_arguments_repeat1,
  [4769] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      aux_sym_expression_call_arguments_repeat1,
  [4782] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_COLON,
    ACTIONS(526), 1,
      anon_sym_DASH_GT,
    STATE(267), 1,
      sym_return_type_annotation,
  [4795] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_PIPE,
    ACTIONS(528), 1,
      anon_sym_SEMI,
    STATE(174), 1,
      aux_sym_type_declaration_repeat1,
  [4808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
    ACTIONS(532), 1,
      anon_sym_COMMA,
    STATE(176), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [4821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4830] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym__proper_name,
    STATE(131), 1,
      sym_type_declaration_constructor_name,
    STATE(172), 1,
      sym_type_declaration_constructor,
  [4843] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [4856] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    ACTIONS(541), 1,
      anon_sym_COMMA,
    STATE(162), 1,
      aux_sym_exposing_list_repeat1,
  [4869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_EQ,
  [4878] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [4891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [4900] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_PIPE,
    ACTIONS(549), 1,
      anon_sym_SEMI,
    STATE(170), 1,
      aux_sym_type_declaration_repeat1,
  [4913] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym__proper_name,
    STATE(131), 1,
      sym_type_declaration_constructor_name,
    STATE(230), 1,
      sym_type_declaration_constructor,
  [4926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      sym__name,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      sym_type_declaration_variable,
  [4939] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    ACTIONS(555), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym_expression_function_repeat1,
  [4952] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_PIPE,
    ACTIONS(549), 1,
      anon_sym_SEMI,
    STATE(158), 1,
      aux_sym_type_declaration_repeat1,
  [4965] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_RPAREN,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [4978] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_COLON,
    ACTIONS(562), 1,
      anon_sym_DASH_GT,
    STATE(250), 1,
      sym_return_type_annotation,
  [4991] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [5004] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      aux_sym_type_declaration_variables_repeat1,
  [5017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [5033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      sym__name,
    STATE(228), 1,
      sym_type_declaration_variable,
  [5043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [5051] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym__proper_name,
    STATE(95), 1,
      sym_module_name,
  [5061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [5069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      sym__proper_name,
    STATE(102), 1,
      sym_module_import_alias,
  [5079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [5103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      sym__name,
    STATE(182), 1,
      sym_type_declaration_variable,
  [5129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_SEMI,
    ACTIONS(584), 1,
      anon_sym_EQ,
  [5147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [5155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym__proper_name,
    STATE(123), 1,
      sym_pattern_constructor_proper_name,
  [5165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym__proper_name,
    STATE(272), 1,
      sym_module_name,
  [5175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [5183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 2,
      anon_sym_PIPE,
      anon_sym_end,
  [5191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      sym__proper_name,
    STATE(105), 1,
      sym_type_constructor_proper_name,
  [5201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [5209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 2,
      sym__proper_name,
      sym__name,
  [5241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 2,
      anon_sym_SEMI,
      anon_sym_LPAREN,
  [5249] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      sym__proper_name,
    STATE(99), 1,
      sym_module_import_alias,
  [5259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      sym__proper_name,
    STATE(130), 1,
      sym_type_declaration_name,
  [5277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_SEMI,
    ACTIONS(610), 1,
      anon_sym_RBRACE,
  [5287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [5295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_COLON,
    STATE(282), 1,
      sym_type_annotation,
  [5305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [5313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      sym__name,
    STATE(247), 1,
      sym_value_declaration_name,
  [5323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_DASH_GT,
  [5330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_SEMI,
  [5337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_SEMI,
  [5344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_RPAREN,
  [5351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_EQ,
  [5358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_RBRACE,
  [5365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_RBRACE,
  [5372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_LT_DASH,
  [5379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_DASH_GT,
  [5386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_then,
  [5393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_else,
  [5400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_SEMI,
  [5407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_with,
  [5414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      anon_sym_DASH_GT,
  [5421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      sym__proper_name,
  [5428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_DASH_GT,
  [5435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym__proper_name,
  [5442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_DASH_GT,
  [5449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_DASH_GT,
  [5456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_DASH_GT,
  [5463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_RPAREN,
  [5470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_RPAREN,
  [5477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_exports,
  [5484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_SEMI,
  [5491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_DASH_GT,
  [5498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_SEMI,
  [5505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_RBRACE,
  [5512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
  [5519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_SEMI,
  [5526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_RBRACE,
  [5533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_LBRACE,
  [5540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
  [5547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_SEMI,
  [5554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      ts_builtin_sym_end,
  [5561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_SEMI,
  [5568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_SEMI,
  [5575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_DASH_GT,
  [5582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_SEMI,
  [5589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_DOT_DOT,
  [5596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_DASH_GT,
  [5603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_SEMI,
  [5610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_SEMI,
  [5617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      sym__package_name,
  [5624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 79,
  [SMALL_STATE(4)] = 158,
  [SMALL_STATE(5)] = 237,
  [SMALL_STATE(6)] = 307,
  [SMALL_STATE(7)] = 377,
  [SMALL_STATE(8)] = 447,
  [SMALL_STATE(9)] = 517,
  [SMALL_STATE(10)] = 587,
  [SMALL_STATE(11)] = 657,
  [SMALL_STATE(12)] = 724,
  [SMALL_STATE(13)] = 791,
  [SMALL_STATE(14)] = 858,
  [SMALL_STATE(15)] = 925,
  [SMALL_STATE(16)] = 992,
  [SMALL_STATE(17)] = 1059,
  [SMALL_STATE(18)] = 1126,
  [SMALL_STATE(19)] = 1193,
  [SMALL_STATE(20)] = 1260,
  [SMALL_STATE(21)] = 1327,
  [SMALL_STATE(22)] = 1394,
  [SMALL_STATE(23)] = 1461,
  [SMALL_STATE(24)] = 1528,
  [SMALL_STATE(25)] = 1595,
  [SMALL_STATE(26)] = 1662,
  [SMALL_STATE(27)] = 1729,
  [SMALL_STATE(28)] = 1796,
  [SMALL_STATE(29)] = 1863,
  [SMALL_STATE(30)] = 1930,
  [SMALL_STATE(31)] = 1974,
  [SMALL_STATE(32)] = 2009,
  [SMALL_STATE(33)] = 2044,
  [SMALL_STATE(34)] = 2077,
  [SMALL_STATE(35)] = 2102,
  [SMALL_STATE(36)] = 2135,
  [SMALL_STATE(37)] = 2160,
  [SMALL_STATE(38)] = 2193,
  [SMALL_STATE(39)] = 2226,
  [SMALL_STATE(40)] = 2249,
  [SMALL_STATE(41)] = 2282,
  [SMALL_STATE(42)] = 2315,
  [SMALL_STATE(43)] = 2348,
  [SMALL_STATE(44)] = 2368,
  [SMALL_STATE(45)] = 2398,
  [SMALL_STATE(46)] = 2428,
  [SMALL_STATE(47)] = 2456,
  [SMALL_STATE(48)] = 2476,
  [SMALL_STATE(49)] = 2496,
  [SMALL_STATE(50)] = 2516,
  [SMALL_STATE(51)] = 2546,
  [SMALL_STATE(52)] = 2566,
  [SMALL_STATE(53)] = 2586,
  [SMALL_STATE(54)] = 2606,
  [SMALL_STATE(55)] = 2626,
  [SMALL_STATE(56)] = 2646,
  [SMALL_STATE(57)] = 2676,
  [SMALL_STATE(58)] = 2696,
  [SMALL_STATE(59)] = 2716,
  [SMALL_STATE(60)] = 2736,
  [SMALL_STATE(61)] = 2756,
  [SMALL_STATE(62)] = 2776,
  [SMALL_STATE(63)] = 2806,
  [SMALL_STATE(64)] = 2836,
  [SMALL_STATE(65)] = 2864,
  [SMALL_STATE(66)] = 2894,
  [SMALL_STATE(67)] = 2914,
  [SMALL_STATE(68)] = 2934,
  [SMALL_STATE(69)] = 2964,
  [SMALL_STATE(70)] = 2992,
  [SMALL_STATE(71)] = 3022,
  [SMALL_STATE(72)] = 3043,
  [SMALL_STATE(73)] = 3059,
  [SMALL_STATE(74)] = 3075,
  [SMALL_STATE(75)] = 3091,
  [SMALL_STATE(76)] = 3119,
  [SMALL_STATE(77)] = 3135,
  [SMALL_STATE(78)] = 3151,
  [SMALL_STATE(79)] = 3167,
  [SMALL_STATE(80)] = 3183,
  [SMALL_STATE(81)] = 3199,
  [SMALL_STATE(82)] = 3215,
  [SMALL_STATE(83)] = 3231,
  [SMALL_STATE(84)] = 3247,
  [SMALL_STATE(85)] = 3271,
  [SMALL_STATE(86)] = 3295,
  [SMALL_STATE(87)] = 3319,
  [SMALL_STATE(88)] = 3338,
  [SMALL_STATE(89)] = 3353,
  [SMALL_STATE(90)] = 3374,
  [SMALL_STATE(91)] = 3395,
  [SMALL_STATE(92)] = 3416,
  [SMALL_STATE(93)] = 3437,
  [SMALL_STATE(94)] = 3454,
  [SMALL_STATE(95)] = 3475,
  [SMALL_STATE(96)] = 3496,
  [SMALL_STATE(97)] = 3517,
  [SMALL_STATE(98)] = 3535,
  [SMALL_STATE(99)] = 3547,
  [SMALL_STATE(100)] = 3565,
  [SMALL_STATE(101)] = 3581,
  [SMALL_STATE(102)] = 3597,
  [SMALL_STATE(103)] = 3615,
  [SMALL_STATE(104)] = 3627,
  [SMALL_STATE(105)] = 3643,
  [SMALL_STATE(106)] = 3655,
  [SMALL_STATE(107)] = 3667,
  [SMALL_STATE(108)] = 3684,
  [SMALL_STATE(109)] = 3695,
  [SMALL_STATE(110)] = 3708,
  [SMALL_STATE(111)] = 3721,
  [SMALL_STATE(112)] = 3736,
  [SMALL_STATE(113)] = 3749,
  [SMALL_STATE(114)] = 3762,
  [SMALL_STATE(115)] = 3777,
  [SMALL_STATE(116)] = 3790,
  [SMALL_STATE(117)] = 3801,
  [SMALL_STATE(118)] = 3814,
  [SMALL_STATE(119)] = 3825,
  [SMALL_STATE(120)] = 3836,
  [SMALL_STATE(121)] = 3849,
  [SMALL_STATE(122)] = 3862,
  [SMALL_STATE(123)] = 3875,
  [SMALL_STATE(124)] = 3890,
  [SMALL_STATE(125)] = 3903,
  [SMALL_STATE(126)] = 3916,
  [SMALL_STATE(127)] = 3929,
  [SMALL_STATE(128)] = 3940,
  [SMALL_STATE(129)] = 3952,
  [SMALL_STATE(130)] = 3962,
  [SMALL_STATE(131)] = 3978,
  [SMALL_STATE(132)] = 3992,
  [SMALL_STATE(133)] = 4002,
  [SMALL_STATE(134)] = 4012,
  [SMALL_STATE(135)] = 4026,
  [SMALL_STATE(136)] = 4040,
  [SMALL_STATE(137)] = 4054,
  [SMALL_STATE(138)] = 4070,
  [SMALL_STATE(139)] = 4082,
  [SMALL_STATE(140)] = 4098,
  [SMALL_STATE(141)] = 4110,
  [SMALL_STATE(142)] = 4122,
  [SMALL_STATE(143)] = 4136,
  [SMALL_STATE(144)] = 4148,
  [SMALL_STATE(145)] = 4160,
  [SMALL_STATE(146)] = 4170,
  [SMALL_STATE(147)] = 4186,
  [SMALL_STATE(148)] = 4202,
  [SMALL_STATE(149)] = 4218,
  [SMALL_STATE(150)] = 4228,
  [SMALL_STATE(151)] = 4244,
  [SMALL_STATE(152)] = 4254,
  [SMALL_STATE(153)] = 4266,
  [SMALL_STATE(154)] = 4278,
  [SMALL_STATE(155)] = 4290,
  [SMALL_STATE(156)] = 4302,
  [SMALL_STATE(157)] = 4318,
  [SMALL_STATE(158)] = 4330,
  [SMALL_STATE(159)] = 4343,
  [SMALL_STATE(160)] = 4356,
  [SMALL_STATE(161)] = 4365,
  [SMALL_STATE(162)] = 4378,
  [SMALL_STATE(163)] = 4391,
  [SMALL_STATE(164)] = 4400,
  [SMALL_STATE(165)] = 4413,
  [SMALL_STATE(166)] = 4422,
  [SMALL_STATE(167)] = 4435,
  [SMALL_STATE(168)] = 4448,
  [SMALL_STATE(169)] = 4457,
  [SMALL_STATE(170)] = 4470,
  [SMALL_STATE(171)] = 4483,
  [SMALL_STATE(172)] = 4496,
  [SMALL_STATE(173)] = 4509,
  [SMALL_STATE(174)] = 4518,
  [SMALL_STATE(175)] = 4531,
  [SMALL_STATE(176)] = 4540,
  [SMALL_STATE(177)] = 4553,
  [SMALL_STATE(178)] = 4566,
  [SMALL_STATE(179)] = 4579,
  [SMALL_STATE(180)] = 4592,
  [SMALL_STATE(181)] = 4605,
  [SMALL_STATE(182)] = 4614,
  [SMALL_STATE(183)] = 4627,
  [SMALL_STATE(184)] = 4640,
  [SMALL_STATE(185)] = 4653,
  [SMALL_STATE(186)] = 4666,
  [SMALL_STATE(187)] = 4679,
  [SMALL_STATE(188)] = 4688,
  [SMALL_STATE(189)] = 4701,
  [SMALL_STATE(190)] = 4714,
  [SMALL_STATE(191)] = 4723,
  [SMALL_STATE(192)] = 4734,
  [SMALL_STATE(193)] = 4747,
  [SMALL_STATE(194)] = 4756,
  [SMALL_STATE(195)] = 4769,
  [SMALL_STATE(196)] = 4782,
  [SMALL_STATE(197)] = 4795,
  [SMALL_STATE(198)] = 4808,
  [SMALL_STATE(199)] = 4821,
  [SMALL_STATE(200)] = 4830,
  [SMALL_STATE(201)] = 4843,
  [SMALL_STATE(202)] = 4856,
  [SMALL_STATE(203)] = 4869,
  [SMALL_STATE(204)] = 4878,
  [SMALL_STATE(205)] = 4891,
  [SMALL_STATE(206)] = 4900,
  [SMALL_STATE(207)] = 4913,
  [SMALL_STATE(208)] = 4926,
  [SMALL_STATE(209)] = 4939,
  [SMALL_STATE(210)] = 4952,
  [SMALL_STATE(211)] = 4965,
  [SMALL_STATE(212)] = 4978,
  [SMALL_STATE(213)] = 4991,
  [SMALL_STATE(214)] = 5004,
  [SMALL_STATE(215)] = 5017,
  [SMALL_STATE(216)] = 5025,
  [SMALL_STATE(217)] = 5033,
  [SMALL_STATE(218)] = 5043,
  [SMALL_STATE(219)] = 5051,
  [SMALL_STATE(220)] = 5061,
  [SMALL_STATE(221)] = 5069,
  [SMALL_STATE(222)] = 5079,
  [SMALL_STATE(223)] = 5087,
  [SMALL_STATE(224)] = 5095,
  [SMALL_STATE(225)] = 5103,
  [SMALL_STATE(226)] = 5111,
  [SMALL_STATE(227)] = 5119,
  [SMALL_STATE(228)] = 5129,
  [SMALL_STATE(229)] = 5137,
  [SMALL_STATE(230)] = 5147,
  [SMALL_STATE(231)] = 5155,
  [SMALL_STATE(232)] = 5165,
  [SMALL_STATE(233)] = 5175,
  [SMALL_STATE(234)] = 5183,
  [SMALL_STATE(235)] = 5191,
  [SMALL_STATE(236)] = 5201,
  [SMALL_STATE(237)] = 5209,
  [SMALL_STATE(238)] = 5217,
  [SMALL_STATE(239)] = 5225,
  [SMALL_STATE(240)] = 5233,
  [SMALL_STATE(241)] = 5241,
  [SMALL_STATE(242)] = 5249,
  [SMALL_STATE(243)] = 5259,
  [SMALL_STATE(244)] = 5267,
  [SMALL_STATE(245)] = 5277,
  [SMALL_STATE(246)] = 5287,
  [SMALL_STATE(247)] = 5295,
  [SMALL_STATE(248)] = 5305,
  [SMALL_STATE(249)] = 5313,
  [SMALL_STATE(250)] = 5323,
  [SMALL_STATE(251)] = 5330,
  [SMALL_STATE(252)] = 5337,
  [SMALL_STATE(253)] = 5344,
  [SMALL_STATE(254)] = 5351,
  [SMALL_STATE(255)] = 5358,
  [SMALL_STATE(256)] = 5365,
  [SMALL_STATE(257)] = 5372,
  [SMALL_STATE(258)] = 5379,
  [SMALL_STATE(259)] = 5386,
  [SMALL_STATE(260)] = 5393,
  [SMALL_STATE(261)] = 5400,
  [SMALL_STATE(262)] = 5407,
  [SMALL_STATE(263)] = 5414,
  [SMALL_STATE(264)] = 5421,
  [SMALL_STATE(265)] = 5428,
  [SMALL_STATE(266)] = 5435,
  [SMALL_STATE(267)] = 5442,
  [SMALL_STATE(268)] = 5449,
  [SMALL_STATE(269)] = 5456,
  [SMALL_STATE(270)] = 5463,
  [SMALL_STATE(271)] = 5470,
  [SMALL_STATE(272)] = 5477,
  [SMALL_STATE(273)] = 5484,
  [SMALL_STATE(274)] = 5491,
  [SMALL_STATE(275)] = 5498,
  [SMALL_STATE(276)] = 5505,
  [SMALL_STATE(277)] = 5512,
  [SMALL_STATE(278)] = 5519,
  [SMALL_STATE(279)] = 5526,
  [SMALL_STATE(280)] = 5533,
  [SMALL_STATE(281)] = 5540,
  [SMALL_STATE(282)] = 5547,
  [SMALL_STATE(283)] = 5554,
  [SMALL_STATE(284)] = 5561,
  [SMALL_STATE(285)] = 5568,
  [SMALL_STATE(286)] = 5575,
  [SMALL_STATE(287)] = 5582,
  [SMALL_STATE(288)] = 5589,
  [SMALL_STATE(289)] = 5596,
  [SMALL_STATE(290)] = 5603,
  [SMALL_STATE(291)] = 5610,
  [SMALL_STATE(292)] = 5617,
  [SMALL_STATE(293)] = 5624,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_right_pipe, 3, .production_id = 21),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_right_pipe, 3, .production_id = 21),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression2, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression2, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_constructor_proper_name, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_constructor_proper_name, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 3, .production_id = 20),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_array, 3, .production_id = 20),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(244),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(249),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(248),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 5, .production_id = 40),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_array, 5, .production_id = 40),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_variable, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_variable, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_constructor, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_constructor, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call, 2, .production_id = 14),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call, 2, .production_id = 14),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 4, .production_id = 41),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call_arguments, 4, .production_id = 41),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_array, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call_arguments, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_variable_name, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_variable_name, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 5, .production_id = 48),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call_arguments, 5, .production_id = 48),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 4, .production_id = 29),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_array, 4, .production_id = 29),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_constructor, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_constructor, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_variable, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_variable, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_parens, 3),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_parens, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 3, .production_id = 30),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call_arguments, 3, .production_id = 30),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 8, .production_id = 56),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 9, .production_id = 58),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 8, .production_id = 57),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_match, 5, .production_id = 38),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 7, .production_id = 52),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 7, .production_id = 51),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 5, .production_id = 37),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 6, .production_id = 45),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_if, 6, .production_id = 47),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 6, .production_id = 46),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(139),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor_proper_name, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type1, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(266),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variable, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_type, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call, 2, .production_id = 14),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 6, .production_id = 24),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 6, .production_id = 24),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 3, .production_id = 5),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 3, .production_id = 5),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 6, .production_id = 23),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 6, .production_id = 23),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_proper_name, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_parens, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 5, .production_id = 15),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 5, .production_id = 15),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call_arguments, 5, .production_id = 48),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call_arguments, 4, .production_id = 41),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 5, .production_id = 16),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 5, .production_id = 16),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_header, 5, .production_id = 7),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_header, 5, .production_id = 7),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_bind_name, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 7, .production_id = 32),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 7, .production_id = 32),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 4, .production_id = 8),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 4, .production_id = 8),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 4, .production_id = 9),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 4, .production_id = 9),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call_arguments, 3, .production_id = 30),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 8, .production_id = 44),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 8, .production_id = 44),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 6, .production_id = 49),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor, 1, .production_id = 10),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 4, .production_id = 31),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_call_arguments_repeat1, 2),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_call_arguments_repeat1, 2), SHIFT_REPEAT(14),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_match_repeat1, 2), SHIFT_REPEAT(90),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_match_repeat1, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function_parameter, 1, .production_id = 10),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 5, .production_id = 18),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 5, .production_id = 18),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 7, .production_id = 34),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 7, .production_id = 34),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 7, .production_id = 36),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 7, .production_id = 36),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_type_declaration, 4, .production_id = 11),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_type_declaration, 4, .production_id = 11),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_value_declaration, 4, .production_id = 12),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreign_value_declaration, 4, .production_id = 12),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 7, .production_id = 55),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 5, .production_id = 42),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_type_declaration, 3, .production_id = 6),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_type_declaration, 3, .production_id = 6),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 6, .production_id = 27),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 6, .production_id = 27),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 6, .production_id = 26),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 6, .production_id = 26),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_declaration, 5, .production_id = 22),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_declaration, 5, .production_id = 22),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_declaration, 4, .production_id = 13),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_declaration, 4, .production_id = 13),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 5, .production_id = 50),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_constructor_fields_repeat1, 2),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_constructor_fields_repeat1, 2), SHIFT_REPEAT(94),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exposing_list_repeat1, 2),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exposing_list_repeat1, 2), SHIFT_REPEAT(97),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 4, .production_id = 43),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 3, .production_id = 35),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_variables_repeat1, 2),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_variables_repeat1, 2), SHIFT_REPEAT(217),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor, 3),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_repeat1, 2),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_repeat1, 2), SHIFT_REPEAT(207),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_type_name, 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_name, 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function_parameter_name, 1),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__everything, 3),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_constructor_fields_repeat1, 2),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_constructor_fields_repeat1, 2), SHIFT_REPEAT(44),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_name, 1),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_variable, 1),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_function_repeat1, 2),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_function_repeat1, 2), SHIFT_REPEAT(184),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_type_constructors, 1),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variables, 5, .production_id = 33),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_fields, 3, .production_id = 35),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variables, 3, .production_id = 17),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variables, 4, .production_id = 25),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_type, 2),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor, 2, .production_id = 19),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_match_arm, 4, .production_id = 53),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_fields, 5, .production_id = 50),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_value, 1),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function_parameter, 2, .production_id = 28),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier, 2),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import_alias, 1),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variable, 1),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_expression, 1),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_fields, 4, .production_id = 43),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_declaration_name, 1),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_return, 2),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type_annotation, 2),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import_package, 3),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_expression, 3, .production_id = 39),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list, 3),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_bind, 5, .production_id = 54),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [682] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_everything, 1),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list, 5),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list, 4),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ditto(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
