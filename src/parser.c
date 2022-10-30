#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 326
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 131
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 36
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 60

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
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  anon_sym_COLON = 17,
  anon_sym_foreign = 18,
  anon_sym_PIPE_GT = 19,
  anon_sym_fn = 20,
  anon_sym_if = 21,
  anon_sym_then = 22,
  anon_sym_else = 23,
  anon_sym_match = 24,
  anon_sym_with = 25,
  anon_sym_end = 26,
  anon_sym_do = 27,
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
  sym_type_record = 71,
  sym_type_record_field = 72,
  sym_type_record_field_label = 73,
  sym_type_call = 74,
  sym_type_call_arguments = 75,
  sym_type_constructor = 76,
  sym_type_constructor_proper_name = 77,
  sym_type_variable = 78,
  sym_type_annotation = 79,
  sym_return_type_annotation = 80,
  sym_foreign_value_declaration = 81,
  sym_value_declaration = 82,
  sym_value_declaration_name = 83,
  sym__expression = 84,
  sym__expression2 = 85,
  sym__expression1 = 86,
  sym__expression0 = 87,
  sym_expression_right_pipe = 88,
  sym_expression_function = 89,
  sym_expression_function_parameter = 90,
  sym_expression_function_parameter_name = 91,
  sym_expression_if = 92,
  sym_expression_match = 93,
  sym_expression_effect = 94,
  sym__expression_effect_statement = 95,
  sym_expression_effect_bind = 96,
  sym_expression_effect_expression = 97,
  sym_expression_effect_bind_name = 98,
  sym_expression_effect_return = 99,
  sym_expression_match_arm = 100,
  sym__expression_parens = 101,
  sym_expression_call = 102,
  sym_expression_call_arguments = 103,
  sym_expression_array = 104,
  sym_expression_record = 105,
  sym_expression_record_field = 106,
  sym_expression_record_field_label = 107,
  sym_expression_constructor = 108,
  sym_expression_constructor_proper_name = 109,
  sym_expression_variable = 110,
  sym_expression_variable_name = 111,
  sym__pattern = 112,
  sym_pattern_constructor = 113,
  sym_pattern_constructor_proper_name = 114,
  sym_pattern_constructor_fields = 115,
  sym_pattern_variable = 116,
  sym_qualifier = 117,
  aux_sym_source_file_repeat1 = 118,
  aux_sym_source_file_repeat2 = 119,
  aux_sym_module_name_repeat1 = 120,
  aux_sym_exposing_list_repeat1 = 121,
  aux_sym_type_declaration_repeat1 = 122,
  aux_sym_type_declaration_variables_repeat1 = 123,
  aux_sym_type_declaration_constructor_fields_repeat1 = 124,
  aux_sym_type_record_repeat1 = 125,
  aux_sym_expression_function_repeat1 = 126,
  aux_sym_expression_match_repeat1 = 127,
  aux_sym_expression_call_arguments_repeat1 = 128,
  aux_sym_expression_record_repeat1 = 129,
  aux_sym_pattern_constructor_fields_repeat1 = 130,
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
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
  [sym_type_record] = "type_record",
  [sym_type_record_field] = "type_record_field",
  [sym_type_record_field_label] = "type_record_field_label",
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
  [sym_expression_record] = "expression_record",
  [sym_expression_record_field] = "expression_record_field",
  [sym_expression_record_field_label] = "expression_record_field_label",
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
  [aux_sym_type_record_repeat1] = "type_record_repeat1",
  [aux_sym_expression_function_repeat1] = "expression_function_repeat1",
  [aux_sym_expression_match_repeat1] = "expression_match_repeat1",
  [aux_sym_expression_call_arguments_repeat1] = "expression_call_arguments_repeat1",
  [aux_sym_expression_record_repeat1] = "expression_record_repeat1",
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [sym_type_record] = sym_type_record,
  [sym_type_record_field] = sym_type_record_field,
  [sym_type_record_field_label] = sym_type_record_field_label,
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
  [sym_expression_record] = sym_expression_record,
  [sym_expression_record_field] = sym_expression_record_field,
  [sym_expression_record_field_label] = sym_expression_record_field_label,
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
  [aux_sym_type_record_repeat1] = aux_sym_type_record_repeat1,
  [aux_sym_expression_function_repeat1] = aux_sym_expression_function_repeat1,
  [aux_sym_expression_match_repeat1] = aux_sym_expression_match_repeat1,
  [aux_sym_expression_call_arguments_repeat1] = aux_sym_expression_call_arguments_repeat1,
  [aux_sym_expression_record_repeat1] = aux_sym_expression_record_repeat1,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [sym_type_record] = {
    .visible = true,
    .named = true,
  },
  [sym_type_record_field] = {
    .visible = true,
    .named = true,
  },
  [sym_type_record_field_label] = {
    .visible = true,
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
  [sym_expression_record] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_record_field] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_record_field_label] = {
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
  [aux_sym_type_record_repeat1] = {
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
  [aux_sym_expression_record_repeat1] = {
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
  field_label = 21,
  field_lhs = 22,
  field_match_arm_expression = 23,
  field_match_arm_pattern = 24,
  field_module_name = 25,
  field_name = 26,
  field_package = 27,
  field_parameter = 28,
  field_rest = 29,
  field_return_type = 30,
  field_rhs = 31,
  field_true_clause = 32,
  field_type_annotation = 33,
  field_value = 34,
  field_variable = 35,
  field_variables = 36,
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
  [field_label] = "label",
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
  [field_value] = "value",
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
  [21] = {.index = 37, .length = 1},
  [22] = {.index = 38, .length = 2},
  [23] = {.index = 40, .length = 3},
  [24] = {.index = 43, .length = 4},
  [25] = {.index = 47, .length = 4},
  [26] = {.index = 51, .length = 2},
  [27] = {.index = 53, .length = 3},
  [28] = {.index = 56, .length = 3},
  [29] = {.index = 59, .length = 2},
  [30] = {.index = 61, .length = 2},
  [31] = {.index = 63, .length = 2},
  [32] = {.index = 65, .length = 2},
  [33] = {.index = 67, .length = 1},
  [34] = {.index = 68, .length = 1},
  [35] = {.index = 69, .length = 5},
  [36] = {.index = 74, .length = 3},
  [37] = {.index = 77, .length = 4},
  [38] = {.index = 81, .length = 4},
  [39] = {.index = 85, .length = 3},
  [40] = {.index = 88, .length = 1},
  [41] = {.index = 89, .length = 2},
  [42] = {.index = 91, .length = 1},
  [43] = {.index = 92, .length = 3},
  [44] = {.index = 95, .length = 2},
  [45] = {.index = 97, .length = 2},
  [46] = {.index = 99, .length = 5},
  [47] = {.index = 104, .length = 2},
  [48] = {.index = 106, .length = 2},
  [49] = {.index = 108, .length = 3},
  [50] = {.index = 111, .length = 3},
  [51] = {.index = 114, .length = 3},
  [52] = {.index = 117, .length = 3},
  [53] = {.index = 120, .length = 3},
  [54] = {.index = 123, .length = 2},
  [55] = {.index = 125, .length = 3},
  [56] = {.index = 128, .length = 4},
  [57] = {.index = 132, .length = 4},
  [58] = {.index = 136, .length = 4},
  [59] = {.index = 140, .length = 5},
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
    {field_field, 1},
  [37] =
    {field_element, 1},
  [38] =
    {field_lhs, 0},
    {field_rhs, 2},
  [40] =
    {field_expression, 3},
    {field_name, 0},
    {field_type_annotation, 1},
  [43] =
    {field_alias, 2},
    {field_alias, 3},
    {field_imports, 4},
    {field_module_name, 1},
  [47] =
    {field_alias, 3},
    {field_alias, 4},
    {field_module_name, 2},
    {field_package, 1},
  [51] =
    {field_variable, 1},
    {field_variable, 2},
  [53] =
    {field_constructor, 3},
    {field_constructor, 4},
    {field_name, 1},
  [56] =
    {field_constructor, 4},
    {field_name, 1},
    {field_variables, 2},
  [59] =
    {field_field, 1},
    {field_field, 2},
  [61] =
    {field_label, 0},
    {field_value, 2},
  [63] =
    {field_name, 0},
    {field_type_annotation, 1},
  [65] =
    {field_element, 1},
    {field_element, 2},
  [67] =
    {field_argument, 1},
  [68] =
    {field_return_type, 3},
  [69] =
    {field_alias, 3},
    {field_alias, 4},
    {field_imports, 5},
    {field_module_name, 2},
    {field_package, 1},
  [74] =
    {field_variable, 1},
    {field_variable, 2},
    {field_variable, 3},
  [77] =
    {field_constructor, 3},
    {field_constructor, 4},
    {field_constructor, 5},
    {field_name, 1},
  [81] =
    {field_constructor, 4},
    {field_constructor, 5},
    {field_name, 1},
    {field_variables, 2},
  [85] =
    {field_field, 1},
    {field_field, 2},
    {field_field, 3},
  [88] =
    {field_body, 4},
  [89] =
    {field_arm, 3},
    {field_expression, 1},
  [91] =
    {field_rest, 2},
  [92] =
    {field_element, 1},
    {field_element, 2},
    {field_element, 3},
  [95] =
    {field_argument, 1},
    {field_argument, 2},
  [97] =
    {field_parameter, 1},
    {field_return_type, 4},
  [99] =
    {field_constructor, 4},
    {field_constructor, 5},
    {field_constructor, 6},
    {field_name, 1},
    {field_variables, 2},
  [104] =
    {field_body, 5},
    {field_return_type, 3},
  [106] =
    {field_body, 5},
    {field_parameter, 2},
  [108] =
    {field_condition, 1},
    {field_false_clause, 5},
    {field_true_clause, 3},
  [111] =
    {field_argument, 1},
    {field_argument, 2},
    {field_argument, 3},
  [114] =
    {field_parameter, 1},
    {field_parameter, 2},
    {field_return_type, 5},
  [117] =
    {field_body, 6},
    {field_parameter, 2},
    {field_return_type, 4},
  [120] =
    {field_body, 6},
    {field_parameter, 2},
    {field_parameter, 3},
  [123] =
    {field_match_arm_expression, 3},
    {field_match_arm_pattern, 1},
  [125] =
    {field_bind_expression, 2},
    {field_bind_name, 0},
    {field_rest, 4},
  [128] =
    {field_parameter, 1},
    {field_parameter, 2},
    {field_parameter, 3},
    {field_return_type, 6},
  [132] =
    {field_body, 7},
    {field_parameter, 2},
    {field_parameter, 3},
    {field_return_type, 5},
  [136] =
    {field_body, 7},
    {field_parameter, 2},
    {field_parameter, 3},
    {field_parameter, 4},
  [140] =
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
      if (lookahead == ':') ADVANCE(87);
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
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '}') ADVANCE(86);
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
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '}') ADVANCE(86);
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
      if (lookahead == '{') ADVANCE(85);
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
      if (lookahead == '{') ADVANCE(85);
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
      if (lookahead == '}') ADVANCE(86);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '}') ADVANCE(86);
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
      if (lookahead == 'n') ADVANCE(91);
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
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(96);
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
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 26:
      if (lookahead == 'g') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'h') ADVANCE(99);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(97);
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
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(101);
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
      if (lookahead == '>') ADVANCE(90);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_foreign);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_fn);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_match);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_do);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
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
      if (lookahead == 'n') ADVANCE(92);
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
      if (lookahead == 'f') ADVANCE(94);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g') ADVANCE(137);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h') ADVANCE(98);
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
      if (lookahead == 'n') ADVANCE(89);
      if (sym__name_character_set_2(lookahead)) ADVANCE(155);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(102);
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
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 65},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 65},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 66},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 66},
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
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 66},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 65},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 65},
  [123] = {.lex_state = 65},
  [124] = {.lex_state = 65},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 65},
  [128] = {.lex_state = 65},
  [129] = {.lex_state = 65},
  [130] = {.lex_state = 65},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 65},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 65},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 66},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 66},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 66},
  [152] = {.lex_state = 66},
  [153] = {.lex_state = 6},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 66},
  [160] = {.lex_state = 66},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 66},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 66},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 66},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 66},
  [173] = {.lex_state = 66},
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
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 6},
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
  [205] = {.lex_state = 6},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 6},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 6},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 6},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 6},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 6},
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
  [272] = {.lex_state = 6},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 6},
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
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 10},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 2},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [sym_source_file] = STATE(325),
    [sym_module_header] = STATE(36),
    [anon_sym_module] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(29), 1,
      sym__name,
    STATE(62), 1,
      sym_expression_constructor_proper_name,
    STATE(63), 1,
      sym_expression_variable_name,
    STATE(153), 1,
      sym_qualifier,
    STATE(303), 1,
      sym_expression_effect_bind_name,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(311), 4,
      sym__expression_effect_statement,
      sym_expression_effect_bind,
      sym_expression_effect_expression,
      sym_expression_effect_return,
    STATE(273), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(52), 8,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_constructor,
      sym_expression_variable,
  [83] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(29), 1,
      sym__name,
    STATE(62), 1,
      sym_expression_constructor_proper_name,
    STATE(63), 1,
      sym_expression_variable_name,
    STATE(153), 1,
      sym_qualifier,
    STATE(303), 1,
      sym_expression_effect_bind_name,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(292), 4,
      sym__expression_effect_statement,
      sym_expression_effect_bind,
      sym_expression_effect_expression,
      sym_expression_effect_return,
    STATE(273), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(52), 8,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_constructor,
      sym_expression_variable,
  [166] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(29), 1,
      sym__name,
    STATE(62), 1,
      sym_expression_constructor_proper_name,
    STATE(63), 1,
      sym_expression_variable_name,
    STATE(153), 1,
      sym_qualifier,
    STATE(303), 1,
      sym_expression_effect_bind_name,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(278), 4,
      sym__expression_effect_statement,
      sym_expression_effect_bind,
      sym_expression_effect_expression,
      sym_expression_effect_return,
    STATE(273), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(52), 8,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_constructor,
      sym_expression_variable,
  [249] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    ACTIONS(33), 1,
      sym__name,
    STATE(62), 1,
      sym_expression_constructor_proper_name,
    STATE(63), 1,
      sym_expression_variable_name,
    STATE(153), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
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
    STATE(52), 8,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_constructor,
      sym_expression_variable,
  [323] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      sym_expression_constructor_proper_name,
    STATE(63), 1,
      sym_expression_variable_name,
    STATE(153), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(218), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(52), 8,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_constructor,
      sym_expression_variable,
  [397] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      sym_expression_constructor_proper_name,
    STATE(63), 1,
      sym_expression_variable_name,
    STATE(153), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(216), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(52), 8,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_constructor,
      sym_expression_variable,
  [471] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      sym_expression_constructor_proper_name,
    STATE(63), 1,
      sym_expression_variable_name,
    STATE(153), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(216), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(52), 8,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_constructor,
      sym_expression_variable,
  [545] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      sym_expression_constructor_proper_name,
    STATE(63), 1,
      sym_expression_variable_name,
    STATE(153), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(216), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(52), 8,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_constructor,
      sym_expression_variable,
  [619] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(43), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      sym_expression_constructor_proper_name,
    STATE(63), 1,
      sym_expression_variable_name,
    STATE(153), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(216), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(52), 8,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_constructor,
      sym_expression_variable,
  [693] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(62), 1,
      sym_expression_constructor_proper_name,
    STATE(63), 1,
      sym_expression_variable_name,
    STATE(153), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(86), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(52), 8,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_constructor,
      sym_expression_variable,
  [764] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(62), 1,
      sym_expression_constructor_proper_name,
    STATE(63), 1,
      sym_expression_variable_name,
    STATE(153), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(269), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(52), 8,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_constructor,
      sym_expression_variable,
  [835] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(62), 1,
      sym_expression_constructor_proper_name,
    STATE(63), 1,
      sym_expression_variable_name,
    STATE(153), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(294), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(52), 8,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_constructor,
      sym_expression_variable,
  [906] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(62), 1,
      sym_expression_constructor_proper_name,
    STATE(63), 1,
      sym_expression_variable_name,
    STATE(153), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(299), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(52), 8,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_constructor,
      sym_expression_variable,
  [977] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(62), 1,
      sym_expression_constructor_proper_name,
    STATE(63), 1,
      sym_expression_variable_name,
    STATE(153), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(321), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(52), 8,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_constructor,
      sym_expression_variable,
  [1048] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(62), 1,
      sym_expression_constructor_proper_name,
    STATE(63), 1,
      sym_expression_variable_name,
    STATE(153), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(279), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(52), 8,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_constructor,
      sym_expression_variable,
  [1119] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(62), 1,
      sym_expression_constructor_proper_name,
    STATE(63), 1,
      sym_expression_variable_name,
    STATE(153), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
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
    STATE(52), 8,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_constructor,
      sym_expression_variable,
  [1190] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(62), 1,
      sym_expression_constructor_proper_name,
    STATE(63), 1,
      sym_expression_variable_name,
    STATE(153), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
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
    STATE(52), 8,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_constructor,
      sym_expression_variable,
  [1261] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(62), 1,
      sym_expression_constructor_proper_name,
    STATE(63), 1,
      sym_expression_variable_name,
    STATE(153), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
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
    STATE(52), 8,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_constructor,
      sym_expression_variable,
  [1332] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(62), 1,
      sym_expression_constructor_proper_name,
    STATE(63), 1,
      sym_expression_variable_name,
    STATE(153), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(216), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(52), 8,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_constructor,
      sym_expression_variable,
  [1403] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(62), 1,
      sym_expression_constructor_proper_name,
    STATE(63), 1,
      sym_expression_variable_name,
    STATE(153), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(87), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(52), 8,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_constructor,
      sym_expression_variable,
  [1474] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(62), 1,
      sym_expression_constructor_proper_name,
    STATE(63), 1,
      sym_expression_variable_name,
    STATE(153), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(320), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(52), 8,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_constructor,
      sym_expression_variable,
  [1545] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(62), 1,
      sym_expression_constructor_proper_name,
    STATE(63), 1,
      sym_expression_variable_name,
    STATE(153), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(317), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(52), 8,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_constructor,
      sym_expression_variable,
  [1616] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(62), 1,
      sym_expression_constructor_proper_name,
    STATE(63), 1,
      sym_expression_variable_name,
    STATE(153), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(284), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(52), 8,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_constructor,
      sym_expression_variable,
  [1687] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(62), 1,
      sym_expression_constructor_proper_name,
    STATE(63), 1,
      sym_expression_variable_name,
    STATE(153), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
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
    STATE(52), 8,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_constructor,
      sym_expression_variable,
  [1758] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(62), 1,
      sym_expression_constructor_proper_name,
    STATE(63), 1,
      sym_expression_variable_name,
    STATE(153), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
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
    STATE(52), 8,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_constructor,
      sym_expression_variable,
  [1829] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(62), 1,
      sym_expression_constructor_proper_name,
    STATE(63), 1,
      sym_expression_variable_name,
    STATE(153), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(85), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(52), 8,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_constructor,
      sym_expression_variable,
  [1900] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(62), 1,
      sym_expression_constructor_proper_name,
    STATE(63), 1,
      sym_expression_variable_name,
    STATE(153), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(89), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(52), 8,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_constructor,
      sym_expression_variable,
  [1971] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(62), 1,
      sym_expression_constructor_proper_name,
    STATE(63), 1,
      sym_expression_variable_name,
    STATE(153), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(88), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(52), 8,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_constructor,
      sym_expression_variable,
  [2042] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_match,
    ACTIONS(17), 1,
      anon_sym_do,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(62), 1,
      sym_expression_constructor_proper_name,
    STATE(63), 1,
      sym_expression_variable_name,
    STATE(153), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(78), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(285), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(52), 8,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_constructor,
      sym_expression_variable,
  [2113] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(62), 1,
      sym_expression_constructor_proper_name,
    STATE(63), 1,
      sym_expression_variable_name,
    STATE(153), 1,
      sym_qualifier,
    ACTIONS(45), 2,
      sym_expression_string,
      sym_expression_float,
    ACTIONS(47), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(51), 8,
      sym__expression1,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_constructor,
      sym_expression_variable,
  [2161] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(270), 1,
      sym_qualifier,
    STATE(92), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(255), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_record,
      sym_type_call,
  [2198] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(270), 1,
      sym_qualifier,
    STATE(92), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(214), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_record,
      sym_type_call,
  [2235] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      anon_sym_import,
    ACTIONS(65), 1,
      anon_sym_type,
    ACTIONS(67), 1,
      anon_sym_foreign,
    ACTIONS(69), 1,
      sym__name,
    STATE(185), 1,
      sym_value_declaration_name,
    STATE(100), 2,
      sym_module_import,
      aux_sym_source_file_repeat1,
    STATE(56), 7,
      sym__module_declaration,
      sym__type_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [2270] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(270), 1,
      sym_qualifier,
    STATE(92), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(255), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_record,
      sym_type_call,
  [2307] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_import,
    ACTIONS(65), 1,
      anon_sym_type,
    ACTIONS(67), 1,
      anon_sym_foreign,
    ACTIONS(69), 1,
      sym__name,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(185), 1,
      sym_value_declaration_name,
    STATE(34), 2,
      sym_module_import,
      aux_sym_source_file_repeat1,
    STATE(76), 7,
      sym__module_declaration,
      sym__type_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [2342] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(270), 1,
      sym_qualifier,
    STATE(92), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(255), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_record,
      sym_type_call,
  [2379] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(270), 1,
      sym_qualifier,
    STATE(92), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(255), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_record,
      sym_type_call,
  [2416] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(270), 1,
      sym_qualifier,
    STATE(92), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(255), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_record,
      sym_type_call,
  [2453] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(270), 1,
      sym_qualifier,
    STATE(92), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(255), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_record,
      sym_type_call,
  [2490] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(270), 1,
      sym_qualifier,
    STATE(92), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(155), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_record,
      sym_type_call,
  [2524] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(270), 1,
      sym_qualifier,
    STATE(92), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(281), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_record,
      sym_type_call,
  [2558] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(270), 1,
      sym_qualifier,
    STATE(92), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(136), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_record,
      sym_type_call,
  [2592] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(270), 1,
      sym_qualifier,
    STATE(92), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(197), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_record,
      sym_type_call,
  [2626] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(270), 1,
      sym_qualifier,
    STATE(92), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(126), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_record,
      sym_type_call,
  [2660] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(270), 1,
      sym_qualifier,
    STATE(92), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(241), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_record,
      sym_type_call,
  [2694] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(270), 1,
      sym_qualifier,
    STATE(92), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(255), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_record,
      sym_type_call,
  [2728] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(270), 1,
      sym_qualifier,
    STATE(92), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(182), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_record,
      sym_type_call,
  [2762] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(270), 1,
      sym_qualifier,
    STATE(92), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(139), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_record,
      sym_type_call,
  [2796] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(270), 1,
      sym_qualifier,
    STATE(92), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(125), 6,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_record,
      sym_type_call,
  [2830] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_PIPE,
    STATE(54), 1,
      sym_expression_call_arguments,
    ACTIONS(83), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [2855] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_PIPE,
    STATE(54), 1,
      sym_expression_call_arguments,
    ACTIONS(89), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [2880] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_PIPE,
    ACTIONS(93), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [2903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_PIPE,
    ACTIONS(99), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [2923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_PIPE,
    ACTIONS(103), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [2943] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_type,
    ACTIONS(67), 1,
      anon_sym_foreign,
    ACTIONS(69), 1,
      sym__name,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    STATE(185), 1,
      sym_value_declaration_name,
    STATE(60), 7,
      sym__module_declaration,
      sym__type_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [2971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    ACTIONS(109), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [2991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_PIPE,
    ACTIONS(113), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3011] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_PIPE,
    ACTIONS(117), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3031] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      anon_sym_type,
    ACTIONS(126), 1,
      anon_sym_foreign,
    ACTIONS(129), 1,
      sym__name,
    STATE(185), 1,
      sym_value_declaration_name,
    STATE(60), 7,
      sym__module_declaration,
      sym__type_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [3059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_PIPE,
    ACTIONS(132), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_PIPE,
    ACTIONS(136), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_PIPE,
    ACTIONS(140), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_PIPE,
    ACTIONS(144), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_PIPE,
    ACTIONS(148), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_PIPE,
    ACTIONS(93), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_PIPE,
    ACTIONS(152), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_PIPE,
    ACTIONS(156), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_PIPE,
    ACTIONS(160), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_PIPE,
    ACTIONS(164), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_PIPE,
    ACTIONS(168), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_PIPE,
    ACTIONS(172), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_PIPE,
    ACTIONS(176), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_PIPE,
    ACTIONS(180), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3339] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      sym__proper_name,
    ACTIONS(57), 1,
      sym__name,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym_type_constructor_proper_name,
    STATE(270), 1,
      sym_qualifier,
    STATE(92), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(318), 4,
      sym__type1,
      sym__type_parens,
      sym_type_record,
      sym_type_call,
  [3371] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_type,
    ACTIONS(67), 1,
      anon_sym_foreign,
    ACTIONS(69), 1,
      sym__name,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    STATE(185), 1,
      sym_value_declaration_name,
    STATE(60), 7,
      sym__module_declaration,
      sym__type_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [3399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_PIPE,
    ACTIONS(188), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3419] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_PIPE,
    ACTIONS(196), 1,
      anon_sym_PIPE_GT,
    ACTIONS(192), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3616] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
    ACTIONS(222), 1,
      sym__proper_name,
    ACTIONS(224), 1,
      sym__name,
    STATE(133), 1,
      sym_pattern_constructor_proper_name,
    STATE(261), 1,
      sym_qualifier,
    STATE(189), 3,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
  [3640] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym__proper_name,
    ACTIONS(224), 1,
      sym__name,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
    STATE(133), 1,
      sym_pattern_constructor_proper_name,
    STATE(261), 1,
      sym_qualifier,
    STATE(243), 3,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
  [3664] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    STATE(118), 1,
      sym_type_call_arguments,
    ACTIONS(228), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [3682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(232), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [3698] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym__proper_name,
    ACTIONS(224), 1,
      sym__name,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
    STATE(133), 1,
      sym_pattern_constructor_proper_name,
    STATE(261), 1,
      sym_qualifier,
    STATE(243), 3,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
  [3722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [3735] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym__proper_name,
    ACTIONS(224), 1,
      sym__name,
    STATE(133), 1,
      sym_pattern_constructor_proper_name,
    STATE(261), 1,
      sym_qualifier,
    STATE(307), 3,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
  [3756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [3769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [3782] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    ACTIONS(242), 1,
      sym__proper_name,
    ACTIONS(244), 1,
      sym__name,
    STATE(135), 1,
      sym_exposing_type_name,
    STATE(249), 3,
      sym__exposing_list_item,
      sym_exposing_type,
      sym_exposing_value,
  [3803] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(248), 1,
      anon_sym_import,
    STATE(100), 2,
      sym_module_import,
      aux_sym_source_file_repeat1,
    ACTIONS(251), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [3822] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym__proper_name,
    ACTIONS(244), 1,
      sym__name,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      sym_exposing_type_name,
    STATE(249), 3,
      sym__exposing_list_item,
      sym_exposing_type,
      sym_exposing_value,
  [3843] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_SEMI,
    ACTIONS(257), 1,
      anon_sym_as,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    STATE(296), 1,
      sym__everything,
    STATE(309), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [3864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [3877] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 1,
      anon_sym_SEMI,
    ACTIONS(265), 1,
      anon_sym_as,
    STATE(296), 1,
      sym__everything,
    STATE(291), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [3898] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym__proper_name,
    ACTIONS(244), 1,
      sym__name,
    ACTIONS(267), 1,
      anon_sym_DOT_DOT,
    STATE(135), 1,
      sym_exposing_type_name,
    STATE(219), 3,
      sym__exposing_list_item,
      sym_exposing_type,
      sym_exposing_value,
  [3919] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym__proper_name,
    ACTIONS(224), 1,
      sym__name,
    STATE(133), 1,
      sym_pattern_constructor_proper_name,
    STATE(261), 1,
      sym_qualifier,
    STATE(243), 3,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
  [3940] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      anon_sym_SEMI,
    STATE(296), 1,
      sym__everything,
    STATE(310), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [3958] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_DOT,
    STATE(108), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(271), 4,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LPAREN,
  [3974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [3986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [3998] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym__proper_name,
    ACTIONS(244), 1,
      sym__name,
    STATE(135), 1,
      sym_exposing_type_name,
    STATE(249), 3,
      sym__exposing_list_item,
      sym_exposing_type,
      sym_exposing_value,
  [4016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4028] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_DOT,
    STATE(117), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(282), 4,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LPAREN,
  [4044] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_SEMI,
    STATE(296), 1,
      sym__everything,
    STATE(324), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [4062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_DOT,
    STATE(108), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(292), 4,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LPAREN,
  [4102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_DASH_GT,
    ACTIONS(296), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [4128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      ts_builtin_sym_end,
    ACTIONS(306), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      ts_builtin_sym_end,
    ACTIONS(310), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    ACTIONS(314), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [4202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [4213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
    ACTIONS(322), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
    ACTIONS(326), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    ACTIONS(330), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    ACTIONS(334), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4265] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    STATE(296), 1,
      sym__everything,
    STATE(297), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [4280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(336), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [4293] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    STATE(203), 1,
      sym_pattern_constructor_fields,
    ACTIONS(340), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [4308] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      ts_builtin_sym_end,
    ACTIONS(344), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4321] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    STATE(242), 1,
      sym__everything,
    STATE(244), 1,
      sym_exposing_type_constructors,
    ACTIONS(348), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [4349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_LT_DASH,
    ACTIONS(117), 4,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
  [4362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      ts_builtin_sym_end,
    ACTIONS(356), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [4386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 5,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_LPAREN,
  [4397] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    STATE(188), 1,
      sym_pattern_constructor_fields,
    ACTIONS(360), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [4412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
    ACTIONS(364), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4424] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
    ACTIONS(368), 1,
      sym__name,
    STATE(263), 1,
      sym_type_record_field,
    STATE(290), 1,
      sym_type_record_field_label,
  [4440] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      sym__proper_name,
    STATE(104), 1,
      sym_module_name,
    STATE(262), 1,
      sym_module_import_package,
  [4456] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_SEMI,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    ACTIONS(378), 1,
      anon_sym_EQ,
    STATE(276), 1,
      sym_type_declaration_variables,
  [4472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [4482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      ts_builtin_sym_end,
    ACTIONS(382), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4494] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_PIPE,
    ACTIONS(386), 1,
      sym__proper_name,
    STATE(158), 1,
      sym_type_declaration_constructor_name,
    STATE(233), 1,
      sym_type_declaration_constructor,
  [4510] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_RBRACE,
    ACTIONS(390), 1,
      sym__name,
    STATE(226), 1,
      sym_expression_record_field,
    STATE(314), 1,
      sym_expression_record_field_label,
  [4526] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_COLON,
    STATE(275), 1,
      sym_type_annotation,
    ACTIONS(392), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      ts_builtin_sym_end,
    ACTIONS(398), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
    ACTIONS(402), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4564] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym__proper_name,
    ACTIONS(406), 1,
      sym__name,
    STATE(55), 1,
      sym_expression_constructor_proper_name,
    STATE(72), 1,
      sym_expression_variable_name,
  [4580] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym__name,
    ACTIONS(408), 1,
      anon_sym_RBRACE,
    STATE(211), 1,
      sym_type_record_field,
    STATE(290), 1,
      sym_type_record_field_label,
  [4596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [4606] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_PIPE,
    ACTIONS(415), 1,
      anon_sym_end,
    STATE(156), 2,
      sym_expression_match_arm,
      aux_sym_expression_match_repeat1,
  [4620] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
    ACTIONS(419), 1,
      sym__name,
    STATE(150), 1,
      sym_expression_function_parameter_name,
    STATE(253), 1,
      sym_expression_function_parameter,
  [4636] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    STATE(248), 1,
      sym_type_declaration_constructor_fields,
    ACTIONS(421), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [4650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      ts_builtin_sym_end,
    ACTIONS(427), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      ts_builtin_sym_end,
    ACTIONS(431), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4674] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__proper_name,
    ACTIONS(433), 1,
      anon_sym_PIPE,
    STATE(158), 1,
      sym_type_declaration_constructor_name,
    STATE(235), 1,
      sym_type_declaration_constructor,
  [4690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      ts_builtin_sym_end,
    ACTIONS(437), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4702] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      sym__name,
    ACTIONS(439), 1,
      anon_sym_RBRACE,
    STATE(264), 1,
      sym_expression_record_field,
    STATE(314), 1,
      sym_expression_record_field_label,
  [4718] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym_expression_call_arguments_repeat1,
    ACTIONS(441), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      ts_builtin_sym_end,
    ACTIONS(448), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_PIPE,
    ACTIONS(452), 1,
      anon_sym_end,
    STATE(156), 2,
      sym_expression_match_arm,
      aux_sym_expression_match_repeat1,
  [4758] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      sym__name,
    ACTIONS(454), 1,
      anon_sym_RBRACE,
    STATE(264), 1,
      sym_expression_record_field,
    STATE(314), 1,
      sym_expression_record_field_label,
  [4774] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym__name,
    ACTIONS(456), 1,
      anon_sym_RBRACE,
    STATE(263), 1,
      sym_type_record_field,
    STATE(290), 1,
      sym_type_record_field_label,
  [4790] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      sym__name,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      sym_expression_function_parameter_name,
    STATE(253), 1,
      sym_expression_function_parameter,
  [4806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      ts_builtin_sym_end,
    ACTIONS(462), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4818] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      sym__name,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      sym_expression_function_parameter_name,
    STATE(209), 1,
      sym_expression_function_parameter,
  [4834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      ts_builtin_sym_end,
    ACTIONS(468), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      ts_builtin_sym_end,
    ACTIONS(472), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4858] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(474), 1,
      anon_sym_COMMA,
    STATE(225), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [4871] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__proper_name,
    STATE(158), 1,
      sym_type_declaration_constructor_name,
    STATE(195), 1,
      sym_type_declaration_constructor,
  [4884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [4893] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    ACTIONS(480), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym_pattern_constructor_fields_repeat1,
  [4906] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    STATE(225), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [4919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [4928] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_RBRACE,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    STATE(228), 1,
      aux_sym_type_record_repeat1,
  [4941] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_RBRACE,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      aux_sym_expression_record_repeat1,
  [4954] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [4967] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym_pattern_constructor_fields_repeat1,
  [4980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [4989] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_COLON,
    ACTIONS(499), 1,
      anon_sym_EQ,
    STATE(298), 1,
      sym_type_annotation,
  [5002] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_RPAREN,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      aux_sym_exposing_list_repeat1,
  [5015] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      aux_sym_exposing_list_repeat1,
  [5028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      aux_sym_pattern_constructor_fields_repeat1,
  [5050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_EQ,
  [5068] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
    ACTIONS(520), 1,
      sym__name,
    STATE(258), 1,
      sym_type_declaration_variable,
  [5081] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym_type_declaration_variables_repeat1,
  [5094] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_SEMI,
    ACTIONS(529), 1,
      anon_sym_PIPE,
    STATE(196), 1,
      aux_sym_type_declaration_repeat1,
  [5107] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_PIPE,
    ACTIONS(531), 1,
      anon_sym_SEMI,
    STATE(194), 1,
      aux_sym_type_declaration_repeat1,
  [5120] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_SEMI,
    ACTIONS(535), 1,
      anon_sym_PIPE,
    STATE(196), 1,
      aux_sym_type_declaration_repeat1,
  [5133] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    ACTIONS(540), 1,
      anon_sym_COMMA,
    STATE(229), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [5146] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_PIPE,
    ACTIONS(542), 1,
      anon_sym_SEMI,
    STATE(231), 1,
      aux_sym_type_declaration_repeat1,
  [5159] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_PIPE,
    ACTIONS(542), 1,
      anon_sym_SEMI,
    STATE(196), 1,
      aux_sym_type_declaration_repeat1,
  [5172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5181] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_DASH_GT,
    ACTIONS(548), 1,
      anon_sym_COLON,
    STATE(288), 1,
      sym_return_type_annotation,
  [5194] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_RBRACE,
    STATE(202), 1,
      aux_sym_expression_record_repeat1,
  [5207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
  [5225] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      sym__name,
    STATE(150), 1,
      sym_expression_function_parameter_name,
    STATE(253), 1,
      sym_expression_function_parameter,
  [5238] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_COLON,
    ACTIONS(557), 1,
      anon_sym_DASH_GT,
    STATE(306), 1,
      sym_return_type_annotation,
  [5251] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_COLON,
    ACTIONS(559), 1,
      anon_sym_DASH_GT,
    STATE(315), 1,
      sym_return_type_annotation,
  [5264] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    STATE(222), 1,
      aux_sym_expression_function_repeat1,
  [5277] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    STATE(208), 1,
      aux_sym_expression_function_repeat1,
  [5290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_PIPE,
    STATE(166), 2,
      sym_expression_match_arm,
      aux_sym_expression_match_repeat1,
  [5301] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    ACTIONS(569), 1,
      anon_sym_RBRACE,
    STATE(180), 1,
      aux_sym_type_record_repeat1,
  [5314] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__proper_name,
    STATE(158), 1,
      sym_type_declaration_constructor_name,
    STATE(240), 1,
      sym_type_declaration_constructor,
  [5327] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym__name,
    STATE(263), 1,
      sym_type_record_field,
    STATE(290), 1,
      sym_type_record_field_label,
  [5340] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
    ACTIONS(573), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [5353] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_PIPE,
    ACTIONS(531), 1,
      anon_sym_SEMI,
    STATE(196), 1,
      aux_sym_type_declaration_repeat1,
  [5366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5384] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    ACTIONS(579), 1,
      anon_sym_RBRACK,
    STATE(227), 1,
      aux_sym_expression_call_arguments_repeat1,
  [5397] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
    ACTIONS(583), 1,
      anon_sym_COMMA,
    STATE(187), 1,
      aux_sym_exposing_list_repeat1,
  [5410] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym_expression_call_arguments_repeat1,
  [5423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5432] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    STATE(222), 1,
      aux_sym_expression_function_repeat1,
  [5445] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_COLON,
    ACTIONS(594), 1,
      anon_sym_DASH_GT,
    STATE(286), 1,
      sym_return_type_annotation,
  [5458] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym__name,
    ACTIONS(596), 1,
      anon_sym_RPAREN,
    STATE(258), 1,
      sym_type_declaration_variable,
  [5471] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_RPAREN,
    ACTIONS(600), 1,
      anon_sym_COMMA,
    STATE(225), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [5484] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_COMMA,
    ACTIONS(605), 1,
      anon_sym_RBRACE,
    STATE(181), 1,
      aux_sym_expression_record_repeat1,
  [5497] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_RBRACK,
    ACTIONS(607), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym_expression_call_arguments_repeat1,
  [5510] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_COMMA,
    ACTIONS(612), 1,
      anon_sym_RBRACE,
    STATE(228), 1,
      aux_sym_type_record_repeat1,
  [5523] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(614), 1,
      anon_sym_COMMA,
    STATE(225), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [5536] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_RPAREN,
    ACTIONS(618), 1,
      anon_sym_COMMA,
    STATE(232), 1,
      aux_sym_type_declaration_variables_repeat1,
  [5549] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_PIPE,
    ACTIONS(620), 1,
      anon_sym_SEMI,
    STATE(196), 1,
      aux_sym_type_declaration_repeat1,
  [5562] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_RPAREN,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym_type_declaration_variables_repeat1,
  [5575] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_PIPE,
    ACTIONS(624), 1,
      anon_sym_SEMI,
    STATE(215), 1,
      aux_sym_type_declaration_repeat1,
  [5588] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_RPAREN,
    ACTIONS(628), 1,
      anon_sym_COMMA,
    STATE(220), 1,
      aux_sym_expression_call_arguments_repeat1,
  [5601] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_PIPE,
    ACTIONS(630), 1,
      anon_sym_SEMI,
    STATE(199), 1,
      aux_sym_type_declaration_repeat1,
  [5614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      sym__name,
    STATE(264), 1,
      sym_expression_record_field,
    STATE(314), 1,
      sym_expression_record_field_label,
  [5627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_PIPE,
  [5636] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym__proper_name,
    STATE(158), 1,
      sym_type_declaration_constructor_name,
    STATE(198), 1,
      sym_type_declaration_constructor,
  [5649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [5665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [5705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym__name,
    STATE(258), 1,
      sym_type_declaration_variable,
  [5715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [5723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [5731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5739] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      sym__proper_name,
    STATE(145), 1,
      sym_type_declaration_name,
  [5749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym__name,
    STATE(266), 1,
      sym_value_declaration_name,
  [5759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [5767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [5783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [5799] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      sym__proper_name,
    STATE(107), 1,
      sym_module_import_alias,
  [5809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 2,
      anon_sym_PIPE,
      anon_sym_end,
  [5825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 2,
      anon_sym_SEMI,
      anon_sym_LPAREN,
  [5833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      sym__proper_name,
    STATE(141), 1,
      sym_pattern_constructor_proper_name,
  [5843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      sym__proper_name,
    STATE(102), 1,
      sym_module_name,
  [5853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [5877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_COLON,
    STATE(283), 1,
      sym_type_annotation,
  [5887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5895] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      sym__proper_name,
    STATE(114), 1,
      sym_module_import_alias,
  [5905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      sym__proper_name,
    STATE(103), 1,
      sym_type_constructor_proper_name,
  [5923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      sym__proper_name,
    STATE(322), 1,
      sym_module_name,
  [5933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym__name,
    STATE(230), 1,
      sym_type_declaration_variable,
  [5943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_SEMI,
    ACTIONS(676), 1,
      anon_sym_RBRACE,
  [5953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 2,
      sym__proper_name,
      sym__name,
  [5961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5969] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_SEMI,
    ACTIONS(684), 1,
      anon_sym_EQ,
  [5979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [5987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_RBRACE,
  [5994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_RBRACE,
  [6001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_LBRACE,
  [6008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_RPAREN,
  [6015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_DASH_GT,
  [6022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_SEMI,
  [6029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_SEMI,
  [6036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_else,
  [6043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_DASH_GT,
  [6050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_DASH_GT,
  [6057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_DASH_GT,
  [6064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_DASH_GT,
  [6071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_COLON,
  [6078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_SEMI,
  [6085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_RBRACE,
  [6092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_RPAREN,
  [6099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_with,
  [6106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_RPAREN,
  [6113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_SEMI,
  [6120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_SEMI,
  [6127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_EQ,
  [6134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_then,
  [6141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_SEMI,
  [6148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_LPAREN,
  [6155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_COLON,
  [6162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_LT_DASH,
  [6169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      sym__proper_name,
  [6176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      sym__package_name,
  [6183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_DASH_GT,
  [6190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_DASH_GT,
  [6197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_DASH_GT,
  [6204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_SEMI,
  [6211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_SEMI,
  [6218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_RBRACE,
  [6225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym__proper_name,
  [6232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_SEMI,
  [6239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_EQ,
  [6246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_DASH_GT,
  [6253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_DOT_DOT,
  [6260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_SEMI,
  [6267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_DASH_GT,
  [6274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_SEMI,
  [6281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_SEMI,
  [6288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_RPAREN,
  [6295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_exports,
  [6302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_EQ,
  [6309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_SEMI,
  [6316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 83,
  [SMALL_STATE(4)] = 166,
  [SMALL_STATE(5)] = 249,
  [SMALL_STATE(6)] = 323,
  [SMALL_STATE(7)] = 397,
  [SMALL_STATE(8)] = 471,
  [SMALL_STATE(9)] = 545,
  [SMALL_STATE(10)] = 619,
  [SMALL_STATE(11)] = 693,
  [SMALL_STATE(12)] = 764,
  [SMALL_STATE(13)] = 835,
  [SMALL_STATE(14)] = 906,
  [SMALL_STATE(15)] = 977,
  [SMALL_STATE(16)] = 1048,
  [SMALL_STATE(17)] = 1119,
  [SMALL_STATE(18)] = 1190,
  [SMALL_STATE(19)] = 1261,
  [SMALL_STATE(20)] = 1332,
  [SMALL_STATE(21)] = 1403,
  [SMALL_STATE(22)] = 1474,
  [SMALL_STATE(23)] = 1545,
  [SMALL_STATE(24)] = 1616,
  [SMALL_STATE(25)] = 1687,
  [SMALL_STATE(26)] = 1758,
  [SMALL_STATE(27)] = 1829,
  [SMALL_STATE(28)] = 1900,
  [SMALL_STATE(29)] = 1971,
  [SMALL_STATE(30)] = 2042,
  [SMALL_STATE(31)] = 2113,
  [SMALL_STATE(32)] = 2161,
  [SMALL_STATE(33)] = 2198,
  [SMALL_STATE(34)] = 2235,
  [SMALL_STATE(35)] = 2270,
  [SMALL_STATE(36)] = 2307,
  [SMALL_STATE(37)] = 2342,
  [SMALL_STATE(38)] = 2379,
  [SMALL_STATE(39)] = 2416,
  [SMALL_STATE(40)] = 2453,
  [SMALL_STATE(41)] = 2490,
  [SMALL_STATE(42)] = 2524,
  [SMALL_STATE(43)] = 2558,
  [SMALL_STATE(44)] = 2592,
  [SMALL_STATE(45)] = 2626,
  [SMALL_STATE(46)] = 2660,
  [SMALL_STATE(47)] = 2694,
  [SMALL_STATE(48)] = 2728,
  [SMALL_STATE(49)] = 2762,
  [SMALL_STATE(50)] = 2796,
  [SMALL_STATE(51)] = 2830,
  [SMALL_STATE(52)] = 2855,
  [SMALL_STATE(53)] = 2880,
  [SMALL_STATE(54)] = 2903,
  [SMALL_STATE(55)] = 2923,
  [SMALL_STATE(56)] = 2943,
  [SMALL_STATE(57)] = 2971,
  [SMALL_STATE(58)] = 2991,
  [SMALL_STATE(59)] = 3011,
  [SMALL_STATE(60)] = 3031,
  [SMALL_STATE(61)] = 3059,
  [SMALL_STATE(62)] = 3079,
  [SMALL_STATE(63)] = 3099,
  [SMALL_STATE(64)] = 3119,
  [SMALL_STATE(65)] = 3139,
  [SMALL_STATE(66)] = 3159,
  [SMALL_STATE(67)] = 3179,
  [SMALL_STATE(68)] = 3199,
  [SMALL_STATE(69)] = 3219,
  [SMALL_STATE(70)] = 3239,
  [SMALL_STATE(71)] = 3259,
  [SMALL_STATE(72)] = 3279,
  [SMALL_STATE(73)] = 3299,
  [SMALL_STATE(74)] = 3319,
  [SMALL_STATE(75)] = 3339,
  [SMALL_STATE(76)] = 3371,
  [SMALL_STATE(77)] = 3399,
  [SMALL_STATE(78)] = 3419,
  [SMALL_STATE(79)] = 3440,
  [SMALL_STATE(80)] = 3456,
  [SMALL_STATE(81)] = 3472,
  [SMALL_STATE(82)] = 3488,
  [SMALL_STATE(83)] = 3504,
  [SMALL_STATE(84)] = 3520,
  [SMALL_STATE(85)] = 3536,
  [SMALL_STATE(86)] = 3552,
  [SMALL_STATE(87)] = 3568,
  [SMALL_STATE(88)] = 3584,
  [SMALL_STATE(89)] = 3600,
  [SMALL_STATE(90)] = 3616,
  [SMALL_STATE(91)] = 3640,
  [SMALL_STATE(92)] = 3664,
  [SMALL_STATE(93)] = 3682,
  [SMALL_STATE(94)] = 3698,
  [SMALL_STATE(95)] = 3722,
  [SMALL_STATE(96)] = 3735,
  [SMALL_STATE(97)] = 3756,
  [SMALL_STATE(98)] = 3769,
  [SMALL_STATE(99)] = 3782,
  [SMALL_STATE(100)] = 3803,
  [SMALL_STATE(101)] = 3822,
  [SMALL_STATE(102)] = 3843,
  [SMALL_STATE(103)] = 3864,
  [SMALL_STATE(104)] = 3877,
  [SMALL_STATE(105)] = 3898,
  [SMALL_STATE(106)] = 3919,
  [SMALL_STATE(107)] = 3940,
  [SMALL_STATE(108)] = 3958,
  [SMALL_STATE(109)] = 3974,
  [SMALL_STATE(110)] = 3986,
  [SMALL_STATE(111)] = 3998,
  [SMALL_STATE(112)] = 4016,
  [SMALL_STATE(113)] = 4028,
  [SMALL_STATE(114)] = 4044,
  [SMALL_STATE(115)] = 4062,
  [SMALL_STATE(116)] = 4074,
  [SMALL_STATE(117)] = 4086,
  [SMALL_STATE(118)] = 4102,
  [SMALL_STATE(119)] = 4114,
  [SMALL_STATE(120)] = 4128,
  [SMALL_STATE(121)] = 4140,
  [SMALL_STATE(122)] = 4152,
  [SMALL_STATE(123)] = 4165,
  [SMALL_STATE(124)] = 4178,
  [SMALL_STATE(125)] = 4191,
  [SMALL_STATE(126)] = 4202,
  [SMALL_STATE(127)] = 4213,
  [SMALL_STATE(128)] = 4226,
  [SMALL_STATE(129)] = 4239,
  [SMALL_STATE(130)] = 4252,
  [SMALL_STATE(131)] = 4265,
  [SMALL_STATE(132)] = 4280,
  [SMALL_STATE(133)] = 4293,
  [SMALL_STATE(134)] = 4308,
  [SMALL_STATE(135)] = 4321,
  [SMALL_STATE(136)] = 4338,
  [SMALL_STATE(137)] = 4349,
  [SMALL_STATE(138)] = 4362,
  [SMALL_STATE(139)] = 4375,
  [SMALL_STATE(140)] = 4386,
  [SMALL_STATE(141)] = 4397,
  [SMALL_STATE(142)] = 4412,
  [SMALL_STATE(143)] = 4424,
  [SMALL_STATE(144)] = 4440,
  [SMALL_STATE(145)] = 4456,
  [SMALL_STATE(146)] = 4472,
  [SMALL_STATE(147)] = 4482,
  [SMALL_STATE(148)] = 4494,
  [SMALL_STATE(149)] = 4510,
  [SMALL_STATE(150)] = 4526,
  [SMALL_STATE(151)] = 4540,
  [SMALL_STATE(152)] = 4552,
  [SMALL_STATE(153)] = 4564,
  [SMALL_STATE(154)] = 4580,
  [SMALL_STATE(155)] = 4596,
  [SMALL_STATE(156)] = 4606,
  [SMALL_STATE(157)] = 4620,
  [SMALL_STATE(158)] = 4636,
  [SMALL_STATE(159)] = 4650,
  [SMALL_STATE(160)] = 4662,
  [SMALL_STATE(161)] = 4674,
  [SMALL_STATE(162)] = 4690,
  [SMALL_STATE(163)] = 4702,
  [SMALL_STATE(164)] = 4718,
  [SMALL_STATE(165)] = 4732,
  [SMALL_STATE(166)] = 4744,
  [SMALL_STATE(167)] = 4758,
  [SMALL_STATE(168)] = 4774,
  [SMALL_STATE(169)] = 4790,
  [SMALL_STATE(170)] = 4806,
  [SMALL_STATE(171)] = 4818,
  [SMALL_STATE(172)] = 4834,
  [SMALL_STATE(173)] = 4846,
  [SMALL_STATE(174)] = 4858,
  [SMALL_STATE(175)] = 4871,
  [SMALL_STATE(176)] = 4884,
  [SMALL_STATE(177)] = 4893,
  [SMALL_STATE(178)] = 4906,
  [SMALL_STATE(179)] = 4919,
  [SMALL_STATE(180)] = 4928,
  [SMALL_STATE(181)] = 4941,
  [SMALL_STATE(182)] = 4954,
  [SMALL_STATE(183)] = 4967,
  [SMALL_STATE(184)] = 4980,
  [SMALL_STATE(185)] = 4989,
  [SMALL_STATE(186)] = 5002,
  [SMALL_STATE(187)] = 5015,
  [SMALL_STATE(188)] = 5028,
  [SMALL_STATE(189)] = 5037,
  [SMALL_STATE(190)] = 5050,
  [SMALL_STATE(191)] = 5059,
  [SMALL_STATE(192)] = 5068,
  [SMALL_STATE(193)] = 5081,
  [SMALL_STATE(194)] = 5094,
  [SMALL_STATE(195)] = 5107,
  [SMALL_STATE(196)] = 5120,
  [SMALL_STATE(197)] = 5133,
  [SMALL_STATE(198)] = 5146,
  [SMALL_STATE(199)] = 5159,
  [SMALL_STATE(200)] = 5172,
  [SMALL_STATE(201)] = 5181,
  [SMALL_STATE(202)] = 5194,
  [SMALL_STATE(203)] = 5207,
  [SMALL_STATE(204)] = 5216,
  [SMALL_STATE(205)] = 5225,
  [SMALL_STATE(206)] = 5238,
  [SMALL_STATE(207)] = 5251,
  [SMALL_STATE(208)] = 5264,
  [SMALL_STATE(209)] = 5277,
  [SMALL_STATE(210)] = 5290,
  [SMALL_STATE(211)] = 5301,
  [SMALL_STATE(212)] = 5314,
  [SMALL_STATE(213)] = 5327,
  [SMALL_STATE(214)] = 5340,
  [SMALL_STATE(215)] = 5353,
  [SMALL_STATE(216)] = 5366,
  [SMALL_STATE(217)] = 5375,
  [SMALL_STATE(218)] = 5384,
  [SMALL_STATE(219)] = 5397,
  [SMALL_STATE(220)] = 5410,
  [SMALL_STATE(221)] = 5423,
  [SMALL_STATE(222)] = 5432,
  [SMALL_STATE(223)] = 5445,
  [SMALL_STATE(224)] = 5458,
  [SMALL_STATE(225)] = 5471,
  [SMALL_STATE(226)] = 5484,
  [SMALL_STATE(227)] = 5497,
  [SMALL_STATE(228)] = 5510,
  [SMALL_STATE(229)] = 5523,
  [SMALL_STATE(230)] = 5536,
  [SMALL_STATE(231)] = 5549,
  [SMALL_STATE(232)] = 5562,
  [SMALL_STATE(233)] = 5575,
  [SMALL_STATE(234)] = 5588,
  [SMALL_STATE(235)] = 5601,
  [SMALL_STATE(236)] = 5614,
  [SMALL_STATE(237)] = 5627,
  [SMALL_STATE(238)] = 5636,
  [SMALL_STATE(239)] = 5649,
  [SMALL_STATE(240)] = 5657,
  [SMALL_STATE(241)] = 5665,
  [SMALL_STATE(242)] = 5673,
  [SMALL_STATE(243)] = 5681,
  [SMALL_STATE(244)] = 5689,
  [SMALL_STATE(245)] = 5697,
  [SMALL_STATE(246)] = 5705,
  [SMALL_STATE(247)] = 5715,
  [SMALL_STATE(248)] = 5723,
  [SMALL_STATE(249)] = 5731,
  [SMALL_STATE(250)] = 5739,
  [SMALL_STATE(251)] = 5749,
  [SMALL_STATE(252)] = 5759,
  [SMALL_STATE(253)] = 5767,
  [SMALL_STATE(254)] = 5775,
  [SMALL_STATE(255)] = 5783,
  [SMALL_STATE(256)] = 5791,
  [SMALL_STATE(257)] = 5799,
  [SMALL_STATE(258)] = 5809,
  [SMALL_STATE(259)] = 5817,
  [SMALL_STATE(260)] = 5825,
  [SMALL_STATE(261)] = 5833,
  [SMALL_STATE(262)] = 5843,
  [SMALL_STATE(263)] = 5853,
  [SMALL_STATE(264)] = 5861,
  [SMALL_STATE(265)] = 5869,
  [SMALL_STATE(266)] = 5877,
  [SMALL_STATE(267)] = 5887,
  [SMALL_STATE(268)] = 5895,
  [SMALL_STATE(269)] = 5905,
  [SMALL_STATE(270)] = 5913,
  [SMALL_STATE(271)] = 5923,
  [SMALL_STATE(272)] = 5933,
  [SMALL_STATE(273)] = 5943,
  [SMALL_STATE(274)] = 5953,
  [SMALL_STATE(275)] = 5961,
  [SMALL_STATE(276)] = 5969,
  [SMALL_STATE(277)] = 5979,
  [SMALL_STATE(278)] = 5987,
  [SMALL_STATE(279)] = 5994,
  [SMALL_STATE(280)] = 6001,
  [SMALL_STATE(281)] = 6008,
  [SMALL_STATE(282)] = 6015,
  [SMALL_STATE(283)] = 6022,
  [SMALL_STATE(284)] = 6029,
  [SMALL_STATE(285)] = 6036,
  [SMALL_STATE(286)] = 6043,
  [SMALL_STATE(287)] = 6050,
  [SMALL_STATE(288)] = 6057,
  [SMALL_STATE(289)] = 6064,
  [SMALL_STATE(290)] = 6071,
  [SMALL_STATE(291)] = 6078,
  [SMALL_STATE(292)] = 6085,
  [SMALL_STATE(293)] = 6092,
  [SMALL_STATE(294)] = 6099,
  [SMALL_STATE(295)] = 6106,
  [SMALL_STATE(296)] = 6113,
  [SMALL_STATE(297)] = 6120,
  [SMALL_STATE(298)] = 6127,
  [SMALL_STATE(299)] = 6134,
  [SMALL_STATE(300)] = 6141,
  [SMALL_STATE(301)] = 6148,
  [SMALL_STATE(302)] = 6155,
  [SMALL_STATE(303)] = 6162,
  [SMALL_STATE(304)] = 6169,
  [SMALL_STATE(305)] = 6176,
  [SMALL_STATE(306)] = 6183,
  [SMALL_STATE(307)] = 6190,
  [SMALL_STATE(308)] = 6197,
  [SMALL_STATE(309)] = 6204,
  [SMALL_STATE(310)] = 6211,
  [SMALL_STATE(311)] = 6218,
  [SMALL_STATE(312)] = 6225,
  [SMALL_STATE(313)] = 6232,
  [SMALL_STATE(314)] = 6239,
  [SMALL_STATE(315)] = 6246,
  [SMALL_STATE(316)] = 6253,
  [SMALL_STATE(317)] = 6260,
  [SMALL_STATE(318)] = 6267,
  [SMALL_STATE(319)] = 6274,
  [SMALL_STATE(320)] = 6281,
  [SMALL_STATE(321)] = 6288,
  [SMALL_STATE(322)] = 6295,
  [SMALL_STATE(323)] = 6302,
  [SMALL_STATE(324)] = 6309,
  [SMALL_STATE(325)] = 6316,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_right_pipe, 3, .production_id = 22),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_right_pipe, 3, .production_id = 22),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression2, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression2, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_constructor_proper_name, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_constructor_proper_name, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call, 2, .production_id = 14),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call, 2, .production_id = 14),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_constructor, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_constructor, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 3, .production_id = 33),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call_arguments, 3, .production_id = 33),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call_arguments, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_variable_name, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_variable_name, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(250),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(251),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(252),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_constructor, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_constructor, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_variable, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_variable, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 4, .production_id = 32),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_array, 4, .production_id = 32),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 3, .production_id = 21),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_array, 3, .production_id = 21),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 5, .production_id = 50),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call_arguments, 5, .production_id = 50),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_array, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 4, .production_id = 44),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call_arguments, 4, .production_id = 44),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 5, .production_id = 43),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_array, 5, .production_id = 43),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record, 5, .production_id = 39),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record, 5, .production_id = 39),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_variable, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_variable, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record, 3, .production_id = 20),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record, 3, .production_id = 20),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_parens, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_parens, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record, 4, .production_id = 29),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record, 4, .production_id = 29),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_if, 6, .production_id = 49),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 8, .production_id = 57),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect, 4),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 8, .production_id = 58),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 5, .production_id = 40),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_match, 5, .production_id = 41),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 9, .production_id = 59),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 7, .production_id = 53),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 7, .production_id = 52),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 6, .production_id = 47),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 6, .production_id = 48),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type1, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor_proper_name, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variable, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(144),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(312),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call_arguments, 5, .production_id = 50),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call_arguments, 3, .production_id = 33),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record, 5, .production_id = 39),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record, 4, .production_id = 29),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call, 2, .production_id = 14),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_parens, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call_arguments, 4, .production_id = 44),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record, 3, .production_id = 20),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 4, .production_id = 8),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 4, .production_id = 8),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 6, .production_id = 25),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 6, .production_id = 25),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 6, .production_id = 24),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 6, .production_id = 24),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 6, .production_id = 51),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 7, .production_id = 56),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 5, .production_id = 15),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 5, .production_id = 15),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 7, .production_id = 35),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 7, .production_id = 35),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 4, .production_id = 9),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 4, .production_id = 9),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 5, .production_id = 16),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 5, .production_id = 16),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_proper_name, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_header, 5, .production_id = 7),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_header, 5, .production_id = 7),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_type, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 4, .production_id = 34),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_bind_name, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 3, .production_id = 5),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 3, .production_id = 5),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 5, .production_id = 45),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 7, .production_id = 38),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 7, .production_id = 38),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_type_declaration, 3, .production_id = 6),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_type_declaration, 3, .production_id = 6),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function_parameter, 1, .production_id = 10),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 5, .production_id = 18),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 5, .production_id = 18),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 8, .production_id = 46),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 8, .production_id = 46),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 2),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_match_repeat1, 2), SHIFT_REPEAT(96),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_match_repeat1, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor, 1, .production_id = 10),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_type_declaration, 4, .production_id = 11),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_type_declaration, 4, .production_id = 11),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 7, .production_id = 37),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 7, .production_id = 37),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_value_declaration, 4, .production_id = 12),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreign_value_declaration, 4, .production_id = 12),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_call_arguments_repeat1, 2),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_call_arguments_repeat1, 2), SHIFT_REPEAT(20),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 6, .production_id = 27),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 6, .production_id = 27),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_declaration, 4, .production_id = 13),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_declaration, 4, .production_id = 13),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 6, .production_id = 28),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 6, .production_id = 28),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_declaration, 5, .production_id = 23),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_declaration, 5, .production_id = 23),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 5, .production_id = 39),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_constructor_fields_repeat1, 2),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_constructor_fields_repeat1, 2), SHIFT_REPEAT(106),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 4, .production_id = 29),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 3, .production_id = 20),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exposing_list_repeat1, 2),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exposing_list_repeat1, 2), SHIFT_REPEAT(111),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor, 3),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 2),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_name, 1),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_variables_repeat1, 2),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_variables_repeat1, 2), SHIFT_REPEAT(246),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_repeat1, 2),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_repeat1, 2), SHIFT_REPEAT(212),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__everything, 3),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_record_repeat1, 2), SHIFT_REPEAT(236),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_record_repeat1, 2),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function_parameter_name, 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_type_name, 1),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_variable, 1),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_function_repeat1, 2),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_function_repeat1, 2), SHIFT_REPEAT(205),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_constructor_fields_repeat1, 2),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_constructor_fields_repeat1, 2), SHIFT_REPEAT(47),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_record_repeat1, 2), SHIFT_REPEAT(213),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_record_repeat1, 2),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_name, 1),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variable, 1),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record_field, 3, .production_id = 30),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_type_constructors, 1),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_type, 2),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variables, 5, .production_id = 36),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_fields, 3, .production_id = 20),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor, 2, .production_id = 19),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_declaration_name, 1),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variables, 3, .production_id = 17),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variables, 4, .production_id = 26),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_match_arm, 4, .production_id = 54),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import_alias, 1),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_fields, 5, .production_id = 39),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_value, 1),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record_field, 3, .production_id = 30),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_expression, 1),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier, 2),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function_parameter, 2, .production_id = 31),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_fields, 4, .production_id = 29),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_expression, 3, .production_id = 42),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_return, 2),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_everything, 1),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list, 5),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record_field_label, 1),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import_package, 3),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_bind, 5, .production_id = 55),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list, 3),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type_annotation, 2),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list, 4),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record_field_label, 1),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [778] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
