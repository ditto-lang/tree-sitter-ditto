#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 348
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 137
#define ALIAS_COUNT 0
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 38
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 66

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
  anon_sym_alias = 12,
  anon_sym_EQ = 13,
  anon_sym_PIPE = 14,
  anon_sym_DASH_GT = 15,
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  anon_sym_COLON = 18,
  anon_sym_foreign = 19,
  anon_sym_PIPE_GT = 20,
  anon_sym_fn = 21,
  anon_sym_if = 22,
  anon_sym_then = 23,
  anon_sym_else = 24,
  anon_sym_match = 25,
  anon_sym_with = 26,
  anon_sym_end = 27,
  anon_sym_do = 28,
  anon_sym_LT_DASH = 29,
  anon_sym_return = 30,
  anon_sym_LBRACK = 31,
  anon_sym_RBRACK = 32,
  sym_expression_string = 33,
  sym_expression_int = 34,
  sym_expression_float = 35,
  sym_expression_true = 36,
  sym_expression_false = 37,
  sym_expression_unit = 38,
  sym__proper_name = 39,
  sym__package_name = 40,
  sym__name = 41,
  sym__unused_name = 42,
  sym_comment = 43,
  sym_source_file = 44,
  sym_module_header = 45,
  sym_module_name = 46,
  sym_module_import = 47,
  sym_module_import_package = 48,
  sym_module_import_alias = 49,
  sym__exposing = 50,
  sym_exposing_everything = 51,
  sym_exposing_list = 52,
  sym__exposing_list_item = 53,
  sym_exposing_type = 54,
  sym_exposing_type_name = 55,
  sym_exposing_type_constructors = 56,
  sym__everything = 57,
  sym_exposing_value = 58,
  sym__module_declaration = 59,
  sym__type_declaration = 60,
  sym_type_alias_declaration = 61,
  sym_empty_type_declaration = 62,
  sym_type_declaration = 63,
  sym_type_declaration_name = 64,
  sym_type_declaration_variables = 65,
  sym_type_declaration_variable = 66,
  sym_type_declaration_constructor = 67,
  sym_type_declaration_constructor_name = 68,
  sym_type_declaration_constructor_fields = 69,
  sym__type = 70,
  sym__type1 = 71,
  sym_type_function = 72,
  sym__type_parens = 73,
  sym_type_closed_record = 74,
  sym_type_open_record = 75,
  sym_type_open_record_row_variable = 76,
  sym_type_record_field = 77,
  sym_type_record_field_label = 78,
  sym_type_call = 79,
  sym_type_call_arguments = 80,
  sym_type_constructor = 81,
  sym_type_constructor_proper_name = 82,
  sym_type_variable = 83,
  sym_type_annotation = 84,
  sym_return_type_annotation = 85,
  sym_foreign_value_declaration = 86,
  sym_value_declaration = 87,
  sym_value_declaration_name = 88,
  sym__expression = 89,
  sym__expression2 = 90,
  sym__expression1 = 91,
  sym__expression0 = 92,
  sym_expression_right_pipe = 93,
  sym_expression_function = 94,
  sym_expression_function_parameter = 95,
  sym_expression_if = 96,
  sym_expression_match = 97,
  sym_expression_effect = 98,
  sym__expression_effect_statement = 99,
  sym_expression_effect_bind = 100,
  sym_expression_effect_expression = 101,
  sym_expression_effect_bind_name = 102,
  sym_expression_effect_return = 103,
  sym_expression_match_arm = 104,
  sym__expression_parens = 105,
  sym_expression_call = 106,
  sym_expression_call_arguments = 107,
  sym_expression_array = 108,
  sym_expression_record = 109,
  sym_expression_record_field = 110,
  sym_expression_record_access = 111,
  sym_expression_record_field_label = 112,
  sym_expression_constructor = 113,
  sym_expression_constructor_proper_name = 114,
  sym_expression_variable = 115,
  sym_expression_variable_name = 116,
  sym__pattern = 117,
  sym_pattern_constructor = 118,
  sym_pattern_constructor_proper_name = 119,
  sym_pattern_constructor_fields = 120,
  sym_pattern_variable = 121,
  sym_pattern_unused = 122,
  sym_qualifier = 123,
  aux_sym_source_file_repeat1 = 124,
  aux_sym_source_file_repeat2 = 125,
  aux_sym_module_name_repeat1 = 126,
  aux_sym_exposing_list_repeat1 = 127,
  aux_sym_type_declaration_repeat1 = 128,
  aux_sym_type_declaration_variables_repeat1 = 129,
  aux_sym_type_declaration_constructor_fields_repeat1 = 130,
  aux_sym_type_closed_record_repeat1 = 131,
  aux_sym_expression_function_repeat1 = 132,
  aux_sym_expression_match_repeat1 = 133,
  aux_sym_expression_call_arguments_repeat1 = 134,
  aux_sym_expression_record_repeat1 = 135,
  aux_sym_pattern_constructor_fields_repeat1 = 136,
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
  [anon_sym_alias] = "alias",
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
  [sym__unused_name] = "_unused_name",
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
  [sym_type_alias_declaration] = "type_alias_declaration",
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
  [sym_type_closed_record] = "type_closed_record",
  [sym_type_open_record] = "type_open_record",
  [sym_type_open_record_row_variable] = "type_open_record_row_variable",
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
  [sym_expression_record_access] = "expression_record_access",
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
  [sym_pattern_unused] = "pattern_unused",
  [sym_qualifier] = "qualifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_module_name_repeat1] = "module_name_repeat1",
  [aux_sym_exposing_list_repeat1] = "exposing_list_repeat1",
  [aux_sym_type_declaration_repeat1] = "type_declaration_repeat1",
  [aux_sym_type_declaration_variables_repeat1] = "type_declaration_variables_repeat1",
  [aux_sym_type_declaration_constructor_fields_repeat1] = "type_declaration_constructor_fields_repeat1",
  [aux_sym_type_closed_record_repeat1] = "type_closed_record_repeat1",
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
  [anon_sym_alias] = anon_sym_alias,
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
  [sym__unused_name] = sym__unused_name,
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
  [sym_type_alias_declaration] = sym_type_alias_declaration,
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
  [sym_type_closed_record] = sym_type_closed_record,
  [sym_type_open_record] = sym_type_open_record,
  [sym_type_open_record_row_variable] = sym_type_open_record_row_variable,
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
  [sym_expression_record_access] = sym_expression_record_access,
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
  [sym_pattern_unused] = sym_pattern_unused,
  [sym_qualifier] = sym_qualifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_module_name_repeat1] = aux_sym_module_name_repeat1,
  [aux_sym_exposing_list_repeat1] = aux_sym_exposing_list_repeat1,
  [aux_sym_type_declaration_repeat1] = aux_sym_type_declaration_repeat1,
  [aux_sym_type_declaration_variables_repeat1] = aux_sym_type_declaration_variables_repeat1,
  [aux_sym_type_declaration_constructor_fields_repeat1] = aux_sym_type_declaration_constructor_fields_repeat1,
  [aux_sym_type_closed_record_repeat1] = aux_sym_type_closed_record_repeat1,
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
  [anon_sym_alias] = {
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
  [sym__unused_name] = {
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
  [sym_type_alias_declaration] = {
    .visible = true,
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
  [sym_type_closed_record] = {
    .visible = true,
    .named = true,
  },
  [sym_type_open_record] = {
    .visible = true,
    .named = true,
  },
  [sym_type_open_record_row_variable] = {
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
  [sym_expression_record_access] = {
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
  [sym_pattern_unused] = {
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
  [aux_sym_type_closed_record_repeat1] = {
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
  field_aliased_type = 2,
  field_argument = 3,
  field_arguments = 4,
  field_arm = 5,
  field_bind_expression = 6,
  field_bind_name = 7,
  field_body = 8,
  field_condition = 9,
  field_constructor = 10,
  field_declaration = 11,
  field_element = 12,
  field_exports = 13,
  field_expression = 14,
  field_false_clause = 15,
  field_field = 16,
  field_fields = 17,
  field_function = 18,
  field_header = 19,
  field_import = 20,
  field_imports = 21,
  field_label = 22,
  field_lhs = 23,
  field_match_arm_expression = 24,
  field_match_arm_pattern = 25,
  field_module_name = 26,
  field_name = 27,
  field_package = 28,
  field_parameter = 29,
  field_pattern = 30,
  field_rest = 31,
  field_return_type = 32,
  field_rhs = 33,
  field_true_clause = 34,
  field_type_annotation = 35,
  field_value = 36,
  field_variable = 37,
  field_variables = 38,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_aliased_type] = "aliased_type",
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
  [field_pattern] = "pattern",
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
  [22] = {.index = 38, .length = 1},
  [23] = {.index = 39, .length = 2},
  [24] = {.index = 41, .length = 3},
  [25] = {.index = 44, .length = 4},
  [26] = {.index = 48, .length = 4},
  [27] = {.index = 52, .length = 2},
  [28] = {.index = 54, .length = 2},
  [29] = {.index = 56, .length = 3},
  [30] = {.index = 59, .length = 3},
  [31] = {.index = 62, .length = 2},
  [32] = {.index = 64, .length = 2},
  [33] = {.index = 66, .length = 2},
  [34] = {.index = 68, .length = 2},
  [35] = {.index = 70, .length = 1},
  [36] = {.index = 71, .length = 1},
  [37] = {.index = 72, .length = 5},
  [38] = {.index = 77, .length = 3},
  [39] = {.index = 80, .length = 3},
  [40] = {.index = 83, .length = 4},
  [41] = {.index = 87, .length = 4},
  [42] = {.index = 91, .length = 3},
  [43] = {.index = 94, .length = 1},
  [44] = {.index = 95, .length = 2},
  [45] = {.index = 97, .length = 1},
  [46] = {.index = 98, .length = 3},
  [47] = {.index = 101, .length = 2},
  [48] = {.index = 103, .length = 2},
  [49] = {.index = 105, .length = 1},
  [50] = {.index = 106, .length = 5},
  [51] = {.index = 111, .length = 2},
  [52] = {.index = 113, .length = 2},
  [53] = {.index = 115, .length = 3},
  [54] = {.index = 118, .length = 3},
  [55] = {.index = 121, .length = 3},
  [56] = {.index = 124, .length = 2},
  [57] = {.index = 126, .length = 3},
  [58] = {.index = 129, .length = 3},
  [59] = {.index = 132, .length = 2},
  [60] = {.index = 134, .length = 3},
  [61] = {.index = 137, .length = 4},
  [62] = {.index = 141, .length = 3},
  [63] = {.index = 144, .length = 4},
  [64] = {.index = 148, .length = 4},
  [65] = {.index = 152, .length = 5},
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
    {field_pattern, 0},
  [38] =
    {field_element, 1},
  [39] =
    {field_lhs, 0},
    {field_rhs, 2},
  [41] =
    {field_expression, 3},
    {field_name, 0},
    {field_type_annotation, 1},
  [44] =
    {field_alias, 2},
    {field_alias, 3},
    {field_imports, 4},
    {field_module_name, 1},
  [48] =
    {field_alias, 3},
    {field_alias, 4},
    {field_module_name, 2},
    {field_package, 1},
  [52] =
    {field_aliased_type, 4},
    {field_name, 2},
  [54] =
    {field_variable, 1},
    {field_variable, 2},
  [56] =
    {field_constructor, 3},
    {field_constructor, 4},
    {field_name, 1},
  [59] =
    {field_constructor, 4},
    {field_name, 1},
    {field_variables, 2},
  [62] =
    {field_field, 1},
    {field_field, 2},
  [64] =
    {field_label, 0},
    {field_value, 2},
  [66] =
    {field_pattern, 0},
    {field_type_annotation, 1},
  [68] =
    {field_element, 1},
    {field_element, 2},
  [70] =
    {field_argument, 1},
  [71] =
    {field_return_type, 3},
  [72] =
    {field_alias, 3},
    {field_alias, 4},
    {field_imports, 5},
    {field_module_name, 2},
    {field_package, 1},
  [77] =
    {field_aliased_type, 5},
    {field_name, 2},
    {field_variables, 3},
  [80] =
    {field_variable, 1},
    {field_variable, 2},
    {field_variable, 3},
  [83] =
    {field_constructor, 3},
    {field_constructor, 4},
    {field_constructor, 5},
    {field_name, 1},
  [87] =
    {field_constructor, 4},
    {field_constructor, 5},
    {field_name, 1},
    {field_variables, 2},
  [91] =
    {field_field, 1},
    {field_field, 2},
    {field_field, 3},
  [94] =
    {field_body, 4},
  [95] =
    {field_arm, 3},
    {field_expression, 1},
  [97] =
    {field_rest, 2},
  [98] =
    {field_element, 1},
    {field_element, 2},
    {field_element, 3},
  [101] =
    {field_argument, 1},
    {field_argument, 2},
  [103] =
    {field_parameter, 1},
    {field_return_type, 4},
  [105] =
    {field_field, 3},
  [106] =
    {field_constructor, 4},
    {field_constructor, 5},
    {field_constructor, 6},
    {field_name, 1},
    {field_variables, 2},
  [111] =
    {field_body, 5},
    {field_return_type, 3},
  [113] =
    {field_body, 5},
    {field_parameter, 2},
  [115] =
    {field_condition, 1},
    {field_false_clause, 5},
    {field_true_clause, 3},
  [118] =
    {field_argument, 1},
    {field_argument, 2},
    {field_argument, 3},
  [121] =
    {field_parameter, 1},
    {field_parameter, 2},
    {field_return_type, 5},
  [124] =
    {field_field, 3},
    {field_field, 4},
  [126] =
    {field_body, 6},
    {field_parameter, 2},
    {field_return_type, 4},
  [129] =
    {field_body, 6},
    {field_parameter, 2},
    {field_parameter, 3},
  [132] =
    {field_match_arm_expression, 3},
    {field_match_arm_pattern, 1},
  [134] =
    {field_bind_expression, 2},
    {field_bind_name, 0},
    {field_rest, 4},
  [137] =
    {field_parameter, 1},
    {field_parameter, 2},
    {field_parameter, 3},
    {field_return_type, 6},
  [141] =
    {field_field, 3},
    {field_field, 4},
    {field_field, 5},
  [144] =
    {field_body, 7},
    {field_parameter, 2},
    {field_parameter, 3},
    {field_return_type, 5},
  [148] =
    {field_body, 7},
    {field_parameter, 2},
    {field_parameter, 3},
    {field_parameter, 4},
  [152] =
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
      if (eof) ADVANCE(73);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '[') ADVANCE(113);
      if (lookahead == ']') ADVANCE(114);
      if (lookahead == '_') ADVANCE(70);
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(27);
      if (lookahead == 'm') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == 't') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(44);
      if (lookahead == 'w') ADVANCE(35);
      if (lookahead == '{') ADVANCE(92);
      if (lookahead == '|') ADVANCE(90);
      if (lookahead == '}') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(0)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(124);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '[') ADVANCE(113);
      if (lookahead == 'd') ADVANCE(145);
      if (lookahead == 'f') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(133);
      if (lookahead == 't') ADVANCE(150);
      if (lookahead == 'u') ADVANCE(142);
      if (lookahead == '{') ADVANCE(92);
      if (lookahead == '|') ADVANCE(12);
      if (lookahead == '}') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(1)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(124);
      if (sym__name_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '[') ADVANCE(113);
      if (lookahead == ']') ADVANCE(114);
      if (lookahead == 'd') ADVANCE(145);
      if (lookahead == 'f') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(128);
      if (lookahead == 't') ADVANCE(150);
      if (lookahead == 'u') ADVANCE(142);
      if (lookahead == '{') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(2)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(124);
      if (sym__name_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '[') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 't') ADVANCE(150);
      if (lookahead == 'u') ADVANCE(142);
      if (lookahead == '{') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(3)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(124);
      if (sym__name_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(115);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == ']') ADVANCE(114);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == 'w') ADVANCE(35);
      if (lookahead == '|') ADVANCE(90);
      if (lookahead == '}') ADVANCE(93);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '_') ADVANCE(70);
      if (lookahead == '{') ADVANCE(92);
      if (lookahead == '}') ADVANCE(93);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(6)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(124);
      if (sym__name_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(164);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(164);
      if (lookahead == '>') ADVANCE(91);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(110);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(7);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(10)
      if (sym__package_name_character_set_1(lookahead)) ADVANCE(125);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(85);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(97);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 28:
      if (lookahead == 'g') ADVANCE(43);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(106);
      END_STATE();
    case 30:
      if (lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(68);
      if (lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 'x') ADVANCE(48);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(33);
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 50:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 70:
      if (sym__package_name_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 71:
      if (eof) ADVANCE(73);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead == 't') ADVANCE(161);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(71)
      if (sym__package_name_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 72:
      if (eof) ADVANCE(73);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(146);
      if (lookahead == 't') ADVANCE(161);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(72)
      if (sym__package_name_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_exports);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(85);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_import);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_type);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '>') ADVANCE(97);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_foreign);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_fn);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_match);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_do);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_return);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_expression_string);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_expression_int);
      if (lookahead == '.') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_expression_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_expression_true);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_expression_true);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_expression_false);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_expression_false);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_expression_unit);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_expression_unit);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__proper_name);
      if (sym__name_character_set_2(lookahead)) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__package_name);
      if (sym__package_name_character_set_2(lookahead)) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == 'n') ADVANCE(99);
      if (sym__name_character_set_3(lookahead)) ADVANCE(162);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(140);
      if (sym__name_character_set_3(lookahead)) ADVANCE(162);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a') ADVANCE(155);
      if (sym__name_character_set_3(lookahead)) ADVANCE(162);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c') ADVANCE(137);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(119);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(121);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(87);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(158);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e') ADVANCE(138);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f') ADVANCE(101);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g') ADVANCE(144);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h') ADVANCE(105);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(136);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i') ADVANCE(156);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l') ADVANCE(154);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'm') ADVANCE(149);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(139);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(112);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n') ADVANCE(96);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(109);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(152);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o') ADVANCE(153);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p') ADVANCE(132);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p') ADVANCE(147);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(159);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(143);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(134);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r') ADVANCE(157);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's') ADVANCE(131);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(129);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(123);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(80);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't') ADVANCE(160);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u') ADVANCE(130);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u') ADVANCE(151);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'y') ADVANCE(148);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__name);
      if (sym__name_character_set_2(lookahead)) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__unused_name);
      if (sym__name_character_set_2(lookahead)) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(164);
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
  [33] = {.lex_state = 71},
  [34] = {.lex_state = 71},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
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
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 72},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 72},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 72},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 71},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 71},
  [139] = {.lex_state = 71},
  [140] = {.lex_state = 71},
  [141] = {.lex_state = 71},
  [142] = {.lex_state = 71},
  [143] = {.lex_state = 71},
  [144] = {.lex_state = 71},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 71},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 71},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 72},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 72},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 72},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 72},
  [171] = {.lex_state = 72},
  [172] = {.lex_state = 6},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 72},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 72},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 6},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 72},
  [187] = {.lex_state = 6},
  [188] = {.lex_state = 72},
  [189] = {.lex_state = 72},
  [190] = {.lex_state = 72},
  [191] = {.lex_state = 6},
  [192] = {.lex_state = 72},
  [193] = {.lex_state = 6},
  [194] = {.lex_state = 72},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 6},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 6},
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
  [232] = {.lex_state = 0},
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
  [250] = {.lex_state = 6},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 6},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 6},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 6},
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
  [281] = {.lex_state = 6},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 6},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 6},
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
  [305] = {.lex_state = 0},
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
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 2},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 10},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
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
    [anon_sym_alias] = ACTIONS(1),
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
    [sym__unused_name] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(347),
    [sym_module_header] = STATE(33),
    [anon_sym_module] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
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
    STATE(54), 1,
      sym_expression_variable_name,
    STATE(82), 1,
      sym_expression_constructor_proper_name,
    STATE(169), 1,
      sym_qualifier,
    STATE(301), 1,
      sym_expression_effect_bind_name,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(86), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(339), 4,
      sym__expression_effect_statement,
      sym_expression_effect_bind,
      sym_expression_effect_expression,
      sym_expression_effect_return,
    STATE(296), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(58), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [86] = 22,
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
    STATE(54), 1,
      sym_expression_variable_name,
    STATE(82), 1,
      sym_expression_constructor_proper_name,
    STATE(169), 1,
      sym_qualifier,
    STATE(301), 1,
      sym_expression_effect_bind_name,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(86), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(303), 4,
      sym__expression_effect_statement,
      sym_expression_effect_bind,
      sym_expression_effect_expression,
      sym_expression_effect_return,
    STATE(296), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(58), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [172] = 22,
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
    STATE(54), 1,
      sym_expression_variable_name,
    STATE(82), 1,
      sym_expression_constructor_proper_name,
    STATE(169), 1,
      sym_qualifier,
    STATE(301), 1,
      sym_expression_effect_bind_name,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(86), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(314), 4,
      sym__expression_effect_statement,
      sym_expression_effect_bind,
      sym_expression_effect_expression,
      sym_expression_effect_return,
    STATE(296), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(58), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [258] = 20,
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
      anon_sym_RBRACK,
    ACTIONS(33), 1,
      sym__name,
    STATE(54), 1,
      sym_expression_variable_name,
    STATE(82), 1,
      sym_expression_constructor_proper_name,
    STATE(169), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(86), 2,
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
    STATE(58), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [335] = 20,
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
      anon_sym_RPAREN,
    STATE(54), 1,
      sym_expression_variable_name,
    STATE(82), 1,
      sym_expression_constructor_proper_name,
    STATE(169), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(86), 2,
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
    STATE(58), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [412] = 20,
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
    STATE(54), 1,
      sym_expression_variable_name,
    STATE(82), 1,
      sym_expression_constructor_proper_name,
    STATE(169), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(86), 2,
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
    STATE(58), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [489] = 20,
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
    STATE(54), 1,
      sym_expression_variable_name,
    STATE(82), 1,
      sym_expression_constructor_proper_name,
    STATE(169), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(86), 2,
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
    STATE(58), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [566] = 20,
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
      anon_sym_RBRACK,
    STATE(54), 1,
      sym_expression_variable_name,
    STATE(82), 1,
      sym_expression_constructor_proper_name,
    STATE(169), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(86), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(231), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(58), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [643] = 20,
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
      anon_sym_RPAREN,
    STATE(54), 1,
      sym_expression_variable_name,
    STATE(82), 1,
      sym_expression_constructor_proper_name,
    STATE(169), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(86), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(223), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(58), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [720] = 19,
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
    STATE(54), 1,
      sym_expression_variable_name,
    STATE(82), 1,
      sym_expression_constructor_proper_name,
    STATE(169), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(86), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(92), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(58), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [794] = 19,
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
    STATE(54), 1,
      sym_expression_variable_name,
    STATE(82), 1,
      sym_expression_constructor_proper_name,
    STATE(169), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(86), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(96), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(58), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [868] = 19,
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
    STATE(54), 1,
      sym_expression_variable_name,
    STATE(82), 1,
      sym_expression_constructor_proper_name,
    STATE(169), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(86), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(335), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(58), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [942] = 19,
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
    STATE(54), 1,
      sym_expression_variable_name,
    STATE(82), 1,
      sym_expression_constructor_proper_name,
    STATE(169), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(86), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(95), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(58), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [1016] = 19,
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
    STATE(54), 1,
      sym_expression_variable_name,
    STATE(82), 1,
      sym_expression_constructor_proper_name,
    STATE(169), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(86), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(101), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(58), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [1090] = 19,
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
    STATE(54), 1,
      sym_expression_variable_name,
    STATE(82), 1,
      sym_expression_constructor_proper_name,
    STATE(169), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(86), 2,
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
    STATE(58), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [1164] = 19,
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
    STATE(54), 1,
      sym_expression_variable_name,
    STATE(82), 1,
      sym_expression_constructor_proper_name,
    STATE(169), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(86), 2,
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
    STATE(58), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [1238] = 19,
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
    STATE(54), 1,
      sym_expression_variable_name,
    STATE(82), 1,
      sym_expression_constructor_proper_name,
    STATE(169), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(86), 2,
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
    STATE(58), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [1312] = 19,
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
    STATE(54), 1,
      sym_expression_variable_name,
    STATE(82), 1,
      sym_expression_constructor_proper_name,
    STATE(169), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(86), 2,
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
    STATE(58), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [1386] = 19,
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
    STATE(54), 1,
      sym_expression_variable_name,
    STATE(82), 1,
      sym_expression_constructor_proper_name,
    STATE(169), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(86), 2,
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
    STATE(58), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [1460] = 19,
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
    STATE(54), 1,
      sym_expression_variable_name,
    STATE(82), 1,
      sym_expression_constructor_proper_name,
    STATE(169), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(86), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(313), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(58), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [1534] = 19,
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
    STATE(54), 1,
      sym_expression_variable_name,
    STATE(82), 1,
      sym_expression_constructor_proper_name,
    STATE(169), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(86), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(289), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(58), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [1608] = 19,
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
    STATE(54), 1,
      sym_expression_variable_name,
    STATE(82), 1,
      sym_expression_constructor_proper_name,
    STATE(169), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(86), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(315), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(58), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [1682] = 19,
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
    STATE(54), 1,
      sym_expression_variable_name,
    STATE(82), 1,
      sym_expression_constructor_proper_name,
    STATE(169), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(86), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(99), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(58), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [1756] = 19,
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
    STATE(54), 1,
      sym_expression_variable_name,
    STATE(82), 1,
      sym_expression_constructor_proper_name,
    STATE(169), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(86), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(323), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(58), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [1830] = 19,
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
    STATE(54), 1,
      sym_expression_variable_name,
    STATE(82), 1,
      sym_expression_constructor_proper_name,
    STATE(169), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(86), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(308), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(58), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [1904] = 19,
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
    STATE(54), 1,
      sym_expression_variable_name,
    STATE(82), 1,
      sym_expression_constructor_proper_name,
    STATE(169), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(86), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(304), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(58), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [1978] = 19,
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
    STATE(54), 1,
      sym_expression_variable_name,
    STATE(82), 1,
      sym_expression_constructor_proper_name,
    STATE(169), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(86), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(266), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(58), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [2052] = 19,
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
    STATE(54), 1,
      sym_expression_variable_name,
    STATE(82), 1,
      sym_expression_constructor_proper_name,
    STATE(169), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(86), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(97), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(58), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [2126] = 19,
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
    STATE(54), 1,
      sym_expression_variable_name,
    STATE(82), 1,
      sym_expression_constructor_proper_name,
    STATE(169), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(57), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(86), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(93), 5,
      sym__expression,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
      sym_expression_effect,
    STATE(58), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [2200] = 13,
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
    STATE(54), 1,
      sym_expression_variable_name,
    STATE(82), 1,
      sym_expression_constructor_proper_name,
    STATE(169), 1,
      sym_qualifier,
    ACTIONS(23), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(67), 2,
      sym__expression1,
      sym_expression_constructor,
    ACTIONS(25), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(58), 7,
      sym__expression0,
      sym__expression_parens,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_access,
      sym_expression_variable,
  [2251] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    STATE(109), 1,
      sym_type_constructor_proper_name,
    STATE(287), 1,
      sym_qualifier,
    STATE(104), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(280), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2289] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      anon_sym_import,
    ACTIONS(59), 1,
      anon_sym_type,
    ACTIONS(61), 1,
      anon_sym_foreign,
    ACTIONS(63), 1,
      sym__name,
    STATE(201), 1,
      sym_value_declaration_name,
    STATE(34), 2,
      sym_module_import,
      aux_sym_source_file_repeat1,
    STATE(68), 8,
      sym__module_declaration,
      sym__type_declaration,
      sym_type_alias_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [2325] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_import,
    ACTIONS(59), 1,
      anon_sym_type,
    ACTIONS(61), 1,
      anon_sym_foreign,
    ACTIONS(63), 1,
      sym__name,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    STATE(201), 1,
      sym_value_declaration_name,
    STATE(112), 2,
      sym_module_import,
      aux_sym_source_file_repeat1,
    STATE(78), 8,
      sym__module_declaration,
      sym__type_declaration,
      sym_type_alias_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [2361] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym_type_constructor_proper_name,
    STATE(287), 1,
      sym_qualifier,
    STATE(104), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(280), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2399] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym_type_constructor_proper_name,
    STATE(287), 1,
      sym_qualifier,
    STATE(104), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(280), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2437] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym_type_constructor_proper_name,
    STATE(287), 1,
      sym_qualifier,
    STATE(104), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(280), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2475] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym_type_constructor_proper_name,
    STATE(287), 1,
      sym_qualifier,
    STATE(104), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(242), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2513] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym_type_constructor_proper_name,
    STATE(287), 1,
      sym_qualifier,
    STATE(104), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(280), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2551] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym_type_constructor_proper_name,
    STATE(287), 1,
      sym_qualifier,
    STATE(104), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(280), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2589] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    STATE(109), 1,
      sym_type_constructor_proper_name,
    STATE(287), 1,
      sym_qualifier,
    STATE(104), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(148), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2624] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    STATE(109), 1,
      sym_type_constructor_proper_name,
    STATE(287), 1,
      sym_qualifier,
    STATE(104), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(280), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2659] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    STATE(109), 1,
      sym_type_constructor_proper_name,
    STATE(287), 1,
      sym_qualifier,
    STATE(104), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(345), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2694] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    STATE(109), 1,
      sym_type_constructor_proper_name,
    STATE(287), 1,
      sym_qualifier,
    STATE(104), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(275), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2729] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    STATE(109), 1,
      sym_type_constructor_proper_name,
    STATE(287), 1,
      sym_qualifier,
    STATE(104), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(199), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2764] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    STATE(109), 1,
      sym_type_constructor_proper_name,
    STATE(287), 1,
      sym_qualifier,
    STATE(104), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(307), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2799] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    STATE(109), 1,
      sym_type_constructor_proper_name,
    STATE(287), 1,
      sym_qualifier,
    STATE(104), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(146), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2834] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    STATE(109), 1,
      sym_type_constructor_proper_name,
    STATE(287), 1,
      sym_qualifier,
    STATE(104), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(337), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2869] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    STATE(109), 1,
      sym_type_constructor_proper_name,
    STATE(287), 1,
      sym_qualifier,
    STATE(104), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(145), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2904] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    STATE(109), 1,
      sym_type_constructor_proper_name,
    STATE(287), 1,
      sym_qualifier,
    STATE(104), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(149), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2939] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    STATE(109), 1,
      sym_type_constructor_proper_name,
    STATE(287), 1,
      sym_qualifier,
    STATE(104), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(179), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [2974] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    STATE(109), 1,
      sym_type_constructor_proper_name,
    STATE(287), 1,
      sym_qualifier,
    STATE(104), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(212), 7,
      sym__type,
      sym__type1,
      sym_type_function,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [3009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(79), 13,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_PIPE,
    ACTIONS(83), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [3052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_PIPE,
    ACTIONS(87), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [3073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_PIPE,
    ACTIONS(91), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [3094] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_PIPE,
    STATE(66), 1,
      sym_expression_call_arguments,
    ACTIONS(95), 10,
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
  [3119] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      anon_sym_PIPE,
    ACTIONS(101), 11,
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
  [3142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_PIPE,
    ACTIONS(107), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [3163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_PIPE,
    ACTIONS(111), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [3184] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__proper_name,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    STATE(109), 1,
      sym_type_constructor_proper_name,
    STATE(287), 1,
      sym_qualifier,
    STATE(104), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(332), 5,
      sym__type1,
      sym__type_parens,
      sym_type_closed_record,
      sym_type_open_record,
      sym_type_call,
  [3217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_PIPE,
    ACTIONS(117), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [3238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_PIPE,
    ACTIONS(121), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [3259] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 1,
      anon_sym_type,
    ACTIONS(130), 1,
      anon_sym_foreign,
    ACTIONS(133), 1,
      sym__name,
    STATE(201), 1,
      sym_value_declaration_name,
    STATE(64), 8,
      sym__module_declaration,
      sym__type_declaration,
      sym_type_alias_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [3288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_PIPE,
    ACTIONS(136), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [3309] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_PIPE,
    ACTIONS(140), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [3330] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      anon_sym_PIPE,
    STATE(66), 1,
      sym_expression_call_arguments,
    ACTIONS(144), 10,
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
  [3355] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_type,
    ACTIONS(61), 1,
      anon_sym_foreign,
    ACTIONS(63), 1,
      sym__name,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    STATE(201), 1,
      sym_value_declaration_name,
    STATE(64), 8,
      sym__module_declaration,
      sym__type_declaration,
      sym_type_alias_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [3384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_PIPE,
    ACTIONS(150), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [3405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(154), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [3426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_PIPE,
    ACTIONS(158), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [3447] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(166), 1,
      anon_sym_PIPE,
    ACTIONS(162), 11,
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
  [3470] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_PIPE,
    ACTIONS(168), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [3491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_PIPE,
    ACTIONS(172), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [3512] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_PIPE,
    ACTIONS(176), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [3533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_PIPE,
    ACTIONS(180), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [3554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_PIPE,
    ACTIONS(184), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [3575] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_type,
    ACTIONS(61), 1,
      anon_sym_foreign,
    ACTIONS(63), 1,
      sym__name,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    STATE(201), 1,
      sym_value_declaration_name,
    STATE(64), 8,
      sym__module_declaration,
      sym__type_declaration,
      sym_type_alias_declaration,
      sym_empty_type_declaration,
      sym_type_declaration,
      sym_foreign_value_declaration,
      sym_value_declaration,
      aux_sym_source_file_repeat2,
  [3604] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_PIPE,
    ACTIONS(190), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [3625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_PIPE,
    ACTIONS(162), 11,
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
  [3645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_PIPE,
    ACTIONS(194), 11,
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
  [3665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_PIPE,
    ACTIONS(198), 11,
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
  [3685] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    ACTIONS(204), 1,
      sym__proper_name,
    ACTIONS(206), 1,
      sym__name,
    ACTIONS(208), 1,
      sym__unused_name,
    STATE(127), 1,
      sym_pattern_constructor_proper_name,
    STATE(232), 1,
      sym_expression_function_parameter,
    STATE(292), 1,
      sym_qualifier,
    STATE(162), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [3716] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym__proper_name,
    ACTIONS(206), 1,
      sym__name,
    ACTIONS(208), 1,
      sym__unused_name,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      sym_pattern_constructor_proper_name,
    STATE(277), 1,
      sym_expression_function_parameter,
    STATE(292), 1,
      sym_qualifier,
    STATE(162), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [3747] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym__proper_name,
    ACTIONS(206), 1,
      sym__name,
    ACTIONS(208), 1,
      sym__unused_name,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      sym_pattern_constructor_proper_name,
    STATE(277), 1,
      sym_expression_function_parameter,
    STATE(292), 1,
      sym_qualifier,
    STATE(162), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [3778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_PIPE,
    ACTIONS(218), 1,
      anon_sym_PIPE_GT,
    ACTIONS(214), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_with,
      anon_sym_end,
      anon_sym_RBRACK,
  [3799] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym__proper_name,
    ACTIONS(206), 1,
      sym__name,
    ACTIONS(208), 1,
      sym__unused_name,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      sym_pattern_constructor_proper_name,
    STATE(292), 1,
      sym_qualifier,
    STATE(270), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [3827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 10,
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
  [3843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 10,
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
  [3859] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym__proper_name,
    ACTIONS(206), 1,
      sym__name,
    ACTIONS(208), 1,
      sym__unused_name,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      sym_pattern_constructor_proper_name,
    STATE(292), 1,
      sym_qualifier,
    STATE(238), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [3887] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym__proper_name,
    ACTIONS(206), 1,
      sym__name,
    ACTIONS(208), 1,
      sym__unused_name,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      sym_pattern_constructor_proper_name,
    STATE(292), 1,
      sym_qualifier,
    STATE(270), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [3915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 10,
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
  [3931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 10,
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
  [3947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 10,
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
  [3963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 10,
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
  [3979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 10,
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
  [3995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 10,
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
  [4011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 10,
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
  [4027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 10,
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
  [4043] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym__proper_name,
    ACTIONS(206), 1,
      sym__name,
    ACTIONS(208), 1,
      sym__unused_name,
    STATE(127), 1,
      sym_pattern_constructor_proper_name,
    STATE(277), 1,
      sym_expression_function_parameter,
    STATE(292), 1,
      sym_qualifier,
    STATE(162), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [4071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 10,
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
  [4087] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym__proper_name,
    ACTIONS(206), 1,
      sym__name,
    ACTIONS(208), 1,
      sym__unused_name,
    STATE(127), 1,
      sym_pattern_constructor_proper_name,
    STATE(292), 1,
      sym_qualifier,
    STATE(270), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [4112] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym__proper_name,
    ACTIONS(206), 1,
      sym__name,
    ACTIONS(208), 1,
      sym__unused_name,
    STATE(127), 1,
      sym_pattern_constructor_proper_name,
    STATE(292), 1,
      sym_qualifier,
    STATE(317), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [4137] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    STATE(128), 1,
      sym_type_call_arguments,
    ACTIONS(248), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(252), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4171] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_DOT_DOT,
    ACTIONS(256), 1,
      sym__proper_name,
    ACTIONS(258), 1,
      sym__name,
    STATE(155), 1,
      sym_exposing_type_name,
    STATE(218), 3,
      sym__exposing_list_item,
      sym_exposing_type,
      sym_exposing_value,
  [4192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4205] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_SEMI,
    ACTIONS(264), 1,
      anon_sym_as,
    ACTIONS(266), 1,
      anon_sym_LPAREN,
    STATE(326), 1,
      sym__everything,
    STATE(302), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [4226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4252] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym__proper_name,
    ACTIONS(258), 1,
      sym__name,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
    STATE(155), 1,
      sym_exposing_type_name,
    STATE(259), 3,
      sym__exposing_list_item,
      sym_exposing_type,
      sym_exposing_value,
  [4273] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
    ACTIONS(274), 1,
      anon_sym_import,
    STATE(112), 2,
      sym_module_import,
      aux_sym_source_file_repeat1,
    ACTIONS(277), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4305] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_SEMI,
    ACTIONS(283), 1,
      anon_sym_as,
    STATE(326), 1,
      sym__everything,
    STATE(310), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [4326] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym__proper_name,
    ACTIONS(258), 1,
      sym__name,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    STATE(155), 1,
      sym_exposing_type_name,
    STATE(259), 3,
      sym__exposing_list_item,
      sym_exposing_type,
      sym_exposing_value,
  [4347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4371] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_DOT,
    STATE(122), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(291), 4,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LPAREN,
  [4387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_DASH_GT,
    ACTIONS(297), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [4413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_DOT,
    STATE(132), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(303), 4,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LPAREN,
  [4441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    STATE(184), 1,
      sym_pattern_constructor_fields,
    ACTIONS(307), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [4457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4481] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_LT_DASH,
    ACTIONS(150), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
  [4495] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    STATE(173), 1,
      sym_pattern_constructor_fields,
    ACTIONS(315), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [4511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(319), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [4537] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_LPAREN,
    ACTIONS(321), 1,
      anon_sym_SEMI,
    STATE(326), 1,
      sym__everything,
    STATE(343), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [4555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4567] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_DOT,
    STATE(132), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(325), 4,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LPAREN,
  [4583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4595] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym__proper_name,
    ACTIONS(258), 1,
      sym__name,
    STATE(155), 1,
      sym_exposing_type_name,
    STATE(259), 3,
      sym__exposing_list_item,
      sym_exposing_type,
      sym_exposing_value,
  [4613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [4637] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      anon_sym_SEMI,
    STATE(326), 1,
      sym__everything,
    STATE(342), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [4655] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
    ACTIONS(340), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      ts_builtin_sym_end,
    ACTIONS(344), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      ts_builtin_sym_end,
    ACTIONS(348), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    ACTIONS(352), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      ts_builtin_sym_end,
    ACTIONS(356), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      ts_builtin_sym_end,
    ACTIONS(360), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
    ACTIONS(364), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [4757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [4768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
    ACTIONS(372), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [4792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [4803] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_RBRACE,
    ACTIONS(380), 1,
      sym__name,
    STATE(249), 1,
      sym_type_record_field,
    STATE(327), 1,
      sym_type_open_record_row_variable,
    STATE(334), 1,
      sym_type_record_field_label,
  [4822] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_LPAREN,
    STATE(326), 1,
      sym__everything,
    STATE(329), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [4837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [4848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 5,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_LPAREN,
  [4859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      ts_builtin_sym_end,
    ACTIONS(384), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4872] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_LPAREN,
    STATE(262), 1,
      sym__everything,
    STATE(263), 1,
      sym_exposing_type_constructors,
    ACTIONS(388), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4889] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_RBRACE,
    ACTIONS(392), 1,
      sym__name,
    STATE(229), 1,
      sym_expression_record_field,
    STATE(305), 1,
      sym_expression_record_field_label,
  [4905] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_RBRACE,
    ACTIONS(396), 1,
      sym__name,
    STATE(276), 1,
      sym_type_record_field,
    STATE(334), 1,
      sym_type_record_field_label,
  [4921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      ts_builtin_sym_end,
    ACTIONS(400), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4933] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_PIPE,
    ACTIONS(404), 1,
      sym__proper_name,
    STATE(180), 1,
      sym_type_declaration_constructor_name,
    STATE(228), 1,
      sym_type_declaration_constructor,
  [4949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [4959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [4969] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_COLON,
    STATE(290), 1,
      sym_type_annotation,
    ACTIONS(410), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      ts_builtin_sym_end,
    ACTIONS(416), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [4995] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_SEMI,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_EQ,
    STATE(282), 1,
      sym_type_declaration_variables,
  [5011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [5021] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_end,
    STATE(175), 2,
      sym_expression_match_arm,
      aux_sym_expression_match_repeat1,
  [5035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      ts_builtin_sym_end,
    ACTIONS(432), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [5057] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      sym__proper_name,
    ACTIONS(438), 1,
      sym__name,
    STATE(63), 1,
      sym_expression_variable_name,
    STATE(81), 1,
      sym_expression_constructor_proper_name,
  [5073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      ts_builtin_sym_end,
    ACTIONS(442), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      ts_builtin_sym_end,
    ACTIONS(446), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5097] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym__name,
    ACTIONS(448), 1,
      anon_sym_RBRACE,
    STATE(288), 1,
      sym_expression_record_field,
    STATE(305), 1,
      sym_expression_record_field_label,
  [5113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [5123] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_expression_call_arguments_repeat1,
    ACTIONS(450), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5137] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_end,
    STATE(175), 2,
      sym_expression_match_arm,
      aux_sym_expression_match_repeat1,
  [5151] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym__proper_name,
    ACTIONS(460), 1,
      anon_sym_PIPE,
    STATE(180), 1,
      sym_type_declaration_constructor_name,
    STATE(236), 1,
      sym_type_declaration_constructor,
  [5167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [5177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      ts_builtin_sym_end,
    ACTIONS(466), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [5199] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
    STATE(286), 1,
      sym_type_declaration_constructor_fields,
    ACTIONS(470), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [5213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      ts_builtin_sym_end,
    ACTIONS(476), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5225] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_LPAREN,
    ACTIONS(480), 1,
      sym__proper_name,
    STATE(114), 1,
      sym_module_name,
    STATE(269), 1,
      sym_module_import_package,
  [5241] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym__name,
    ACTIONS(482), 1,
      anon_sym_RBRACE,
    STATE(276), 1,
      sym_type_record_field,
    STATE(334), 1,
      sym_type_record_field_label,
  [5257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [5267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [5277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      ts_builtin_sym_end,
    ACTIONS(490), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5289] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym__name,
    ACTIONS(492), 1,
      anon_sym_RBRACE,
    STATE(288), 1,
      sym_expression_record_field,
    STATE(305), 1,
      sym_expression_record_field_label,
  [5305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      ts_builtin_sym_end,
    ACTIONS(496), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5317] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      ts_builtin_sym_end,
    ACTIONS(500), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      ts_builtin_sym_end,
    ACTIONS(504), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5341] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym__name,
    ACTIONS(506), 1,
      anon_sym_RBRACE,
    STATE(276), 1,
      sym_type_record_field,
    STATE(334), 1,
      sym_type_record_field_label,
  [5357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      ts_builtin_sym_end,
    ACTIONS(510), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5369] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym__name,
    ACTIONS(512), 1,
      anon_sym_RBRACE,
    STATE(276), 1,
      sym_type_record_field,
    STATE(334), 1,
      sym_type_record_field_label,
  [5385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      ts_builtin_sym_end,
    ACTIONS(516), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5397] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym__proper_name,
    STATE(180), 1,
      sym_type_declaration_constructor_name,
    STATE(244), 1,
      sym_type_declaration_constructor,
  [5410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5419] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym__name,
    STATE(247), 1,
      sym_type_record_field,
    STATE(334), 1,
      sym_type_record_field_label,
  [5432] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_RBRACE,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    STATE(251), 1,
      aux_sym_type_closed_record_repeat1,
  [5445] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    STATE(255), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [5458] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_alias,
    ACTIONS(528), 1,
      sym__proper_name,
    STATE(164), 1,
      sym_type_declaration_name,
  [5471] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_COLON,
    ACTIONS(530), 1,
      anon_sym_EQ,
    STATE(298), 1,
      sym_type_annotation,
  [5484] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      aux_sym_exposing_list_repeat1,
  [5497] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_RPAREN,
    ACTIONS(539), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_pattern_constructor_fields_repeat1,
  [5510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_EQ,
  [5519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
    ACTIONS(544), 1,
      anon_sym_EQ,
    STATE(300), 1,
      sym_type_declaration_variables,
  [5532] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
    ACTIONS(546), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      aux_sym_pattern_constructor_fields_repeat1,
  [5545] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
    ACTIONS(550), 1,
      sym__name,
    STATE(279), 1,
      sym_type_declaration_variable,
  [5558] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    STATE(208), 1,
      aux_sym_type_declaration_variables_repeat1,
  [5571] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_SEMI,
    ACTIONS(559), 1,
      anon_sym_PIPE,
    STATE(211), 1,
      aux_sym_type_declaration_repeat1,
  [5584] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_DASH_GT,
    ACTIONS(563), 1,
      anon_sym_COLON,
    STATE(333), 1,
      sym_return_type_annotation,
  [5597] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_SEMI,
    ACTIONS(567), 1,
      anon_sym_PIPE,
    STATE(211), 1,
      aux_sym_type_declaration_repeat1,
  [5610] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    ACTIONS(572), 1,
      anon_sym_COMMA,
    STATE(252), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [5623] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_PIPE,
    ACTIONS(574), 1,
      anon_sym_SEMI,
    STATE(254), 1,
      aux_sym_type_declaration_repeat1,
  [5636] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_PIPE,
    ACTIONS(574), 1,
      anon_sym_SEMI,
    STATE(211), 1,
      aux_sym_type_declaration_repeat1,
  [5649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5658] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_COMMA,
    ACTIONS(581), 1,
      anon_sym_RBRACE,
    STATE(216), 1,
      aux_sym_expression_record_repeat1,
  [5671] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(583), 1,
      anon_sym_COMMA,
    STATE(245), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [5684] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
    ACTIONS(587), 1,
      anon_sym_COMMA,
    STATE(222), 1,
      aux_sym_exposing_list_repeat1,
  [5697] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_COLON,
    ACTIONS(589), 1,
      anon_sym_DASH_GT,
    STATE(324), 1,
      sym_return_type_annotation,
  [5710] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    STATE(243), 1,
      aux_sym_expression_function_repeat1,
  [5723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym__name,
    STATE(276), 1,
      sym_type_record_field,
    STATE(334), 1,
      sym_type_record_field_label,
  [5736] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    ACTIONS(593), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      aux_sym_exposing_list_repeat1,
  [5749] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    STATE(239), 1,
      aux_sym_expression_call_arguments_repeat1,
  [5762] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_RBRACK,
    ACTIONS(599), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_expression_call_arguments_repeat1,
  [5775] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_RBRACE,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    STATE(251), 1,
      aux_sym_type_closed_record_repeat1,
  [5788] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
    ACTIONS(605), 1,
      anon_sym_COMMA,
    STATE(248), 1,
      aux_sym_type_declaration_variables_repeat1,
  [5801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_PIPE,
  [5810] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_PIPE,
    ACTIONS(609), 1,
      anon_sym_SEMI,
    STATE(240), 1,
      aux_sym_type_declaration_repeat1,
  [5823] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    ACTIONS(613), 1,
      anon_sym_RBRACE,
    STATE(235), 1,
      aux_sym_expression_record_repeat1,
  [5836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_PIPE,
    STATE(166), 2,
      sym_expression_match_arm,
      aux_sym_expression_match_repeat1,
  [5847] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    ACTIONS(617), 1,
      anon_sym_RBRACK,
    STATE(224), 1,
      aux_sym_expression_call_arguments_repeat1,
  [5860] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
    ACTIONS(621), 1,
      anon_sym_COMMA,
    STATE(220), 1,
      aux_sym_expression_function_repeat1,
  [5873] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_COLON,
    ACTIONS(623), 1,
      anon_sym_DASH_GT,
    STATE(309), 1,
      sym_return_type_annotation,
  [5886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5895] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_RBRACE,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    STATE(216), 1,
      aux_sym_expression_record_repeat1,
  [5908] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_PIPE,
    ACTIONS(627), 1,
      anon_sym_SEMI,
    STATE(214), 1,
      aux_sym_type_declaration_repeat1,
  [5921] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym__proper_name,
    STATE(180), 1,
      sym_type_declaration_constructor_name,
    STATE(213), 1,
      sym_type_declaration_constructor,
  [5934] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_RPAREN,
    ACTIONS(631), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_pattern_constructor_fields_repeat1,
  [5947] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_expression_call_arguments_repeat1,
  [5960] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_PIPE,
    ACTIONS(635), 1,
      anon_sym_SEMI,
    STATE(211), 1,
      aux_sym_type_declaration_repeat1,
  [5973] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym__proper_name,
    STATE(180), 1,
      sym_type_declaration_constructor_name,
    STATE(284), 1,
      sym_type_declaration_constructor,
  [5986] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_RPAREN,
    ACTIONS(639), 1,
      anon_sym_COMMA,
    STATE(217), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [5999] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
    ACTIONS(643), 1,
      anon_sym_COMMA,
    STATE(243), 1,
      aux_sym_expression_function_repeat1,
  [6012] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_PIPE,
    ACTIONS(635), 1,
      anon_sym_SEMI,
    STATE(209), 1,
      aux_sym_type_declaration_repeat1,
  [6025] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_RPAREN,
    ACTIONS(648), 1,
      anon_sym_COMMA,
    STATE(245), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [6038] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_COLON,
    ACTIONS(651), 1,
      anon_sym_DASH_GT,
    STATE(312), 1,
      sym_return_type_annotation,
  [6051] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_COMMA,
    ACTIONS(655), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      aux_sym_type_closed_record_repeat1,
  [6064] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_RPAREN,
    ACTIONS(659), 1,
      anon_sym_COMMA,
    STATE(208), 1,
      aux_sym_type_declaration_variables_repeat1,
  [6077] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    ACTIONS(663), 1,
      anon_sym_RBRACE,
    STATE(198), 1,
      aux_sym_type_closed_record_repeat1,
  [6090] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      sym__name,
    ACTIONS(657), 1,
      anon_sym_RPAREN,
    STATE(279), 1,
      sym_type_declaration_variable,
  [6103] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_COMMA,
    ACTIONS(668), 1,
      anon_sym_RBRACE,
    STATE(251), 1,
      aux_sym_type_closed_record_repeat1,
  [6116] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    ACTIONS(670), 1,
      anon_sym_COMMA,
    STATE(245), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [6129] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym__name,
    STATE(288), 1,
      sym_expression_record_field,
    STATE(305), 1,
      sym_expression_record_field_label,
  [6142] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_PIPE,
    ACTIONS(672), 1,
      anon_sym_SEMI,
    STATE(211), 1,
      aux_sym_type_declaration_repeat1,
  [6155] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(674), 1,
      anon_sym_COMMA,
    STATE(245), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [6168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      sym__proper_name,
    STATE(130), 1,
      sym_module_import_alias,
  [6186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [6194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym__name,
    STATE(273), 1,
      sym_value_declaration_name,
  [6212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [6220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [6244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      sym__name,
    STATE(279), 1,
      sym_type_declaration_variable,
  [6254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 2,
      anon_sym_PIPE,
      anon_sym_end,
  [6262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [6270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      sym__proper_name,
    STATE(346), 1,
      sym_module_name,
  [6280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      sym__proper_name,
    STATE(108), 1,
      sym_module_name,
  [6290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      sym__proper_name,
    STATE(205), 1,
      sym_type_declaration_name,
  [6308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [6316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_COLON,
    STATE(319), 1,
      sym_type_annotation,
  [6326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [6334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [6342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [6350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_PIPE,
    ACTIONS(704), 1,
      anon_sym_COLON,
  [6368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      sym__name,
    STATE(226), 1,
      sym_type_declaration_variable,
  [6394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_SEMI,
    ACTIONS(708), 1,
      anon_sym_EQ,
  [6404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym__name,
    STATE(55), 1,
      sym_expression_record_field_label,
  [6414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [6422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 2,
      sym__proper_name,
      sym__name,
  [6430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [6438] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      sym__proper_name,
    STATE(107), 1,
      sym_type_constructor_proper_name,
  [6448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [6456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [6464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 2,
      anon_sym_SEMI,
      anon_sym_LPAREN,
  [6480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      sym__proper_name,
    STATE(123), 1,
      sym_pattern_constructor_proper_name,
  [6490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [6498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      sym__proper_name,
    STATE(137), 1,
      sym_module_import_alias,
  [6508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_SEMI,
    ACTIONS(730), 1,
      anon_sym_RBRACE,
  [6526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_DASH_GT,
  [6533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_EQ,
  [6540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_else,
  [6547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_EQ,
  [6554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_LT_DASH,
  [6561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_SEMI,
  [6568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_RBRACE,
  [6575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_RPAREN,
  [6582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_EQ,
  [6589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      sym__proper_name,
  [6596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_RPAREN,
  [6603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_then,
  [6610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_DASH_GT,
  [6617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_SEMI,
  [6624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_RPAREN,
  [6631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_DASH_GT,
  [6638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_SEMI,
  [6645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_RBRACE,
  [6652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_SEMI,
  [6659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_LBRACE,
  [6666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_DASH_GT,
  [6673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_LPAREN,
  [6680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_SEMI,
  [6687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_DASH_GT,
  [6694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_RBRACE,
  [6701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_DASH_GT,
  [6708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_with,
  [6715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_DASH_GT,
  [6722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_RPAREN,
  [6729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_SEMI,
  [6736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_PIPE,
  [6743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_DASH_GT,
  [6750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_SEMI,
  [6757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_COLON,
  [6764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_SEMI,
  [6771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_DASH_GT,
  [6778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_DASH_GT,
  [6785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_COLON,
  [6792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_SEMI,
  [6799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_SEMI,
  [6806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_SEMI,
  [6813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_DOT_DOT,
  [6820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_RBRACE,
  [6827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      sym__package_name,
  [6834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      sym__proper_name,
  [6841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_SEMI,
  [6848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_SEMI,
  [6855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_SEMI,
  [6862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_SEMI,
  [6869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_exports,
  [6876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 86,
  [SMALL_STATE(4)] = 172,
  [SMALL_STATE(5)] = 258,
  [SMALL_STATE(6)] = 335,
  [SMALL_STATE(7)] = 412,
  [SMALL_STATE(8)] = 489,
  [SMALL_STATE(9)] = 566,
  [SMALL_STATE(10)] = 643,
  [SMALL_STATE(11)] = 720,
  [SMALL_STATE(12)] = 794,
  [SMALL_STATE(13)] = 868,
  [SMALL_STATE(14)] = 942,
  [SMALL_STATE(15)] = 1016,
  [SMALL_STATE(16)] = 1090,
  [SMALL_STATE(17)] = 1164,
  [SMALL_STATE(18)] = 1238,
  [SMALL_STATE(19)] = 1312,
  [SMALL_STATE(20)] = 1386,
  [SMALL_STATE(21)] = 1460,
  [SMALL_STATE(22)] = 1534,
  [SMALL_STATE(23)] = 1608,
  [SMALL_STATE(24)] = 1682,
  [SMALL_STATE(25)] = 1756,
  [SMALL_STATE(26)] = 1830,
  [SMALL_STATE(27)] = 1904,
  [SMALL_STATE(28)] = 1978,
  [SMALL_STATE(29)] = 2052,
  [SMALL_STATE(30)] = 2126,
  [SMALL_STATE(31)] = 2200,
  [SMALL_STATE(32)] = 2251,
  [SMALL_STATE(33)] = 2289,
  [SMALL_STATE(34)] = 2325,
  [SMALL_STATE(35)] = 2361,
  [SMALL_STATE(36)] = 2399,
  [SMALL_STATE(37)] = 2437,
  [SMALL_STATE(38)] = 2475,
  [SMALL_STATE(39)] = 2513,
  [SMALL_STATE(40)] = 2551,
  [SMALL_STATE(41)] = 2589,
  [SMALL_STATE(42)] = 2624,
  [SMALL_STATE(43)] = 2659,
  [SMALL_STATE(44)] = 2694,
  [SMALL_STATE(45)] = 2729,
  [SMALL_STATE(46)] = 2764,
  [SMALL_STATE(47)] = 2799,
  [SMALL_STATE(48)] = 2834,
  [SMALL_STATE(49)] = 2869,
  [SMALL_STATE(50)] = 2904,
  [SMALL_STATE(51)] = 2939,
  [SMALL_STATE(52)] = 2974,
  [SMALL_STATE(53)] = 3009,
  [SMALL_STATE(54)] = 3031,
  [SMALL_STATE(55)] = 3052,
  [SMALL_STATE(56)] = 3073,
  [SMALL_STATE(57)] = 3094,
  [SMALL_STATE(58)] = 3119,
  [SMALL_STATE(59)] = 3142,
  [SMALL_STATE(60)] = 3163,
  [SMALL_STATE(61)] = 3184,
  [SMALL_STATE(62)] = 3217,
  [SMALL_STATE(63)] = 3238,
  [SMALL_STATE(64)] = 3259,
  [SMALL_STATE(65)] = 3288,
  [SMALL_STATE(66)] = 3309,
  [SMALL_STATE(67)] = 3330,
  [SMALL_STATE(68)] = 3355,
  [SMALL_STATE(69)] = 3384,
  [SMALL_STATE(70)] = 3405,
  [SMALL_STATE(71)] = 3426,
  [SMALL_STATE(72)] = 3447,
  [SMALL_STATE(73)] = 3470,
  [SMALL_STATE(74)] = 3491,
  [SMALL_STATE(75)] = 3512,
  [SMALL_STATE(76)] = 3533,
  [SMALL_STATE(77)] = 3554,
  [SMALL_STATE(78)] = 3575,
  [SMALL_STATE(79)] = 3604,
  [SMALL_STATE(80)] = 3625,
  [SMALL_STATE(81)] = 3645,
  [SMALL_STATE(82)] = 3665,
  [SMALL_STATE(83)] = 3685,
  [SMALL_STATE(84)] = 3716,
  [SMALL_STATE(85)] = 3747,
  [SMALL_STATE(86)] = 3778,
  [SMALL_STATE(87)] = 3799,
  [SMALL_STATE(88)] = 3827,
  [SMALL_STATE(89)] = 3843,
  [SMALL_STATE(90)] = 3859,
  [SMALL_STATE(91)] = 3887,
  [SMALL_STATE(92)] = 3915,
  [SMALL_STATE(93)] = 3931,
  [SMALL_STATE(94)] = 3947,
  [SMALL_STATE(95)] = 3963,
  [SMALL_STATE(96)] = 3979,
  [SMALL_STATE(97)] = 3995,
  [SMALL_STATE(98)] = 4011,
  [SMALL_STATE(99)] = 4027,
  [SMALL_STATE(100)] = 4043,
  [SMALL_STATE(101)] = 4071,
  [SMALL_STATE(102)] = 4087,
  [SMALL_STATE(103)] = 4112,
  [SMALL_STATE(104)] = 4137,
  [SMALL_STATE(105)] = 4155,
  [SMALL_STATE(106)] = 4171,
  [SMALL_STATE(107)] = 4192,
  [SMALL_STATE(108)] = 4205,
  [SMALL_STATE(109)] = 4226,
  [SMALL_STATE(110)] = 4239,
  [SMALL_STATE(111)] = 4252,
  [SMALL_STATE(112)] = 4273,
  [SMALL_STATE(113)] = 4292,
  [SMALL_STATE(114)] = 4305,
  [SMALL_STATE(115)] = 4326,
  [SMALL_STATE(116)] = 4347,
  [SMALL_STATE(117)] = 4359,
  [SMALL_STATE(118)] = 4371,
  [SMALL_STATE(119)] = 4387,
  [SMALL_STATE(120)] = 4399,
  [SMALL_STATE(121)] = 4413,
  [SMALL_STATE(122)] = 4425,
  [SMALL_STATE(123)] = 4441,
  [SMALL_STATE(124)] = 4457,
  [SMALL_STATE(125)] = 4469,
  [SMALL_STATE(126)] = 4481,
  [SMALL_STATE(127)] = 4495,
  [SMALL_STATE(128)] = 4511,
  [SMALL_STATE(129)] = 4523,
  [SMALL_STATE(130)] = 4537,
  [SMALL_STATE(131)] = 4555,
  [SMALL_STATE(132)] = 4567,
  [SMALL_STATE(133)] = 4583,
  [SMALL_STATE(134)] = 4595,
  [SMALL_STATE(135)] = 4613,
  [SMALL_STATE(136)] = 4625,
  [SMALL_STATE(137)] = 4637,
  [SMALL_STATE(138)] = 4655,
  [SMALL_STATE(139)] = 4668,
  [SMALL_STATE(140)] = 4681,
  [SMALL_STATE(141)] = 4694,
  [SMALL_STATE(142)] = 4707,
  [SMALL_STATE(143)] = 4720,
  [SMALL_STATE(144)] = 4733,
  [SMALL_STATE(145)] = 4746,
  [SMALL_STATE(146)] = 4757,
  [SMALL_STATE(147)] = 4768,
  [SMALL_STATE(148)] = 4781,
  [SMALL_STATE(149)] = 4792,
  [SMALL_STATE(150)] = 4803,
  [SMALL_STATE(151)] = 4822,
  [SMALL_STATE(152)] = 4837,
  [SMALL_STATE(153)] = 4848,
  [SMALL_STATE(154)] = 4859,
  [SMALL_STATE(155)] = 4872,
  [SMALL_STATE(156)] = 4889,
  [SMALL_STATE(157)] = 4905,
  [SMALL_STATE(158)] = 4921,
  [SMALL_STATE(159)] = 4933,
  [SMALL_STATE(160)] = 4949,
  [SMALL_STATE(161)] = 4959,
  [SMALL_STATE(162)] = 4969,
  [SMALL_STATE(163)] = 4983,
  [SMALL_STATE(164)] = 4995,
  [SMALL_STATE(165)] = 5011,
  [SMALL_STATE(166)] = 5021,
  [SMALL_STATE(167)] = 5035,
  [SMALL_STATE(168)] = 5047,
  [SMALL_STATE(169)] = 5057,
  [SMALL_STATE(170)] = 5073,
  [SMALL_STATE(171)] = 5085,
  [SMALL_STATE(172)] = 5097,
  [SMALL_STATE(173)] = 5113,
  [SMALL_STATE(174)] = 5123,
  [SMALL_STATE(175)] = 5137,
  [SMALL_STATE(176)] = 5151,
  [SMALL_STATE(177)] = 5167,
  [SMALL_STATE(178)] = 5177,
  [SMALL_STATE(179)] = 5189,
  [SMALL_STATE(180)] = 5199,
  [SMALL_STATE(181)] = 5213,
  [SMALL_STATE(182)] = 5225,
  [SMALL_STATE(183)] = 5241,
  [SMALL_STATE(184)] = 5257,
  [SMALL_STATE(185)] = 5267,
  [SMALL_STATE(186)] = 5277,
  [SMALL_STATE(187)] = 5289,
  [SMALL_STATE(188)] = 5305,
  [SMALL_STATE(189)] = 5317,
  [SMALL_STATE(190)] = 5329,
  [SMALL_STATE(191)] = 5341,
  [SMALL_STATE(192)] = 5357,
  [SMALL_STATE(193)] = 5369,
  [SMALL_STATE(194)] = 5385,
  [SMALL_STATE(195)] = 5397,
  [SMALL_STATE(196)] = 5410,
  [SMALL_STATE(197)] = 5419,
  [SMALL_STATE(198)] = 5432,
  [SMALL_STATE(199)] = 5445,
  [SMALL_STATE(200)] = 5458,
  [SMALL_STATE(201)] = 5471,
  [SMALL_STATE(202)] = 5484,
  [SMALL_STATE(203)] = 5497,
  [SMALL_STATE(204)] = 5510,
  [SMALL_STATE(205)] = 5519,
  [SMALL_STATE(206)] = 5532,
  [SMALL_STATE(207)] = 5545,
  [SMALL_STATE(208)] = 5558,
  [SMALL_STATE(209)] = 5571,
  [SMALL_STATE(210)] = 5584,
  [SMALL_STATE(211)] = 5597,
  [SMALL_STATE(212)] = 5610,
  [SMALL_STATE(213)] = 5623,
  [SMALL_STATE(214)] = 5636,
  [SMALL_STATE(215)] = 5649,
  [SMALL_STATE(216)] = 5658,
  [SMALL_STATE(217)] = 5671,
  [SMALL_STATE(218)] = 5684,
  [SMALL_STATE(219)] = 5697,
  [SMALL_STATE(220)] = 5710,
  [SMALL_STATE(221)] = 5723,
  [SMALL_STATE(222)] = 5736,
  [SMALL_STATE(223)] = 5749,
  [SMALL_STATE(224)] = 5762,
  [SMALL_STATE(225)] = 5775,
  [SMALL_STATE(226)] = 5788,
  [SMALL_STATE(227)] = 5801,
  [SMALL_STATE(228)] = 5810,
  [SMALL_STATE(229)] = 5823,
  [SMALL_STATE(230)] = 5836,
  [SMALL_STATE(231)] = 5847,
  [SMALL_STATE(232)] = 5860,
  [SMALL_STATE(233)] = 5873,
  [SMALL_STATE(234)] = 5886,
  [SMALL_STATE(235)] = 5895,
  [SMALL_STATE(236)] = 5908,
  [SMALL_STATE(237)] = 5921,
  [SMALL_STATE(238)] = 5934,
  [SMALL_STATE(239)] = 5947,
  [SMALL_STATE(240)] = 5960,
  [SMALL_STATE(241)] = 5973,
  [SMALL_STATE(242)] = 5986,
  [SMALL_STATE(243)] = 5999,
  [SMALL_STATE(244)] = 6012,
  [SMALL_STATE(245)] = 6025,
  [SMALL_STATE(246)] = 6038,
  [SMALL_STATE(247)] = 6051,
  [SMALL_STATE(248)] = 6064,
  [SMALL_STATE(249)] = 6077,
  [SMALL_STATE(250)] = 6090,
  [SMALL_STATE(251)] = 6103,
  [SMALL_STATE(252)] = 6116,
  [SMALL_STATE(253)] = 6129,
  [SMALL_STATE(254)] = 6142,
  [SMALL_STATE(255)] = 6155,
  [SMALL_STATE(256)] = 6168,
  [SMALL_STATE(257)] = 6176,
  [SMALL_STATE(258)] = 6186,
  [SMALL_STATE(259)] = 6194,
  [SMALL_STATE(260)] = 6202,
  [SMALL_STATE(261)] = 6212,
  [SMALL_STATE(262)] = 6220,
  [SMALL_STATE(263)] = 6228,
  [SMALL_STATE(264)] = 6236,
  [SMALL_STATE(265)] = 6244,
  [SMALL_STATE(266)] = 6254,
  [SMALL_STATE(267)] = 6262,
  [SMALL_STATE(268)] = 6270,
  [SMALL_STATE(269)] = 6280,
  [SMALL_STATE(270)] = 6290,
  [SMALL_STATE(271)] = 6298,
  [SMALL_STATE(272)] = 6308,
  [SMALL_STATE(273)] = 6316,
  [SMALL_STATE(274)] = 6326,
  [SMALL_STATE(275)] = 6334,
  [SMALL_STATE(276)] = 6342,
  [SMALL_STATE(277)] = 6350,
  [SMALL_STATE(278)] = 6358,
  [SMALL_STATE(279)] = 6368,
  [SMALL_STATE(280)] = 6376,
  [SMALL_STATE(281)] = 6384,
  [SMALL_STATE(282)] = 6394,
  [SMALL_STATE(283)] = 6404,
  [SMALL_STATE(284)] = 6414,
  [SMALL_STATE(285)] = 6422,
  [SMALL_STATE(286)] = 6430,
  [SMALL_STATE(287)] = 6438,
  [SMALL_STATE(288)] = 6448,
  [SMALL_STATE(289)] = 6456,
  [SMALL_STATE(290)] = 6464,
  [SMALL_STATE(291)] = 6472,
  [SMALL_STATE(292)] = 6480,
  [SMALL_STATE(293)] = 6490,
  [SMALL_STATE(294)] = 6498,
  [SMALL_STATE(295)] = 6508,
  [SMALL_STATE(296)] = 6516,
  [SMALL_STATE(297)] = 6526,
  [SMALL_STATE(298)] = 6533,
  [SMALL_STATE(299)] = 6540,
  [SMALL_STATE(300)] = 6547,
  [SMALL_STATE(301)] = 6554,
  [SMALL_STATE(302)] = 6561,
  [SMALL_STATE(303)] = 6568,
  [SMALL_STATE(304)] = 6575,
  [SMALL_STATE(305)] = 6582,
  [SMALL_STATE(306)] = 6589,
  [SMALL_STATE(307)] = 6596,
  [SMALL_STATE(308)] = 6603,
  [SMALL_STATE(309)] = 6610,
  [SMALL_STATE(310)] = 6617,
  [SMALL_STATE(311)] = 6624,
  [SMALL_STATE(312)] = 6631,
  [SMALL_STATE(313)] = 6638,
  [SMALL_STATE(314)] = 6645,
  [SMALL_STATE(315)] = 6652,
  [SMALL_STATE(316)] = 6659,
  [SMALL_STATE(317)] = 6666,
  [SMALL_STATE(318)] = 6673,
  [SMALL_STATE(319)] = 6680,
  [SMALL_STATE(320)] = 6687,
  [SMALL_STATE(321)] = 6694,
  [SMALL_STATE(322)] = 6701,
  [SMALL_STATE(323)] = 6708,
  [SMALL_STATE(324)] = 6715,
  [SMALL_STATE(325)] = 6722,
  [SMALL_STATE(326)] = 6729,
  [SMALL_STATE(327)] = 6736,
  [SMALL_STATE(328)] = 6743,
  [SMALL_STATE(329)] = 6750,
  [SMALL_STATE(330)] = 6757,
  [SMALL_STATE(331)] = 6764,
  [SMALL_STATE(332)] = 6771,
  [SMALL_STATE(333)] = 6778,
  [SMALL_STATE(334)] = 6785,
  [SMALL_STATE(335)] = 6792,
  [SMALL_STATE(336)] = 6799,
  [SMALL_STATE(337)] = 6806,
  [SMALL_STATE(338)] = 6813,
  [SMALL_STATE(339)] = 6820,
  [SMALL_STATE(340)] = 6827,
  [SMALL_STATE(341)] = 6834,
  [SMALL_STATE(342)] = 6841,
  [SMALL_STATE(343)] = 6848,
  [SMALL_STATE(344)] = 6855,
  [SMALL_STATE(345)] = 6862,
  [SMALL_STATE(346)] = 6869,
  [SMALL_STATE(347)] = 6876,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record_field_label, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record_field_label, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_variable, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_variable, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record_access, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record_access, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 5, .production_id = 54),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call_arguments, 5, .production_id = 54),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression2, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression2, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression1, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression1, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record, 5, .production_id = 42),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record, 5, .production_id = 42),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_parens, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_parens, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 3, .production_id = 35),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call_arguments, 3, .production_id = 35),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_variable, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_variable, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(200),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(260),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(261),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call, 2, .production_id = 14),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call, 2, .production_id = 14),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_right_pipe, 3, .production_id = 23),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_right_pipe, 3, .production_id = 23),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_variable_name, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_variable_name, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call_arguments, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 3, .production_id = 22),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_array, 3, .production_id = 22),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_constructor_proper_name, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_constructor_proper_name, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_array, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 4, .production_id = 34),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_array, 4, .production_id = 34),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 5, .production_id = 46),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_array, 5, .production_id = 46),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 4, .production_id = 47),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call_arguments, 4, .production_id = 47),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record, 3, .production_id = 20),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record, 3, .production_id = 20),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 4),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record, 4, .production_id = 31),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record, 4, .production_id = 31),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_constructor, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_constructor, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_constructor, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_constructor, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 8, .production_id = 64),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 8, .production_id = 63),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 9, .production_id = 65),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 5, .production_id = 43),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect, 4),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 7, .production_id = 58),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 7, .production_id = 57),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_if, 6, .production_id = 53),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_match, 5, .production_id = 44),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 6, .production_id = 51),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 6, .production_id = 52),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type1, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor_proper_name, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor, 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(182),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variable, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_closed_record, 4, .production_id = 31),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call_arguments, 5, .production_id = 54),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_closed_record, 3, .production_id = 20),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_parens, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_open_record, 7, .production_id = 62),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_closed_record, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call_arguments, 4, .production_id = 47),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_bind_name, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call, 2, .production_id = 14),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_proper_name, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call_arguments, 3, .production_id = 35),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(341),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_closed_record, 5, .production_id = 42),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_open_record, 6, .production_id = 56),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_open_record, 5, .production_id = 49),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_header, 5, .production_id = 7),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_header, 5, .production_id = 7),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 4, .production_id = 8),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 4, .production_id = 8),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 6, .production_id = 26),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 6, .production_id = 26),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 7, .production_id = 37),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 7, .production_id = 37),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 5, .production_id = 15),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 5, .production_id = 15),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 6, .production_id = 25),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 6, .production_id = 25),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 5, .production_id = 16),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 5, .production_id = 16),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 5, .production_id = 48),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 6, .production_id = 55),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 3, .production_id = 5),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 3, .production_id = 5),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 7, .production_id = 61),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 4, .production_id = 36),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 4, .production_id = 9),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 4, .production_id = 9),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_type, 1),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 8, .production_id = 50),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 8, .production_id = 50),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_variable, 1),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_unused, 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function_parameter, 1, .production_id = 21),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 7, .production_id = 41),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 7, .production_id = 41),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 4, .production_id = 31),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 7, .production_id = 40),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 7, .production_id = 40),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 3, .production_id = 20),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_declaration, 7, .production_id = 38),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_alias_declaration, 7, .production_id = 38),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_value_declaration, 4, .production_id = 12),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreign_value_declaration, 4, .production_id = 12),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_call_arguments_repeat1, 2),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_call_arguments_repeat1, 2), SHIFT_REPEAT(18),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_match_repeat1, 2), SHIFT_REPEAT(103),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_match_repeat1, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_type_declaration, 4, .production_id = 11),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_type_declaration, 4, .production_id = 11),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor, 1, .production_id = 10),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_declaration, 6, .production_id = 27),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_alias_declaration, 6, .production_id = 27),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor, 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 5, .production_id = 42),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_declaration, 4, .production_id = 13),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_declaration, 4, .production_id = 13),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_declaration, 5, .production_id = 24),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_declaration, 5, .production_id = 24),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 5, .production_id = 18),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 5, .production_id = 18),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 6, .production_id = 30),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 6, .production_id = 30),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 6, .production_id = 29),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 6, .production_id = 29),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_type_declaration, 3, .production_id = 6),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_type_declaration, 3, .production_id = 6),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__everything, 3),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exposing_list_repeat1, 2),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exposing_list_repeat1, 2), SHIFT_REPEAT(134),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_constructor_fields_repeat1, 2),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_constructor_fields_repeat1, 2), SHIFT_REPEAT(102),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_name, 1),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_variables_repeat1, 2),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_variables_repeat1, 2), SHIFT_REPEAT(265),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_repeat1, 2),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_repeat1, 2), SHIFT_REPEAT(241),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_type_name, 1),
  [578] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_record_repeat1, 2), SHIFT_REPEAT(253),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_record_repeat1, 2),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_name, 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_function_repeat1, 2),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_function_repeat1, 2), SHIFT_REPEAT(100),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_constructor_fields_repeat1, 2),
  [648] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_constructor_fields_repeat1, 2), SHIFT_REPEAT(42),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_closed_record_repeat1, 2), SHIFT_REPEAT(221),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_closed_record_repeat1, 2),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_value, 1),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variables, 3, .production_id = 17),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_declaration_name, 1),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_type_constructors, 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_type, 2),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variables, 5, .production_id = 39),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_match_arm, 4, .production_id = 59),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_fields, 3, .production_id = 20),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variables, 4, .production_id = 28),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_fields, 5, .production_id = 42),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record_field, 3, .production_id = 32),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_open_record_row_variable, 1),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record_field_label, 1),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier, 2),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor, 2, .production_id = 19),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record_field, 3, .production_id = 32),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function_parameter, 2, .production_id = 33),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import_alias, 1),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_fields, 4, .production_id = 31),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variable, 1),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_expression, 1),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import_package, 3),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_expression, 3, .production_id = 45),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_return, 2),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_everything, 1),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list, 4),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type_annotation, 2),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list, 3),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_bind, 5, .production_id = 60),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list, 5),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [826] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
