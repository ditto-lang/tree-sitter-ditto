#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 274
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 107
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 29
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 56

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
  anon_sym_if = 17,
  anon_sym_then = 18,
  anon_sym_else = 19,
  anon_sym_match = 20,
  anon_sym_with = 21,
  anon_sym_LBRACK = 22,
  anon_sym_RBRACK = 23,
  sym_expression_string = 24,
  sym_expression_int = 25,
  sym_expression_float = 26,
  sym_expression_true = 27,
  sym_expression_false = 28,
  sym_expression_unit = 29,
  sym__proper_name = 30,
  sym__package_name = 31,
  sym__name = 32,
  sym_comment = 33,
  sym_source_file = 34,
  sym_module_header = 35,
  sym_module_name = 36,
  sym_module_import = 37,
  sym_module_import_package = 38,
  sym_module_import_alias = 39,
  sym__exposing = 40,
  sym_exposing_everything = 41,
  sym_exposing_list = 42,
  sym__exposing_list_item = 43,
  sym_exposing_type = 44,
  sym_exposing_type_name = 45,
  sym_exposing_type_constructors = 46,
  sym__everything = 47,
  sym_exposing_value = 48,
  sym__module_declaration = 49,
  sym__type_declaration = 50,
  sym_empty_type_declaration = 51,
  sym_type_declaration = 52,
  sym_type_declaration_name = 53,
  sym_type_declaration_variables = 54,
  sym_type_declaration_variable = 55,
  sym_type_declaration_constructor = 56,
  sym_type_declaration_constructor_name = 57,
  sym_type_declaration_constructor_fields = 58,
  sym__type = 59,
  sym__type1 = 60,
  sym_type_function = 61,
  sym__type_parens = 62,
  sym_type_call = 63,
  sym_type_call_arguments = 64,
  sym_type_constructor = 65,
  sym_type_constructor_proper_name = 66,
  sym_type_variable = 67,
  sym_type_annotation = 68,
  sym_return_type_annotation = 69,
  sym_foreign_value_declaration = 70,
  sym_value_declaration = 71,
  sym_value_declaration_name = 72,
  sym__expression = 73,
  sym__expression1 = 74,
  sym__expression0 = 75,
  sym_expression_function = 76,
  sym_expression_if = 77,
  sym_expression_match = 78,
  sym_expression_match_arm = 79,
  sym_expression_function_parameter = 80,
  sym_expression_function_parameter_name = 81,
  sym__expression_parens = 82,
  sym_expression_call = 83,
  sym_expression_call_arguments = 84,
  sym_expression_array = 85,
  sym_expression_constructor = 86,
  sym_expression_constructor_proper_name = 87,
  sym_expression_variable = 88,
  sym_expression_variable_name = 89,
  sym__pattern = 90,
  sym_pattern_constructor = 91,
  sym_pattern_constructor_proper_name = 92,
  sym_pattern_constructor_fields = 93,
  sym_pattern_variable = 94,
  sym_qualifier = 95,
  aux_sym_source_file_repeat1 = 96,
  aux_sym_source_file_repeat2 = 97,
  aux_sym_module_name_repeat1 = 98,
  aux_sym_exposing_list_repeat1 = 99,
  aux_sym_type_declaration_repeat1 = 100,
  aux_sym_type_declaration_variables_repeat1 = 101,
  aux_sym_type_declaration_constructor_fields_repeat1 = 102,
  aux_sym_expression_function_repeat1 = 103,
  aux_sym_expression_match_repeat1 = 104,
  aux_sym_expression_call_arguments_repeat1 = 105,
  aux_sym_pattern_constructor_fields_repeat1 = 106,
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
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_match] = "match",
  [anon_sym_with] = "with",
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
  [sym__expression1] = "_expression1",
  [sym__expression0] = "_expression0",
  [sym_expression_function] = "expression_function",
  [sym_expression_if] = "expression_if",
  [sym_expression_match] = "expression_match",
  [sym_expression_match_arm] = "expression_match_arm",
  [sym_expression_function_parameter] = "expression_function_parameter",
  [sym_expression_function_parameter_name] = "expression_function_parameter_name",
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
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_with] = anon_sym_with,
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
  [sym__expression1] = sym__expression1,
  [sym__expression0] = sym__expression0,
  [sym_expression_function] = sym_expression_function,
  [sym_expression_if] = sym_expression_if,
  [sym_expression_match] = sym_expression_match,
  [sym_expression_match_arm] = sym_expression_match_arm,
  [sym_expression_function_parameter] = sym_expression_function_parameter,
  [sym_expression_function_parameter_name] = sym_expression_function_parameter_name,
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
  [sym__expression1] = {
    .visible = false,
    .named = true,
  },
  [sym__expression0] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_function] = {
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
  [sym_expression_match_arm] = {
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
  field_body = 5,
  field_condition = 6,
  field_constructor = 7,
  field_declaration = 8,
  field_element = 9,
  field_exports = 10,
  field_expression = 11,
  field_false_clause = 12,
  field_field = 13,
  field_fields = 14,
  field_function = 15,
  field_header = 16,
  field_import = 17,
  field_imports = 18,
  field_match_arm_expression = 19,
  field_match_arm_pattern = 20,
  field_module_name = 21,
  field_name = 22,
  field_package = 23,
  field_parameter = 24,
  field_return_type = 25,
  field_true_clause = 26,
  field_type_annotation = 27,
  field_variable = 28,
  field_variables = 29,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_argument] = "argument",
  [field_arguments] = "arguments",
  [field_arm] = "arm",
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
  [field_match_arm_expression] = "match_arm_expression",
  [field_match_arm_pattern] = "match_arm_pattern",
  [field_module_name] = "module_name",
  [field_name] = "name",
  [field_package] = "package",
  [field_parameter] = "parameter",
  [field_return_type] = "return_type",
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
  [20] = {.index = 36, .length = 2},
  [21] = {.index = 38, .length = 1},
  [22] = {.index = 39, .length = 3},
  [23] = {.index = 42, .length = 4},
  [24] = {.index = 46, .length = 4},
  [25] = {.index = 50, .length = 2},
  [26] = {.index = 52, .length = 3},
  [27] = {.index = 55, .length = 3},
  [28] = {.index = 58, .length = 1},
  [29] = {.index = 59, .length = 2},
  [30] = {.index = 61, .length = 2},
  [31] = {.index = 63, .length = 1},
  [32] = {.index = 64, .length = 1},
  [33] = {.index = 65, .length = 5},
  [34] = {.index = 70, .length = 3},
  [35] = {.index = 73, .length = 4},
  [36] = {.index = 77, .length = 1},
  [37] = {.index = 78, .length = 4},
  [38] = {.index = 82, .length = 2},
  [39] = {.index = 84, .length = 2},
  [40] = {.index = 86, .length = 3},
  [41] = {.index = 89, .length = 2},
  [42] = {.index = 91, .length = 2},
  [43] = {.index = 93, .length = 2},
  [44] = {.index = 95, .length = 5},
  [45] = {.index = 100, .length = 3},
  [46] = {.index = 103, .length = 3},
  [47] = {.index = 106, .length = 3},
  [48] = {.index = 109, .length = 3},
  [49] = {.index = 112, .length = 3},
  [50] = {.index = 115, .length = 3},
  [51] = {.index = 118, .length = 4},
  [52] = {.index = 122, .length = 4},
  [53] = {.index = 126, .length = 2},
  [54] = {.index = 128, .length = 4},
  [55] = {.index = 132, .length = 5},
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
    {field_name, 0},
    {field_type_annotation, 1},
  [38] =
    {field_element, 1},
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
    {field_body, 3},
  [59] =
    {field_arm, 3},
    {field_expression, 1},
  [61] =
    {field_element, 1},
    {field_element, 2},
  [63] =
    {field_argument, 1},
  [64] =
    {field_return_type, 3},
  [65] =
    {field_alias, 3},
    {field_alias, 4},
    {field_imports, 5},
    {field_module_name, 2},
    {field_package, 1},
  [70] =
    {field_variable, 1},
    {field_variable, 2},
    {field_variable, 3},
  [73] =
    {field_constructor, 3},
    {field_constructor, 4},
    {field_constructor, 5},
    {field_name, 1},
  [77] =
    {field_field, 1},
  [78] =
    {field_constructor, 4},
    {field_constructor, 5},
    {field_name, 1},
    {field_variables, 2},
  [82] =
    {field_body, 4},
    {field_return_type, 2},
  [84] =
    {field_body, 4},
    {field_parameter, 1},
  [86] =
    {field_element, 1},
    {field_element, 2},
    {field_element, 3},
  [89] =
    {field_argument, 1},
    {field_argument, 2},
  [91] =
    {field_parameter, 1},
    {field_return_type, 4},
  [93] =
    {field_field, 1},
    {field_field, 2},
  [95] =
    {field_constructor, 4},
    {field_constructor, 5},
    {field_constructor, 6},
    {field_name, 1},
    {field_variables, 2},
  [100] =
    {field_body, 5},
    {field_parameter, 1},
    {field_return_type, 3},
  [103] =
    {field_body, 5},
    {field_parameter, 1},
    {field_parameter, 2},
  [106] =
    {field_condition, 1},
    {field_false_clause, 5},
    {field_true_clause, 3},
  [109] =
    {field_argument, 1},
    {field_argument, 2},
    {field_argument, 3},
  [112] =
    {field_parameter, 1},
    {field_parameter, 2},
    {field_return_type, 5},
  [115] =
    {field_field, 1},
    {field_field, 2},
    {field_field, 3},
  [118] =
    {field_body, 6},
    {field_parameter, 1},
    {field_parameter, 2},
    {field_return_type, 4},
  [122] =
    {field_body, 6},
    {field_parameter, 1},
    {field_parameter, 2},
    {field_parameter, 3},
  [126] =
    {field_match_arm_expression, 3},
    {field_match_arm_pattern, 1},
  [128] =
    {field_parameter, 1},
    {field_parameter, 2},
    {field_parameter, 3},
    {field_return_type, 6},
  [132] =
    {field_body, 7},
    {field_parameter, 1},
    {field_parameter, 2},
    {field_parameter, 3},
    {field_return_type, 5},
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
      if (eof) ADVANCE(57);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == ',') ADVANCE(68);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == ';') ADVANCE(60);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 'm') ADVANCE(10);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == 'w') ADVANCE(27);
      if (lookahead == '|') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(0)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(96);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == ',') ADVANCE(68);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == ';') ADVANCE(60);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == 't') ADVANCE(118);
      if (lookahead == 'u') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(1)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(96);
      if (sym__name_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == ',') ADVANCE(68);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == ';') ADVANCE(60);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == 'w') ADVANCE(27);
      if (lookahead == '|') ADVANCE(73);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(8);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(4)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(96);
      if (sym__name_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(128);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '>') ADVANCE(74);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(5);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(7)
      if (sym__package_name_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(69);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 21:
      if (lookahead == 'g') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == 'h') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'h') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead == 'y') ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == 'h') ADVANCE(84);
      END_STATE();
    case 25:
      if (lookahead == 'h') ADVANCE(82);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(45);
      if (lookahead == 'x') ADVANCE(37);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 39:
      if (lookahead == 'p') ADVANCE(36);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 53:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 55:
      if (eof) ADVANCE(57);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 't') ADVANCE(126);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(55)
      if (sym__package_name_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 56:
      if (eof) ADVANCE(57);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 't') ADVANCE(126);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(56)
      if (sym__package_name_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_exports);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(69);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_import);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_type);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_foreign);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_match);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_expression_string);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_expression_int);
      if (lookahead == '.') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_expression_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_expression_true);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_expression_true);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_expression_false);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_expression_false);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_expression_unit);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_expression_unit);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__proper_name);
      if (sym__name_character_set_2(lookahead)) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__package_name);
      if (sym__package_name_character_set_2(lookahead)) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(110);
      if (sym__name_character_set_3(lookahead)) ADVANCE(127);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(122);
      if (sym__name_character_set_3(lookahead)) ADVANCE(127);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c') ADVANCE(107);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(91);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(93);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(71);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(108);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f') ADVANCE(79);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g') ADVANCE(113);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h') ADVANCE(83);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(106);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(123);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(121);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'm') ADVANCE(117);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(109);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(77);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(120);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(119);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p') ADVANCE(103);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p') ADVANCE(115);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(125);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(124);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(104);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's') ADVANCE(102);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(100);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(95);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(64);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u') ADVANCE(101);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'y') ADVANCE(116);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__name);
      if (sym__name_character_set_2(lookahead)) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(128);
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
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 55},
  [26] = {.lex_state = 55},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 56},
  [41] = {.lex_state = 56},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 56},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 55},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 55},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 55},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 55},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 55},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 55},
  [115] = {.lex_state = 55},
  [116] = {.lex_state = 55},
  [117] = {.lex_state = 55},
  [118] = {.lex_state = 55},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 56},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 56},
  [123] = {.lex_state = 56},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 56},
  [130] = {.lex_state = 56},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 56},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 56},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 56},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 56},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 56},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 56},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
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
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 4},
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
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 4},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 4},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 7},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 55},
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
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
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
    [sym_source_file] = STATE(273),
    [sym_module_header] = STATE(26),
    [anon_sym_module] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_RPAREN,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__proper_name,
    ACTIONS(23), 1,
      sym__name,
    STATE(59), 1,
      sym_expression_constructor_proper_name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(136), 1,
      sym_expression_function_parameter_name,
    STATE(141), 1,
      sym_qualifier,
    STATE(200), 1,
      sym_expression_function_parameter,
    ACTIONS(17), 2,
      sym_expression_string,
      sym_expression_float,
    ACTIONS(19), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(261), 4,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
    STATE(47), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [65] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__proper_name,
    ACTIONS(25), 1,
      anon_sym_RPAREN,
    ACTIONS(27), 1,
      sym__name,
    STATE(59), 1,
      sym_expression_constructor_proper_name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(141), 1,
      sym_qualifier,
    ACTIONS(17), 2,
      sym_expression_string,
      sym_expression_float,
    ACTIONS(19), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(185), 4,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
    STATE(47), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [124] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__proper_name,
    ACTIONS(27), 1,
      sym__name,
    ACTIONS(29), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      sym_expression_constructor_proper_name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(141), 1,
      sym_qualifier,
    ACTIONS(17), 2,
      sym_expression_string,
      sym_expression_float,
    ACTIONS(19), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(202), 4,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
    STATE(47), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [183] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__proper_name,
    ACTIONS(27), 1,
      sym__name,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      sym_expression_constructor_proper_name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(141), 1,
      sym_qualifier,
    ACTIONS(17), 2,
      sym_expression_string,
      sym_expression_float,
    ACTIONS(19), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(185), 4,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
    STATE(47), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [242] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__proper_name,
    ACTIONS(27), 1,
      sym__name,
    ACTIONS(33), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      sym_expression_constructor_proper_name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(141), 1,
      sym_qualifier,
    ACTIONS(17), 2,
      sym_expression_string,
      sym_expression_float,
    ACTIONS(19), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(185), 4,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
    STATE(47), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [301] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__proper_name,
    ACTIONS(27), 1,
      sym__name,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      sym_expression_constructor_proper_name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(141), 1,
      sym_qualifier,
    ACTIONS(17), 2,
      sym_expression_string,
      sym_expression_float,
    ACTIONS(19), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(185), 4,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
    STATE(47), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [360] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__proper_name,
    ACTIONS(27), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      sym_expression_constructor_proper_name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(141), 1,
      sym_qualifier,
    ACTIONS(17), 2,
      sym_expression_string,
      sym_expression_float,
    ACTIONS(19), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(155), 4,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
    STATE(47), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [419] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__proper_name,
    ACTIONS(27), 1,
      sym__name,
    STATE(59), 1,
      sym_expression_constructor_proper_name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(141), 1,
      sym_qualifier,
    ACTIONS(17), 2,
      sym_expression_string,
      sym_expression_float,
    ACTIONS(19), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(255), 4,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
    STATE(47), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [475] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__proper_name,
    ACTIONS(27), 1,
      sym__name,
    STATE(59), 1,
      sym_expression_constructor_proper_name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(141), 1,
      sym_qualifier,
    ACTIONS(17), 2,
      sym_expression_string,
      sym_expression_float,
    ACTIONS(19), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(265), 4,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
    STATE(47), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [531] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__proper_name,
    ACTIONS(27), 1,
      sym__name,
    STATE(59), 1,
      sym_expression_constructor_proper_name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(141), 1,
      sym_qualifier,
    ACTIONS(17), 2,
      sym_expression_string,
      sym_expression_float,
    ACTIONS(19), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(71), 4,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
    STATE(47), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [587] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__proper_name,
    ACTIONS(27), 1,
      sym__name,
    STATE(59), 1,
      sym_expression_constructor_proper_name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(141), 1,
      sym_qualifier,
    ACTIONS(17), 2,
      sym_expression_string,
      sym_expression_float,
    ACTIONS(19), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(67), 4,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
    STATE(47), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [643] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__proper_name,
    ACTIONS(27), 1,
      sym__name,
    STATE(59), 1,
      sym_expression_constructor_proper_name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(141), 1,
      sym_qualifier,
    ACTIONS(17), 2,
      sym_expression_string,
      sym_expression_float,
    ACTIONS(19), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(68), 4,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
    STATE(47), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [699] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__proper_name,
    ACTIONS(27), 1,
      sym__name,
    STATE(59), 1,
      sym_expression_constructor_proper_name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(141), 1,
      sym_qualifier,
    ACTIONS(17), 2,
      sym_expression_string,
      sym_expression_float,
    ACTIONS(19), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(75), 4,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
    STATE(47), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [755] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__proper_name,
    ACTIONS(27), 1,
      sym__name,
    STATE(59), 1,
      sym_expression_constructor_proper_name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(141), 1,
      sym_qualifier,
    ACTIONS(17), 2,
      sym_expression_string,
      sym_expression_float,
    ACTIONS(19), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(74), 4,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
    STATE(47), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [811] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__proper_name,
    ACTIONS(27), 1,
      sym__name,
    STATE(59), 1,
      sym_expression_constructor_proper_name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(141), 1,
      sym_qualifier,
    ACTIONS(17), 2,
      sym_expression_string,
      sym_expression_float,
    ACTIONS(19), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(267), 4,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
    STATE(47), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [867] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__proper_name,
    ACTIONS(27), 1,
      sym__name,
    STATE(59), 1,
      sym_expression_constructor_proper_name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(141), 1,
      sym_qualifier,
    ACTIONS(17), 2,
      sym_expression_string,
      sym_expression_float,
    ACTIONS(19), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(69), 4,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
    STATE(47), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [923] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__proper_name,
    ACTIONS(27), 1,
      sym__name,
    STATE(59), 1,
      sym_expression_constructor_proper_name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(141), 1,
      sym_qualifier,
    ACTIONS(17), 2,
      sym_expression_string,
      sym_expression_float,
    ACTIONS(19), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(70), 4,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
    STATE(47), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [979] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__proper_name,
    ACTIONS(27), 1,
      sym__name,
    STATE(59), 1,
      sym_expression_constructor_proper_name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(141), 1,
      sym_qualifier,
    ACTIONS(17), 2,
      sym_expression_string,
      sym_expression_float,
    ACTIONS(19), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(266), 4,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
    STATE(47), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [1035] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__proper_name,
    ACTIONS(27), 1,
      sym__name,
    STATE(59), 1,
      sym_expression_constructor_proper_name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(141), 1,
      sym_qualifier,
    ACTIONS(17), 2,
      sym_expression_string,
      sym_expression_float,
    ACTIONS(19), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(185), 4,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
    STATE(47), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [1091] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__proper_name,
    ACTIONS(27), 1,
      sym__name,
    STATE(59), 1,
      sym_expression_constructor_proper_name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(141), 1,
      sym_qualifier,
    ACTIONS(17), 2,
      sym_expression_string,
      sym_expression_float,
    ACTIONS(19), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(76), 4,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
    STATE(47), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [1147] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__proper_name,
    ACTIONS(27), 1,
      sym__name,
    STATE(59), 1,
      sym_expression_constructor_proper_name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(141), 1,
      sym_qualifier,
    ACTIONS(17), 2,
      sym_expression_string,
      sym_expression_float,
    ACTIONS(19), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(77), 4,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
    STATE(47), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [1203] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__proper_name,
    ACTIONS(27), 1,
      sym__name,
    STATE(59), 1,
      sym_expression_constructor_proper_name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(141), 1,
      sym_qualifier,
    ACTIONS(17), 2,
      sym_expression_string,
      sym_expression_float,
    ACTIONS(19), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(241), 4,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
    STATE(47), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [1259] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_match,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym__proper_name,
    ACTIONS(27), 1,
      sym__name,
    STATE(59), 1,
      sym_expression_constructor_proper_name,
    STATE(60), 1,
      sym_expression_variable_name,
    STATE(141), 1,
      sym_qualifier,
    ACTIONS(17), 2,
      sym_expression_string,
      sym_expression_float,
    ACTIONS(19), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(73), 4,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
    STATE(47), 7,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_constructor,
      sym_expression_variable,
  [1315] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_import,
    ACTIONS(43), 1,
      anon_sym_type,
    ACTIONS(45), 1,
      anon_sym_foreign,
    ACTIONS(47), 1,
      sym__name,
    STATE(171), 1,
      sym_value_declaration_name,
    STATE(85), 2,
      sym_module_import,
      aux_sym_source_file_repeat1,
    STATE(40), 7,
      sym__module_declaration,
      sym__type_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [1350] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_import,
    ACTIONS(43), 1,
      anon_sym_type,
    ACTIONS(45), 1,
      anon_sym_foreign,
    ACTIONS(47), 1,
      sym__name,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(171), 1,
      sym_value_declaration_name,
    STATE(25), 2,
      sym_module_import,
      aux_sym_source_file_repeat1,
    STATE(41), 7,
      sym__module_declaration,
      sym__type_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [1385] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(206), 1,
      sym_qualifier,
    STATE(81), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(149), 5,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
  [1418] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(206), 1,
      sym_qualifier,
    STATE(81), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(221), 5,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
  [1451] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(206), 1,
      sym_qualifier,
    STATE(81), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(221), 5,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
  [1484] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(206), 1,
      sym_qualifier,
    STATE(81), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(221), 5,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
  [1517] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(206), 1,
      sym_qualifier,
    STATE(81), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(221), 5,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
  [1550] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(206), 1,
      sym_qualifier,
    STATE(81), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(221), 5,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
  [1583] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(206), 1,
      sym_qualifier,
    STATE(81), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(221), 5,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
  [1616] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(206), 1,
      sym_qualifier,
    STATE(81), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(221), 5,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
  [1646] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(206), 1,
      sym_qualifier,
    STATE(81), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(128), 5,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
  [1676] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(206), 1,
      sym_qualifier,
    STATE(81), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(131), 5,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
  [1706] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(206), 1,
      sym_qualifier,
    STATE(81), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(179), 5,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
  [1736] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(206), 1,
      sym_qualifier,
    STATE(81), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(127), 5,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
  [1766] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(206), 1,
      sym_qualifier,
    STATE(81), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(166), 5,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
  [1796] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_type,
    ACTIONS(45), 1,
      anon_sym_foreign,
    ACTIONS(47), 1,
      sym__name,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    STATE(171), 1,
      sym_value_declaration_name,
    STATE(45), 7,
      sym__module_declaration,
      sym__type_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [1824] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_type,
    ACTIONS(45), 1,
      anon_sym_foreign,
    ACTIONS(47), 1,
      sym__name,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(171), 1,
      sym_value_declaration_name,
    STATE(45), 7,
      sym__module_declaration,
      sym__type_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [1852] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(206), 1,
      sym_qualifier,
    STATE(81), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(272), 5,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
  [1882] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(206), 1,
      sym_qualifier,
    STATE(81), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(126), 5,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
  [1912] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(206), 1,
      sym_qualifier,
    STATE(81), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(133), 5,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_call,
  [1942] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_type,
    ACTIONS(80), 1,
      anon_sym_foreign,
    ACTIONS(83), 1,
      sym__name,
    STATE(171), 1,
      sym_value_declaration_name,
    STATE(45), 7,
      sym__module_declaration,
      sym__type_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [1970] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_PIPE,
    STATE(49), 2,
      sym_expression_match_arm,
      aux_sym_expression_match_repeat1,
    ACTIONS(86), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_RBRACK,
  [1990] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    STATE(61), 1,
      sym_expression_call_arguments,
    ACTIONS(90), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_RBRACK,
  [2010] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(206), 1,
      sym_qualifier,
    STATE(81), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(259), 3,
      sym__type1,
      sym__type_parens,
      sym_type_call,
  [2038] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_PIPE,
    STATE(49), 2,
      sym_expression_match_arm,
      aux_sym_expression_match_repeat1,
    ACTIONS(96), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_RBRACK,
  [2058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(101), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_RBRACK,
  [2076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_RBRACK,
  [2091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_RBRACK,
  [2106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_RBRACK,
  [2121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_RBRACK,
  [2136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_RBRACK,
  [2151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_RBRACK,
  [2166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_RBRACK,
  [2181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_RBRACK,
  [2196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_RBRACK,
  [2211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_RBRACK,
  [2226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_RBRACK,
  [2241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_RBRACK,
  [2256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_RBRACK,
  [2271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_RBRACK,
  [2286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_RBRACK,
  [2301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_RBRACK,
  [2316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_RBRACK,
  [2330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_RBRACK,
  [2344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_RBRACK,
  [2358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_RBRACK,
  [2372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_RBRACK,
  [2386] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    ACTIONS(147), 1,
      sym__proper_name,
    ACTIONS(149), 1,
      sym__name,
    STATE(108), 1,
      sym_pattern_constructor_proper_name,
    STATE(224), 1,
      sym_qualifier,
    STATE(211), 3,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
  [2410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_RBRACK,
  [2424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_RBRACK,
  [2438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_RBRACK,
  [2452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_RBRACK,
  [2466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_RBRACK,
  [2480] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      sym__proper_name,
    ACTIONS(149), 1,
      sym__name,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      sym_pattern_constructor_proper_name,
    STATE(224), 1,
      sym_qualifier,
    STATE(164), 3,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
  [2504] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      sym__proper_name,
    ACTIONS(149), 1,
      sym__name,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      sym_pattern_constructor_proper_name,
    STATE(224), 1,
      sym_qualifier,
    STATE(211), 3,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
  [2528] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      sym__proper_name,
    ACTIONS(149), 1,
      sym__name,
    STATE(108), 1,
      sym_pattern_constructor_proper_name,
    STATE(224), 1,
      sym_qualifier,
    STATE(211), 3,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
  [2549] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(104), 1,
      sym_type_call_arguments,
    ACTIONS(165), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [2566] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_SEMI,
    ACTIONS(171), 1,
      anon_sym_as,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    STATE(250), 1,
      sym__everything,
    STATE(246), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [2587] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      sym__proper_name,
    ACTIONS(149), 1,
      sym__name,
    STATE(108), 1,
      sym_pattern_constructor_proper_name,
    STATE(224), 1,
      sym_qualifier,
    STATE(256), 3,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
  [2608] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    ACTIONS(177), 1,
      sym__proper_name,
    ACTIONS(179), 1,
      sym__name,
    STATE(101), 1,
      sym_exposing_type_name,
    STATE(209), 3,
      sym__exposing_list_item,
      sym_exposing_type,
      sym_exposing_value,
  [2629] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 1,
      anon_sym_import,
    STATE(85), 2,
      sym_module_import,
      aux_sym_source_file_repeat1,
    ACTIONS(186), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [2648] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_SEMI,
    ACTIONS(190), 1,
      anon_sym_as,
    STATE(250), 1,
      sym__everything,
    STATE(248), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [2669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(192), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [2684] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym__proper_name,
    ACTIONS(179), 1,
      sym__name,
    ACTIONS(194), 1,
      anon_sym_DOT_DOT,
    STATE(101), 1,
      sym_exposing_type_name,
    STATE(181), 3,
      sym__exposing_list_item,
      sym_exposing_type,
      sym_exposing_value,
  [2705] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym__proper_name,
    ACTIONS(179), 1,
      sym__name,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      sym_exposing_type_name,
    STATE(209), 3,
      sym__exposing_list_item,
      sym_exposing_type,
      sym_exposing_value,
  [2726] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_DOT,
    STATE(90), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(198), 4,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LPAREN,
  [2742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [2754] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_DOT,
    STATE(99), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(203), 4,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LPAREN,
  [2770] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_SEMI,
    STATE(250), 1,
      sym__everything,
    STATE(268), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [2788] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym__proper_name,
    ACTIONS(179), 1,
      sym__name,
    STATE(101), 1,
      sym_exposing_type_name,
    STATE(209), 3,
      sym__exposing_list_item,
      sym_exposing_type,
      sym_exposing_value,
  [2806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [2818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [2830] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SEMI,
    STATE(250), 1,
      sym__everything,
    STATE(253), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [2848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [2860] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_DOT,
    STATE(90), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(217), 4,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LPAREN,
  [2876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [2889] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(225), 1,
      sym_exposing_type_constructors,
    STATE(226), 1,
      sym__everything,
    ACTIONS(225), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(229), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [2919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 5,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_LPAREN,
  [2930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [2941] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(233), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [2954] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    STATE(159), 1,
      sym_pattern_constructor_fields,
    ACTIONS(237), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [2969] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    ACTIONS(241), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [2982] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    STATE(175), 1,
      sym_pattern_constructor_fields,
    ACTIONS(243), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [2997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [3008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
    ACTIONS(249), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3021] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    STATE(250), 1,
      sym__everything,
    STATE(251), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [3036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [3047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_DASH_GT,
    ACTIONS(253), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [3060] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    ACTIONS(259), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
    ACTIONS(263), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    ACTIONS(267), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    ACTIONS(271), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      ts_builtin_sym_end,
    ACTIONS(275), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [3136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    ACTIONS(281), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3148] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    STATE(121), 1,
      aux_sym_expression_call_arguments_repeat1,
    ACTIONS(283), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      ts_builtin_sym_end,
    ACTIONS(290), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
    ACTIONS(294), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3186] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_SEMI,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_EQ,
    STATE(233), 1,
      sym_type_declaration_variables,
  [3202] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
    ACTIONS(304), 1,
      sym__name,
    STATE(136), 1,
      sym_expression_function_parameter_name,
    STATE(227), 1,
      sym_expression_function_parameter,
  [3218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [3228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [3238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [3248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    ACTIONS(314), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
    ACTIONS(318), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [3282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
    ACTIONS(324), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [3304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    ACTIONS(330), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3316] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym__name,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    STATE(136), 1,
      sym_expression_function_parameter_name,
    STATE(227), 1,
      sym_expression_function_parameter,
  [3332] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_COLON,
    STATE(218), 1,
      sym_type_annotation,
    ACTIONS(334), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
    ACTIONS(340), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3358] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      sym__proper_name,
    STATE(82), 1,
      sym_module_name,
    STATE(220), 1,
      sym_module_import_package,
  [3374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [3384] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
    ACTIONS(349), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [3398] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym__proper_name,
    ACTIONS(353), 1,
      sym__name,
    STATE(58), 1,
      sym_expression_constructor_proper_name,
    STATE(62), 1,
      sym_expression_variable_name,
  [3414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      ts_builtin_sym_end,
    ACTIONS(357), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3426] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_PIPE,
    ACTIONS(361), 1,
      sym__proper_name,
    STATE(146), 1,
      sym_type_declaration_constructor_name,
    STATE(192), 1,
      sym_type_declaration_constructor,
  [3442] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__proper_name,
    ACTIONS(363), 1,
      anon_sym_PIPE,
    STATE(146), 1,
      sym_type_declaration_constructor_name,
    STATE(173), 1,
      sym_type_declaration_constructor,
  [3458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
    ACTIONS(367), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3470] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    STATE(205), 1,
      sym_type_declaration_constructor_fields,
    ACTIONS(369), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [3484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      ts_builtin_sym_end,
    ACTIONS(375), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3496] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    ACTIONS(377), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_expression_function_repeat1,
  [3509] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
    ACTIONS(381), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [3522] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [3535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [3544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      aux_sym_pattern_constructor_fields_repeat1,
  [3557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [3566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      aux_sym_exposing_list_repeat1,
  [3579] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
    ACTIONS(401), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_expression_call_arguments_repeat1,
  [3592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    STATE(121), 1,
      aux_sym_expression_call_arguments_repeat1,
  [3605] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      aux_sym_pattern_constructor_fields_repeat1,
  [3618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [3627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [3636] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    ACTIONS(413), 1,
      sym__name,
    STATE(214), 1,
      sym_type_declaration_variable,
  [3649] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_type_declaration_variables_repeat1,
  [3662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_PIPE,
    STATE(46), 2,
      sym_expression_match_arm,
      aux_sym_expression_match_repeat1,
  [3673] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_SEMI,
    ACTIONS(422), 1,
      anon_sym_PIPE,
    STATE(165), 1,
      aux_sym_type_declaration_repeat1,
  [3686] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    ACTIONS(426), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_pattern_constructor_fields_repeat1,
  [3699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_SEMI,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    STATE(165), 1,
      aux_sym_type_declaration_repeat1,
  [3712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
    ACTIONS(435), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [3725] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_PIPE,
    ACTIONS(437), 1,
      anon_sym_SEMI,
    STATE(204), 1,
      aux_sym_type_declaration_repeat1,
  [3738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [3747] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_PIPE,
    ACTIONS(437), 1,
      anon_sym_SEMI,
    STATE(165), 1,
      aux_sym_type_declaration_repeat1,
  [3760] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_DASH_GT,
    ACTIONS(443), 1,
      anon_sym_COLON,
    STATE(254), 1,
      sym_return_type_annotation,
  [3773] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_COLON,
    ACTIONS(445), 1,
      anon_sym_EQ,
    STATE(252), 1,
      sym_type_annotation,
  [3786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_EQ,
  [3795] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_PIPE,
    ACTIONS(449), 1,
      anon_sym_SEMI,
    STATE(169), 1,
      aux_sym_type_declaration_repeat1,
  [3808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__proper_name,
    STATE(146), 1,
      sym_type_declaration_constructor_name,
    STATE(167), 1,
      sym_type_declaration_constructor,
  [3821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [3830] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_COLON,
    ACTIONS(451), 1,
      anon_sym_DASH_GT,
    STATE(264), 1,
      sym_return_type_annotation,
  [3843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
  [3852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3861] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
    ACTIONS(457), 1,
      anon_sym_COMMA,
    STATE(199), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [3874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_expression_function_repeat1,
  [3887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    ACTIONS(466), 1,
      anon_sym_COMMA,
    STATE(197), 1,
      aux_sym_exposing_list_repeat1,
  [3900] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_PIPE,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(165), 1,
      aux_sym_type_declaration_repeat1,
  [3913] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__proper_name,
    STATE(146), 1,
      sym_type_declaration_constructor_name,
    STATE(217), 1,
      sym_type_declaration_constructor,
  [3926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_PIPE,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    STATE(163), 1,
      aux_sym_type_declaration_repeat1,
  [3939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3948] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_type_declaration_variables_repeat1,
  [3961] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym__name,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      sym_type_declaration_variable,
  [3974] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      aux_sym_type_declaration_variables_repeat1,
  [3987] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__proper_name,
    STATE(146), 1,
      sym_type_declaration_constructor_name,
    STATE(184), 1,
      sym_type_declaration_constructor,
  [4000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    ACTIONS(478), 1,
      anon_sym_COMMA,
    STATE(121), 1,
      aux_sym_expression_call_arguments_repeat1,
  [4013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_PIPE,
  [4022] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_PIPE,
    ACTIONS(482), 1,
      anon_sym_SEMI,
    STATE(182), 1,
      aux_sym_type_declaration_repeat1,
  [4035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [4044] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_COLON,
    ACTIONS(486), 1,
      anon_sym_DASH_GT,
    STATE(271), 1,
      sym_return_type_annotation,
  [4057] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym__name,
    STATE(136), 1,
      sym_expression_function_parameter_name,
    STATE(227), 1,
      sym_expression_function_parameter,
  [4070] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [4083] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      aux_sym_exposing_list_repeat1,
  [4096] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_COLON,
    ACTIONS(495), 1,
      anon_sym_DASH_GT,
    STATE(244), 1,
      sym_return_type_annotation,
  [4109] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [4122] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_RPAREN,
    ACTIONS(501), 1,
      anon_sym_COMMA,
    STATE(148), 1,
      aux_sym_expression_function_repeat1,
  [4135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4144] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(507), 1,
      anon_sym_RBRACK,
    STATE(156), 1,
      aux_sym_expression_call_arguments_repeat1,
  [4157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [4170] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_PIPE,
    ACTIONS(511), 1,
      anon_sym_SEMI,
    STATE(165), 1,
      aux_sym_type_declaration_repeat1,
  [4183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [4191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym__proper_name,
    STATE(96), 1,
      sym_type_constructor_proper_name,
  [4201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym__name,
    STATE(214), 1,
      sym_type_declaration_variable,
  [4211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [4219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 2,
      sym__proper_name,
      sym__name,
  [4235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [4251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      sym__proper_name,
    STATE(124), 1,
      sym_type_declaration_name,
  [4261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      sym__name,
    STATE(223), 1,
      sym_value_declaration_name,
  [4279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [4287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [4295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym__proper_name,
    STATE(270), 1,
      sym_module_name,
  [4313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym__proper_name,
    STATE(86), 1,
      sym_module_name,
  [4323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [4339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_COLON,
    STATE(242), 1,
      sym_type_annotation,
  [4349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      sym__proper_name,
    STATE(106), 1,
      sym_pattern_constructor_proper_name,
  [4359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      sym__proper_name,
    STATE(97), 1,
      sym_module_import_alias,
  [4401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      sym__proper_name,
    STATE(93), 1,
      sym_module_import_alias,
  [4411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 2,
      anon_sym_SEMI,
      anon_sym_LPAREN,
  [4419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym__name,
    STATE(188), 1,
      sym_type_declaration_variable,
  [4429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_SEMI,
    ACTIONS(547), 1,
      anon_sym_EQ,
  [4439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [4447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [4463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [4471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DASH_GT,
  [4478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_DASH_GT,
  [4485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
  [4492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_SEMI,
  [4499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_SEMI,
  [4506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_DASH_GT,
  [4513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_DASH_GT,
  [4520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      sym__proper_name,
  [4527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_SEMI,
  [4534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_DASH_GT,
  [4541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_SEMI,
  [4548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
  [4555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_SEMI,
  [4562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_SEMI,
  [4569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_EQ,
  [4576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_SEMI,
  [4583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_DASH_GT,
  [4590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_else,
  [4597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_DASH_GT,
  [4604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      sym__package_name,
  [4611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      sym__proper_name,
  [4618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_DASH_GT,
  [4625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_DOT_DOT,
  [4632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_RPAREN,
  [4639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_SEMI,
  [4646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_SEMI,
  [4653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_DASH_GT,
  [4660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_SEMI,
  [4667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_then,
  [4674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_with,
  [4681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_SEMI,
  [4688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_SEMI,
  [4695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_exports,
  [4702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_DASH_GT,
  [4709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_RPAREN,
  [4716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 65,
  [SMALL_STATE(4)] = 124,
  [SMALL_STATE(5)] = 183,
  [SMALL_STATE(6)] = 242,
  [SMALL_STATE(7)] = 301,
  [SMALL_STATE(8)] = 360,
  [SMALL_STATE(9)] = 419,
  [SMALL_STATE(10)] = 475,
  [SMALL_STATE(11)] = 531,
  [SMALL_STATE(12)] = 587,
  [SMALL_STATE(13)] = 643,
  [SMALL_STATE(14)] = 699,
  [SMALL_STATE(15)] = 755,
  [SMALL_STATE(16)] = 811,
  [SMALL_STATE(17)] = 867,
  [SMALL_STATE(18)] = 923,
  [SMALL_STATE(19)] = 979,
  [SMALL_STATE(20)] = 1035,
  [SMALL_STATE(21)] = 1091,
  [SMALL_STATE(22)] = 1147,
  [SMALL_STATE(23)] = 1203,
  [SMALL_STATE(24)] = 1259,
  [SMALL_STATE(25)] = 1315,
  [SMALL_STATE(26)] = 1350,
  [SMALL_STATE(27)] = 1385,
  [SMALL_STATE(28)] = 1418,
  [SMALL_STATE(29)] = 1451,
  [SMALL_STATE(30)] = 1484,
  [SMALL_STATE(31)] = 1517,
  [SMALL_STATE(32)] = 1550,
  [SMALL_STATE(33)] = 1583,
  [SMALL_STATE(34)] = 1616,
  [SMALL_STATE(35)] = 1646,
  [SMALL_STATE(36)] = 1676,
  [SMALL_STATE(37)] = 1706,
  [SMALL_STATE(38)] = 1736,
  [SMALL_STATE(39)] = 1766,
  [SMALL_STATE(40)] = 1796,
  [SMALL_STATE(41)] = 1824,
  [SMALL_STATE(42)] = 1852,
  [SMALL_STATE(43)] = 1882,
  [SMALL_STATE(44)] = 1912,
  [SMALL_STATE(45)] = 1942,
  [SMALL_STATE(46)] = 1970,
  [SMALL_STATE(47)] = 1990,
  [SMALL_STATE(48)] = 2010,
  [SMALL_STATE(49)] = 2038,
  [SMALL_STATE(50)] = 2058,
  [SMALL_STATE(51)] = 2076,
  [SMALL_STATE(52)] = 2091,
  [SMALL_STATE(53)] = 2106,
  [SMALL_STATE(54)] = 2121,
  [SMALL_STATE(55)] = 2136,
  [SMALL_STATE(56)] = 2151,
  [SMALL_STATE(57)] = 2166,
  [SMALL_STATE(58)] = 2181,
  [SMALL_STATE(59)] = 2196,
  [SMALL_STATE(60)] = 2211,
  [SMALL_STATE(61)] = 2226,
  [SMALL_STATE(62)] = 2241,
  [SMALL_STATE(63)] = 2256,
  [SMALL_STATE(64)] = 2271,
  [SMALL_STATE(65)] = 2286,
  [SMALL_STATE(66)] = 2301,
  [SMALL_STATE(67)] = 2316,
  [SMALL_STATE(68)] = 2330,
  [SMALL_STATE(69)] = 2344,
  [SMALL_STATE(70)] = 2358,
  [SMALL_STATE(71)] = 2372,
  [SMALL_STATE(72)] = 2386,
  [SMALL_STATE(73)] = 2410,
  [SMALL_STATE(74)] = 2424,
  [SMALL_STATE(75)] = 2438,
  [SMALL_STATE(76)] = 2452,
  [SMALL_STATE(77)] = 2466,
  [SMALL_STATE(78)] = 2480,
  [SMALL_STATE(79)] = 2504,
  [SMALL_STATE(80)] = 2528,
  [SMALL_STATE(81)] = 2549,
  [SMALL_STATE(82)] = 2566,
  [SMALL_STATE(83)] = 2587,
  [SMALL_STATE(84)] = 2608,
  [SMALL_STATE(85)] = 2629,
  [SMALL_STATE(86)] = 2648,
  [SMALL_STATE(87)] = 2669,
  [SMALL_STATE(88)] = 2684,
  [SMALL_STATE(89)] = 2705,
  [SMALL_STATE(90)] = 2726,
  [SMALL_STATE(91)] = 2742,
  [SMALL_STATE(92)] = 2754,
  [SMALL_STATE(93)] = 2770,
  [SMALL_STATE(94)] = 2788,
  [SMALL_STATE(95)] = 2806,
  [SMALL_STATE(96)] = 2818,
  [SMALL_STATE(97)] = 2830,
  [SMALL_STATE(98)] = 2848,
  [SMALL_STATE(99)] = 2860,
  [SMALL_STATE(100)] = 2876,
  [SMALL_STATE(101)] = 2889,
  [SMALL_STATE(102)] = 2906,
  [SMALL_STATE(103)] = 2919,
  [SMALL_STATE(104)] = 2930,
  [SMALL_STATE(105)] = 2941,
  [SMALL_STATE(106)] = 2954,
  [SMALL_STATE(107)] = 2969,
  [SMALL_STATE(108)] = 2982,
  [SMALL_STATE(109)] = 2997,
  [SMALL_STATE(110)] = 3008,
  [SMALL_STATE(111)] = 3021,
  [SMALL_STATE(112)] = 3036,
  [SMALL_STATE(113)] = 3047,
  [SMALL_STATE(114)] = 3060,
  [SMALL_STATE(115)] = 3073,
  [SMALL_STATE(116)] = 3086,
  [SMALL_STATE(117)] = 3099,
  [SMALL_STATE(118)] = 3112,
  [SMALL_STATE(119)] = 3125,
  [SMALL_STATE(120)] = 3136,
  [SMALL_STATE(121)] = 3148,
  [SMALL_STATE(122)] = 3162,
  [SMALL_STATE(123)] = 3174,
  [SMALL_STATE(124)] = 3186,
  [SMALL_STATE(125)] = 3202,
  [SMALL_STATE(126)] = 3218,
  [SMALL_STATE(127)] = 3228,
  [SMALL_STATE(128)] = 3238,
  [SMALL_STATE(129)] = 3248,
  [SMALL_STATE(130)] = 3260,
  [SMALL_STATE(131)] = 3272,
  [SMALL_STATE(132)] = 3282,
  [SMALL_STATE(133)] = 3294,
  [SMALL_STATE(134)] = 3304,
  [SMALL_STATE(135)] = 3316,
  [SMALL_STATE(136)] = 3332,
  [SMALL_STATE(137)] = 3346,
  [SMALL_STATE(138)] = 3358,
  [SMALL_STATE(139)] = 3374,
  [SMALL_STATE(140)] = 3384,
  [SMALL_STATE(141)] = 3398,
  [SMALL_STATE(142)] = 3414,
  [SMALL_STATE(143)] = 3426,
  [SMALL_STATE(144)] = 3442,
  [SMALL_STATE(145)] = 3458,
  [SMALL_STATE(146)] = 3470,
  [SMALL_STATE(147)] = 3484,
  [SMALL_STATE(148)] = 3496,
  [SMALL_STATE(149)] = 3509,
  [SMALL_STATE(150)] = 3522,
  [SMALL_STATE(151)] = 3535,
  [SMALL_STATE(152)] = 3544,
  [SMALL_STATE(153)] = 3557,
  [SMALL_STATE(154)] = 3566,
  [SMALL_STATE(155)] = 3579,
  [SMALL_STATE(156)] = 3592,
  [SMALL_STATE(157)] = 3605,
  [SMALL_STATE(158)] = 3618,
  [SMALL_STATE(159)] = 3627,
  [SMALL_STATE(160)] = 3636,
  [SMALL_STATE(161)] = 3649,
  [SMALL_STATE(162)] = 3662,
  [SMALL_STATE(163)] = 3673,
  [SMALL_STATE(164)] = 3686,
  [SMALL_STATE(165)] = 3699,
  [SMALL_STATE(166)] = 3712,
  [SMALL_STATE(167)] = 3725,
  [SMALL_STATE(168)] = 3738,
  [SMALL_STATE(169)] = 3747,
  [SMALL_STATE(170)] = 3760,
  [SMALL_STATE(171)] = 3773,
  [SMALL_STATE(172)] = 3786,
  [SMALL_STATE(173)] = 3795,
  [SMALL_STATE(174)] = 3808,
  [SMALL_STATE(175)] = 3821,
  [SMALL_STATE(176)] = 3830,
  [SMALL_STATE(177)] = 3843,
  [SMALL_STATE(178)] = 3852,
  [SMALL_STATE(179)] = 3861,
  [SMALL_STATE(180)] = 3874,
  [SMALL_STATE(181)] = 3887,
  [SMALL_STATE(182)] = 3900,
  [SMALL_STATE(183)] = 3913,
  [SMALL_STATE(184)] = 3926,
  [SMALL_STATE(185)] = 3939,
  [SMALL_STATE(186)] = 3948,
  [SMALL_STATE(187)] = 3961,
  [SMALL_STATE(188)] = 3974,
  [SMALL_STATE(189)] = 3987,
  [SMALL_STATE(190)] = 4000,
  [SMALL_STATE(191)] = 4013,
  [SMALL_STATE(192)] = 4022,
  [SMALL_STATE(193)] = 4035,
  [SMALL_STATE(194)] = 4044,
  [SMALL_STATE(195)] = 4057,
  [SMALL_STATE(196)] = 4070,
  [SMALL_STATE(197)] = 4083,
  [SMALL_STATE(198)] = 4096,
  [SMALL_STATE(199)] = 4109,
  [SMALL_STATE(200)] = 4122,
  [SMALL_STATE(201)] = 4135,
  [SMALL_STATE(202)] = 4144,
  [SMALL_STATE(203)] = 4157,
  [SMALL_STATE(204)] = 4170,
  [SMALL_STATE(205)] = 4183,
  [SMALL_STATE(206)] = 4191,
  [SMALL_STATE(207)] = 4201,
  [SMALL_STATE(208)] = 4211,
  [SMALL_STATE(209)] = 4219,
  [SMALL_STATE(210)] = 4227,
  [SMALL_STATE(211)] = 4235,
  [SMALL_STATE(212)] = 4243,
  [SMALL_STATE(213)] = 4251,
  [SMALL_STATE(214)] = 4261,
  [SMALL_STATE(215)] = 4269,
  [SMALL_STATE(216)] = 4279,
  [SMALL_STATE(217)] = 4287,
  [SMALL_STATE(218)] = 4295,
  [SMALL_STATE(219)] = 4303,
  [SMALL_STATE(220)] = 4313,
  [SMALL_STATE(221)] = 4323,
  [SMALL_STATE(222)] = 4331,
  [SMALL_STATE(223)] = 4339,
  [SMALL_STATE(224)] = 4349,
  [SMALL_STATE(225)] = 4359,
  [SMALL_STATE(226)] = 4367,
  [SMALL_STATE(227)] = 4375,
  [SMALL_STATE(228)] = 4383,
  [SMALL_STATE(229)] = 4391,
  [SMALL_STATE(230)] = 4401,
  [SMALL_STATE(231)] = 4411,
  [SMALL_STATE(232)] = 4419,
  [SMALL_STATE(233)] = 4429,
  [SMALL_STATE(234)] = 4439,
  [SMALL_STATE(235)] = 4447,
  [SMALL_STATE(236)] = 4455,
  [SMALL_STATE(237)] = 4463,
  [SMALL_STATE(238)] = 4471,
  [SMALL_STATE(239)] = 4478,
  [SMALL_STATE(240)] = 4485,
  [SMALL_STATE(241)] = 4492,
  [SMALL_STATE(242)] = 4499,
  [SMALL_STATE(243)] = 4506,
  [SMALL_STATE(244)] = 4513,
  [SMALL_STATE(245)] = 4520,
  [SMALL_STATE(246)] = 4527,
  [SMALL_STATE(247)] = 4534,
  [SMALL_STATE(248)] = 4541,
  [SMALL_STATE(249)] = 4548,
  [SMALL_STATE(250)] = 4555,
  [SMALL_STATE(251)] = 4562,
  [SMALL_STATE(252)] = 4569,
  [SMALL_STATE(253)] = 4576,
  [SMALL_STATE(254)] = 4583,
  [SMALL_STATE(255)] = 4590,
  [SMALL_STATE(256)] = 4597,
  [SMALL_STATE(257)] = 4604,
  [SMALL_STATE(258)] = 4611,
  [SMALL_STATE(259)] = 4618,
  [SMALL_STATE(260)] = 4625,
  [SMALL_STATE(261)] = 4632,
  [SMALL_STATE(262)] = 4639,
  [SMALL_STATE(263)] = 4646,
  [SMALL_STATE(264)] = 4653,
  [SMALL_STATE(265)] = 4660,
  [SMALL_STATE(266)] = 4667,
  [SMALL_STATE(267)] = 4674,
  [SMALL_STATE(268)] = 4681,
  [SMALL_STATE(269)] = 4688,
  [SMALL_STATE(270)] = 4695,
  [SMALL_STATE(271)] = 4702,
  [SMALL_STATE(272)] = 4709,
  [SMALL_STATE(273)] = 4716,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(213),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(215),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(216),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_match, 4, .production_id = 29),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_match_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_match_repeat1, 2), SHIFT_REPEAT(83),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_constructor_proper_name, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 4, .production_id = 41),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 3, .production_id = 21),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 5, .production_id = 40),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_variable_name, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_constructor, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_constructor, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_variable, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call, 2, .production_id = 14),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_variable, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_parens, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 5, .production_id = 48),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 3, .production_id = 31),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 4, .production_id = 30),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 7, .production_id = 51),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 7, .production_id = 52),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_match_arm, 4, .production_id = 53),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 4, .production_id = 28),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 8, .production_id = 55),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 6, .production_id = 45),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 5, .production_id = 39),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 5, .production_id = 38),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_if, 6, .production_id = 47),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 6, .production_id = 46),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type1, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(138),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor_proper_name, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(258),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variable, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 4, .production_id = 8),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 4, .production_id = 8),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_type, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 7, .production_id = 33),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 7, .production_id = 33),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call, 2, .production_id = 14),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_proper_name, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 6, .production_id = 24),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 6, .production_id = 24),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call_arguments, 3, .production_id = 31),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 3, .production_id = 5),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 3, .production_id = 5),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call_arguments, 4, .production_id = 41),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_parens, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 4, .production_id = 9),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 4, .production_id = 9),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 5, .production_id = 15),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 5, .production_id = 15),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_header, 5, .production_id = 7),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_header, 5, .production_id = 7),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 6, .production_id = 23),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 6, .production_id = 23),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 5, .production_id = 16),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 5, .production_id = 16),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call_arguments, 5, .production_id = 48),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 7, .production_id = 37),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 7, .production_id = 37),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_call_arguments_repeat1, 2),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_call_arguments_repeat1, 2), SHIFT_REPEAT(20),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_declaration, 5, .production_id = 22),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_declaration, 5, .production_id = 22),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 5, .production_id = 18),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 5, .production_id = 18),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 4, .production_id = 32),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 6, .production_id = 49),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 5, .production_id = 42),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 8, .production_id = 44),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 8, .production_id = 44),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 7, .production_id = 35),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 7, .production_id = 35),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 7, .production_id = 54),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_declaration, 4, .production_id = 13),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_declaration, 4, .production_id = 13),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 6, .production_id = 27),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 6, .production_id = 27),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function_parameter, 1, .production_id = 10),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 6, .production_id = 26),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 6, .production_id = 26),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression_function_parameter_name, 1), REDUCE(sym_expression_variable_name, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function_parameter_name, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_value_declaration, 4, .production_id = 12),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreign_value_declaration, 4, .production_id = 12),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_type_declaration, 4, .production_id = 11),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_type_declaration, 4, .production_id = 11),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor, 1, .production_id = 10),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_type_declaration, 3, .production_id = 6),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_type_declaration, 3, .production_id = 6),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 5, .production_id = 50),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_constructor_fields_repeat1, 2),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_constructor_fields_repeat1, 2), SHIFT_REPEAT(80),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 4, .production_id = 43),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exposing_list_repeat1, 2),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exposing_list_repeat1, 2), SHIFT_REPEAT(94),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 3, .production_id = 36),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_variables_repeat1, 2),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_variables_repeat1, 2), SHIFT_REPEAT(207),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_repeat1, 2),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_repeat1, 2), SHIFT_REPEAT(183),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_name, 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_type_name, 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_function_repeat1, 2),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_function_repeat1, 2), SHIFT_REPEAT(195),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_name, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_variable, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_constructor_fields_repeat1, 2),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_constructor_fields_repeat1, 2), SHIFT_REPEAT(34),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__everything, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor, 2, .production_id = 19),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_fields, 3, .production_id = 36),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier, 2),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variables, 4, .production_id = 25),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_declaration_name, 1),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function_parameter, 2, .production_id = 20),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_fields, 5, .production_id = 50),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_type, 2),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_type_constructors, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variable, 1),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import_alias, 1),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variables, 3, .production_id = 17),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_value, 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_fields, 4, .production_id = 43),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variables, 5, .production_id = 34),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import_package, 3),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_everything, 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type_annotation, 2),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list, 3),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list, 5),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list, 4),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [623] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
