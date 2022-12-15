#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 381
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 149
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 42
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 72

enum {
  sym__name = 1,
  anon_sym_module = 2,
  anon_sym_exports = 3,
  anon_sym_SEMI = 4,
  anon_sym_DOT = 5,
  anon_sym_import = 6,
  anon_sym_as = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_COMMA = 10,
  anon_sym_DOT_DOT = 11,
  anon_sym_type = 12,
  anon_sym_EQ = 13,
  anon_sym_PIPE = 14,
  anon_sym_alias = 15,
  anon_sym_foreign = 16,
  anon_sym_DASH_GT = 17,
  anon_sym_LBRACE = 18,
  anon_sym_RBRACE = 19,
  anon_sym_COLON = 20,
  anon_sym_do = 21,
  anon_sym_LT_DASH = 22,
  anon_sym_let = 23,
  anon_sym_return = 24,
  anon_sym_fn = 25,
  anon_sym_if = 26,
  anon_sym_then = 27,
  anon_sym_else = 28,
  anon_sym_in = 29,
  anon_sym_LBRACK = 30,
  anon_sym_RBRACK = 31,
  sym_expression_string = 32,
  sym_expression_int = 33,
  sym_expression_float = 34,
  sym_expression_true = 35,
  sym_expression_false = 36,
  sym_expression_unit = 37,
  anon_sym_match = 38,
  anon_sym_with = 39,
  anon_sym_end = 40,
  anon_sym_PIPE_GT = 41,
  sym__proper_name = 42,
  sym__package_name = 43,
  sym__unused_name = 44,
  sym_comment = 45,
  sym_source_file = 46,
  sym_module_header = 47,
  sym_module_name = 48,
  sym_module_import = 49,
  sym_module_import_package = 50,
  sym_module_import_alias = 51,
  sym__exposing = 52,
  sym_exposing_everything = 53,
  sym_exposing_list = 54,
  sym__exposing_list_item = 55,
  sym_exposing_list_item_type = 56,
  sym_exposing_list_item_type_name = 57,
  sym_exposing_list_item_type_constructors = 58,
  sym__everything = 59,
  sym_exposing_list_item_value = 60,
  sym__module_declaration = 61,
  sym__type_declaration = 62,
  sym_type_declaration = 63,
  sym_type_declaration_empty = 64,
  sym_type_alias_declaration = 65,
  sym_type_declaration_name = 66,
  sym_type_declaration_variables = 67,
  sym_type_declaration_variable = 68,
  sym_type_declaration_constructor = 69,
  sym_type_declaration_constructor_name = 70,
  sym_type_declaration_constructor_fields = 71,
  sym_value_declaration = 72,
  sym_value_declaration_name = 73,
  sym_foreign_value_declaration = 74,
  sym_foreign_value_declaration_name = 75,
  sym__type = 76,
  sym__type1 = 77,
  sym__type_parens = 78,
  sym_type_constructor = 79,
  sym_type_constructor_proper_name = 80,
  sym_type_variable = 81,
  sym_type_call = 82,
  sym_type_call_arguments = 83,
  sym_type_function = 84,
  sym_type_closed_record = 85,
  sym_type_record_field = 86,
  sym_type_record_field_label = 87,
  sym_type_open_record = 88,
  sym_type_open_record_row_variable = 89,
  sym_type_annotation = 90,
  sym_return_type_annotation = 91,
  sym__expression = 92,
  sym__expression4 = 93,
  sym__expression3 = 94,
  sym__expression2 = 95,
  sym__expression1 = 96,
  sym__expression0 = 97,
  sym__expression_parens = 98,
  sym_expression_constructor = 99,
  sym_expression_constructor_proper_name = 100,
  sym_expression_variable = 101,
  sym_expression_variable_name = 102,
  sym_expression_call = 103,
  sym_expression_call_arguments = 104,
  sym_expression_effect = 105,
  sym__expression_effect_statement = 106,
  sym_expression_effect_bind = 107,
  sym_expression_effect_bind_name = 108,
  sym_expression_effect_let = 109,
  sym_expression_effect_let_binder = 110,
  sym_expression_effect_expression = 111,
  sym_expression_effect_return = 112,
  sym_expression_function = 113,
  sym_expression_function_parameter = 114,
  sym_expression_if = 115,
  sym_expression_let = 116,
  sym_expression_let_value_declaration = 117,
  sym_expression_array = 118,
  sym_expression_match = 119,
  sym_expression_match_arm = 120,
  sym_expression_right_pipe = 121,
  sym_expression_record = 122,
  sym_expression_record_field = 123,
  sym_expression_record_field_label = 124,
  sym_expression_record_update = 125,
  sym__expression_record_update_target = 126,
  sym_expression_record_access = 127,
  sym__pattern = 128,
  sym_pattern_constructor = 129,
  sym_pattern_constructor_proper_name = 130,
  sym_pattern_constructor_fields = 131,
  sym_pattern_variable = 132,
  sym_pattern_unused = 133,
  sym_qualifier = 134,
  aux_sym_source_file_repeat1 = 135,
  aux_sym_source_file_repeat2 = 136,
  aux_sym_module_name_repeat1 = 137,
  aux_sym_exposing_list_repeat1 = 138,
  aux_sym_type_declaration_repeat1 = 139,
  aux_sym_type_declaration_variables_repeat1 = 140,
  aux_sym_type_declaration_constructor_fields_repeat1 = 141,
  aux_sym_type_closed_record_repeat1 = 142,
  aux_sym_expression_call_arguments_repeat1 = 143,
  aux_sym_expression_function_repeat1 = 144,
  aux_sym_expression_let_repeat1 = 145,
  aux_sym_expression_match_repeat1 = 146,
  aux_sym_expression_record_repeat1 = 147,
  aux_sym_pattern_constructor_fields_repeat1 = 148,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__name] = "_name",
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
  [anon_sym_alias] = "alias",
  [anon_sym_foreign] = "foreign",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_do] = "do",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_let] = "let",
  [anon_sym_return] = "return",
  [anon_sym_fn] = "fn",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_in] = "in",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_expression_string] = "expression_string",
  [sym_expression_int] = "expression_int",
  [sym_expression_float] = "expression_float",
  [sym_expression_true] = "expression_true",
  [sym_expression_false] = "expression_false",
  [sym_expression_unit] = "expression_unit",
  [anon_sym_match] = "match",
  [anon_sym_with] = "with",
  [anon_sym_end] = "end",
  [anon_sym_PIPE_GT] = "|>",
  [sym__proper_name] = "_proper_name",
  [sym__package_name] = "_package_name",
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
  [sym_exposing_list_item_type] = "exposing_list_item_type",
  [sym_exposing_list_item_type_name] = "exposing_list_item_type_name",
  [sym_exposing_list_item_type_constructors] = "exposing_list_item_type_constructors",
  [sym__everything] = "_everything",
  [sym_exposing_list_item_value] = "exposing_list_item_value",
  [sym__module_declaration] = "_module_declaration",
  [sym__type_declaration] = "_type_declaration",
  [sym_type_declaration] = "type_declaration",
  [sym_type_declaration_empty] = "type_declaration_empty",
  [sym_type_alias_declaration] = "type_alias_declaration",
  [sym_type_declaration_name] = "type_declaration_name",
  [sym_type_declaration_variables] = "type_declaration_variables",
  [sym_type_declaration_variable] = "type_declaration_variable",
  [sym_type_declaration_constructor] = "type_declaration_constructor",
  [sym_type_declaration_constructor_name] = "type_declaration_constructor_name",
  [sym_type_declaration_constructor_fields] = "type_declaration_constructor_fields",
  [sym_value_declaration] = "value_declaration",
  [sym_value_declaration_name] = "value_declaration_name",
  [sym_foreign_value_declaration] = "foreign_value_declaration",
  [sym_foreign_value_declaration_name] = "foreign_value_declaration_name",
  [sym__type] = "_type",
  [sym__type1] = "_type1",
  [sym__type_parens] = "_type_parens",
  [sym_type_constructor] = "type_constructor",
  [sym_type_constructor_proper_name] = "type_constructor_proper_name",
  [sym_type_variable] = "type_variable",
  [sym_type_call] = "type_call",
  [sym_type_call_arguments] = "type_call_arguments",
  [sym_type_function] = "type_function",
  [sym_type_closed_record] = "type_closed_record",
  [sym_type_record_field] = "type_record_field",
  [sym_type_record_field_label] = "type_record_field_label",
  [sym_type_open_record] = "type_open_record",
  [sym_type_open_record_row_variable] = "type_open_record_row_variable",
  [sym_type_annotation] = "type_annotation",
  [sym_return_type_annotation] = "return_type_annotation",
  [sym__expression] = "_expression",
  [sym__expression4] = "_expression4",
  [sym__expression3] = "_expression3",
  [sym__expression2] = "_expression2",
  [sym__expression1] = "_expression1",
  [sym__expression0] = "_expression0",
  [sym__expression_parens] = "_expression_parens",
  [sym_expression_constructor] = "expression_constructor",
  [sym_expression_constructor_proper_name] = "expression_constructor_proper_name",
  [sym_expression_variable] = "expression_variable",
  [sym_expression_variable_name] = "expression_variable_name",
  [sym_expression_call] = "expression_call",
  [sym_expression_call_arguments] = "expression_call_arguments",
  [sym_expression_effect] = "expression_effect",
  [sym__expression_effect_statement] = "_expression_effect_statement",
  [sym_expression_effect_bind] = "expression_effect_bind",
  [sym_expression_effect_bind_name] = "expression_effect_bind_name",
  [sym_expression_effect_let] = "expression_effect_let",
  [sym_expression_effect_let_binder] = "expression_effect_let_binder",
  [sym_expression_effect_expression] = "expression_effect_expression",
  [sym_expression_effect_return] = "expression_effect_return",
  [sym_expression_function] = "expression_function",
  [sym_expression_function_parameter] = "expression_function_parameter",
  [sym_expression_if] = "expression_if",
  [sym_expression_let] = "expression_let",
  [sym_expression_let_value_declaration] = "expression_let_value_declaration",
  [sym_expression_array] = "expression_array",
  [sym_expression_match] = "expression_match",
  [sym_expression_match_arm] = "expression_match_arm",
  [sym_expression_right_pipe] = "expression_right_pipe",
  [sym_expression_record] = "expression_record",
  [sym_expression_record_field] = "expression_record_field",
  [sym_expression_record_field_label] = "expression_record_field_label",
  [sym_expression_record_update] = "expression_record_update",
  [sym__expression_record_update_target] = "_expression_record_update_target",
  [sym_expression_record_access] = "expression_record_access",
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
  [aux_sym_expression_call_arguments_repeat1] = "expression_call_arguments_repeat1",
  [aux_sym_expression_function_repeat1] = "expression_function_repeat1",
  [aux_sym_expression_let_repeat1] = "expression_let_repeat1",
  [aux_sym_expression_match_repeat1] = "expression_match_repeat1",
  [aux_sym_expression_record_repeat1] = "expression_record_repeat1",
  [aux_sym_pattern_constructor_fields_repeat1] = "pattern_constructor_fields_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__name] = sym__name,
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
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_foreign] = anon_sym_foreign,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_expression_string] = sym_expression_string,
  [sym_expression_int] = sym_expression_int,
  [sym_expression_float] = sym_expression_float,
  [sym_expression_true] = sym_expression_true,
  [sym_expression_false] = sym_expression_false,
  [sym_expression_unit] = sym_expression_unit,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_PIPE_GT] = anon_sym_PIPE_GT,
  [sym__proper_name] = sym__proper_name,
  [sym__package_name] = sym__package_name,
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
  [sym_exposing_list_item_type] = sym_exposing_list_item_type,
  [sym_exposing_list_item_type_name] = sym_exposing_list_item_type_name,
  [sym_exposing_list_item_type_constructors] = sym_exposing_list_item_type_constructors,
  [sym__everything] = sym__everything,
  [sym_exposing_list_item_value] = sym_exposing_list_item_value,
  [sym__module_declaration] = sym__module_declaration,
  [sym__type_declaration] = sym__type_declaration,
  [sym_type_declaration] = sym_type_declaration,
  [sym_type_declaration_empty] = sym_type_declaration_empty,
  [sym_type_alias_declaration] = sym_type_alias_declaration,
  [sym_type_declaration_name] = sym_type_declaration_name,
  [sym_type_declaration_variables] = sym_type_declaration_variables,
  [sym_type_declaration_variable] = sym_type_declaration_variable,
  [sym_type_declaration_constructor] = sym_type_declaration_constructor,
  [sym_type_declaration_constructor_name] = sym_type_declaration_constructor_name,
  [sym_type_declaration_constructor_fields] = sym_type_declaration_constructor_fields,
  [sym_value_declaration] = sym_value_declaration,
  [sym_value_declaration_name] = sym_value_declaration_name,
  [sym_foreign_value_declaration] = sym_foreign_value_declaration,
  [sym_foreign_value_declaration_name] = sym_foreign_value_declaration_name,
  [sym__type] = sym__type,
  [sym__type1] = sym__type1,
  [sym__type_parens] = sym__type_parens,
  [sym_type_constructor] = sym_type_constructor,
  [sym_type_constructor_proper_name] = sym_type_constructor_proper_name,
  [sym_type_variable] = sym_type_variable,
  [sym_type_call] = sym_type_call,
  [sym_type_call_arguments] = sym_type_call_arguments,
  [sym_type_function] = sym_type_function,
  [sym_type_closed_record] = sym_type_closed_record,
  [sym_type_record_field] = sym_type_record_field,
  [sym_type_record_field_label] = sym_type_record_field_label,
  [sym_type_open_record] = sym_type_open_record,
  [sym_type_open_record_row_variable] = sym_type_open_record_row_variable,
  [sym_type_annotation] = sym_type_annotation,
  [sym_return_type_annotation] = sym_return_type_annotation,
  [sym__expression] = sym__expression,
  [sym__expression4] = sym__expression4,
  [sym__expression3] = sym__expression3,
  [sym__expression2] = sym__expression2,
  [sym__expression1] = sym__expression1,
  [sym__expression0] = sym__expression0,
  [sym__expression_parens] = sym__expression_parens,
  [sym_expression_constructor] = sym_expression_constructor,
  [sym_expression_constructor_proper_name] = sym_expression_constructor_proper_name,
  [sym_expression_variable] = sym_expression_variable,
  [sym_expression_variable_name] = sym_expression_variable_name,
  [sym_expression_call] = sym_expression_call,
  [sym_expression_call_arguments] = sym_expression_call_arguments,
  [sym_expression_effect] = sym_expression_effect,
  [sym__expression_effect_statement] = sym__expression_effect_statement,
  [sym_expression_effect_bind] = sym_expression_effect_bind,
  [sym_expression_effect_bind_name] = sym_expression_effect_bind_name,
  [sym_expression_effect_let] = sym_expression_effect_let,
  [sym_expression_effect_let_binder] = sym_expression_effect_let_binder,
  [sym_expression_effect_expression] = sym_expression_effect_expression,
  [sym_expression_effect_return] = sym_expression_effect_return,
  [sym_expression_function] = sym_expression_function,
  [sym_expression_function_parameter] = sym_expression_function_parameter,
  [sym_expression_if] = sym_expression_if,
  [sym_expression_let] = sym_expression_let,
  [sym_expression_let_value_declaration] = sym_expression_let_value_declaration,
  [sym_expression_array] = sym_expression_array,
  [sym_expression_match] = sym_expression_match,
  [sym_expression_match_arm] = sym_expression_match_arm,
  [sym_expression_right_pipe] = sym_expression_right_pipe,
  [sym_expression_record] = sym_expression_record,
  [sym_expression_record_field] = sym_expression_record_field,
  [sym_expression_record_field_label] = sym_expression_record_field_label,
  [sym_expression_record_update] = sym_expression_record_update,
  [sym__expression_record_update_target] = sym__expression_record_update_target,
  [sym_expression_record_access] = sym_expression_record_access,
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
  [aux_sym_expression_call_arguments_repeat1] = aux_sym_expression_call_arguments_repeat1,
  [aux_sym_expression_function_repeat1] = aux_sym_expression_function_repeat1,
  [aux_sym_expression_let_repeat1] = aux_sym_expression_let_repeat1,
  [aux_sym_expression_match_repeat1] = aux_sym_expression_match_repeat1,
  [aux_sym_expression_record_repeat1] = aux_sym_expression_record_repeat1,
  [aux_sym_pattern_constructor_fields_repeat1] = aux_sym_pattern_constructor_fields_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__name] = {
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
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foreign] = {
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
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
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
  [anon_sym_in] = {
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
  [anon_sym_PIPE_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__proper_name] = {
    .visible = false,
    .named = true,
  },
  [sym__package_name] = {
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
  [sym_exposing_list_item_type] = {
    .visible = true,
    .named = true,
  },
  [sym_exposing_list_item_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym_exposing_list_item_type_constructors] = {
    .visible = true,
    .named = true,
  },
  [sym__everything] = {
    .visible = false,
    .named = true,
  },
  [sym_exposing_list_item_value] = {
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
  [sym_type_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declaration_empty] = {
    .visible = true,
    .named = true,
  },
  [sym_type_alias_declaration] = {
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
  [sym_value_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_value_declaration_name] = {
    .visible = true,
    .named = true,
  },
  [sym_foreign_value_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_foreign_value_declaration_name] = {
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
  [sym__type_parens] = {
    .visible = false,
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
  [sym_type_call] = {
    .visible = true,
    .named = true,
  },
  [sym_type_call_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_type_function] = {
    .visible = true,
    .named = true,
  },
  [sym_type_closed_record] = {
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
  [sym_type_open_record] = {
    .visible = true,
    .named = true,
  },
  [sym_type_open_record_row_variable] = {
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
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__expression4] = {
    .visible = false,
    .named = true,
  },
  [sym__expression3] = {
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
  [sym__expression_parens] = {
    .visible = false,
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
  [sym_expression_call] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_call_arguments] = {
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
  [sym_expression_effect_bind_name] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_effect_let] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_effect_let_binder] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_effect_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_effect_return] = {
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
  [sym_expression_let] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_let_value_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_array] = {
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
  [sym_expression_right_pipe] = {
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
  [sym_expression_record_update] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_record_update_target] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_record_access] = {
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
  [aux_sym_expression_call_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_function_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_let_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_match_repeat1] = {
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
  field_binder = 8,
  field_body = 9,
  field_condition = 10,
  field_constructor = 11,
  field_declaration = 12,
  field_element = 13,
  field_exports = 14,
  field_expression = 15,
  field_false_clause = 16,
  field_field = 17,
  field_fields = 18,
  field_function = 19,
  field_header = 20,
  field_import = 21,
  field_imports = 22,
  field_label = 23,
  field_let_binder = 24,
  field_let_expression = 25,
  field_lhs = 26,
  field_match_arm_expression = 27,
  field_match_arm_pattern = 28,
  field_module_name = 29,
  field_name = 30,
  field_package = 31,
  field_parameter = 32,
  field_pattern = 33,
  field_rest = 34,
  field_return_type = 35,
  field_rhs = 36,
  field_target = 37,
  field_true_clause = 38,
  field_type_annotation = 39,
  field_value = 40,
  field_variable = 41,
  field_variables = 42,
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
  [field_binder] = "binder",
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
  [field_let_binder] = "let_binder",
  [field_let_expression] = "let_expression",
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
  [field_target] = "target",
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
  [43] = {.index = 94, .length = 2},
  [44] = {.index = 96, .length = 1},
  [45] = {.index = 97, .length = 2},
  [46] = {.index = 99, .length = 1},
  [47] = {.index = 100, .length = 3},
  [48] = {.index = 103, .length = 2},
  [49] = {.index = 105, .length = 2},
  [50] = {.index = 107, .length = 2},
  [51] = {.index = 109, .length = 1},
  [52] = {.index = 110, .length = 5},
  [53] = {.index = 115, .length = 3},
  [54] = {.index = 118, .length = 3},
  [55] = {.index = 121, .length = 2},
  [56] = {.index = 123, .length = 2},
  [57] = {.index = 125, .length = 3},
  [58] = {.index = 128, .length = 3},
  [59] = {.index = 131, .length = 3},
  [60] = {.index = 134, .length = 2},
  [61] = {.index = 136, .length = 4},
  [62] = {.index = 140, .length = 3},
  [63] = {.index = 143, .length = 3},
  [64] = {.index = 146, .length = 3},
  [65] = {.index = 149, .length = 2},
  [66] = {.index = 151, .length = 4},
  [67] = {.index = 155, .length = 3},
  [68] = {.index = 158, .length = 3},
  [69] = {.index = 161, .length = 4},
  [70] = {.index = 165, .length = 4},
  [71] = {.index = 169, .length = 5},
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
    {field_field, 3},
    {field_target, 1},
  [96] =
    {field_rest, 2},
  [97] =
    {field_binder, 0},
    {field_expression, 2},
  [99] =
    {field_body, 4},
  [100] =
    {field_element, 1},
    {field_element, 2},
    {field_element, 3},
  [103] =
    {field_arm, 3},
    {field_expression, 1},
  [105] =
    {field_argument, 1},
    {field_argument, 2},
  [107] =
    {field_parameter, 1},
    {field_return_type, 4},
  [109] =
    {field_field, 3},
  [110] =
    {field_constructor, 4},
    {field_constructor, 5},
    {field_constructor, 6},
    {field_name, 1},
    {field_variables, 2},
  [115] =
    {field_field, 3},
    {field_field, 4},
    {field_target, 1},
  [118] =
    {field_binder, 0},
    {field_expression, 3},
    {field_type_annotation, 1},
  [121] =
    {field_body, 5},
    {field_return_type, 3},
  [123] =
    {field_body, 5},
    {field_parameter, 2},
  [125] =
    {field_condition, 1},
    {field_false_clause, 5},
    {field_true_clause, 3},
  [128] =
    {field_argument, 1},
    {field_argument, 2},
    {field_argument, 3},
  [131] =
    {field_parameter, 1},
    {field_parameter, 2},
    {field_return_type, 5},
  [134] =
    {field_field, 3},
    {field_field, 4},
  [136] =
    {field_field, 3},
    {field_field, 4},
    {field_field, 5},
    {field_target, 1},
  [140] =
    {field_bind_expression, 2},
    {field_bind_name, 0},
    {field_rest, 4},
  [143] =
    {field_body, 6},
    {field_parameter, 2},
    {field_return_type, 4},
  [146] =
    {field_body, 6},
    {field_parameter, 2},
    {field_parameter, 3},
  [149] =
    {field_match_arm_expression, 3},
    {field_match_arm_pattern, 1},
  [151] =
    {field_parameter, 1},
    {field_parameter, 2},
    {field_parameter, 3},
    {field_return_type, 6},
  [155] =
    {field_field, 3},
    {field_field, 4},
    {field_field, 5},
  [158] =
    {field_let_binder, 1},
    {field_let_expression, 3},
    {field_rest, 5},
  [161] =
    {field_body, 7},
    {field_parameter, 2},
    {field_parameter, 3},
    {field_return_type, 5},
  [165] =
    {field_body, 7},
    {field_parameter, 2},
    {field_parameter, 3},
    {field_parameter, 4},
  [169] =
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

static inline bool sym__proper_name_character_set_2(int32_t c) {
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

static inline bool sym__package_name_character_set_1(int32_t c) {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == ')') ADVANCE(15);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == ';') ADVANCE(11);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == ']') ADVANCE(26);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '|') ADVANCE(19);
      if (lookahead == '}') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(0)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(31);
      if (sym__name_character_set_1(lookahead)) ADVANCE(33);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(27);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == ')') ADVANCE(15);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == ';') ADVANCE(11);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == ']') ADVANCE(26);
      if (lookahead == '|') ADVANCE(19);
      if (lookahead == '}') ADVANCE(22);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(2)
      if (sym__name_character_set_2(lookahead)) ADVANCE(33);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(35);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '>') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(8);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(6)
      if (sym__proper_name_character_set_1(lookahead)) ADVANCE(31);
      if (sym__name_character_set_1(lookahead)) ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(3);
      if (anon_sym_LPAREN_character_set_1(lookahead)) SKIP(7)
      if (sym__name_character_set_2(lookahead)) ADVANCE(32);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(17);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(17);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '>') ADVANCE(30);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_expression_string);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_expression_int);
      if (lookahead == '.') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_expression_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_PIPE_GT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__proper_name);
      if (sym__proper_name_character_set_2(lookahead)) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__package_name);
      if (sym__package_name_character_set_1(lookahead)) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__name);
      if (sym__proper_name_character_set_2(lookahead)) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__unused_name);
      if (sym__proper_name_character_set_2(lookahead)) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(2);
      if (lookahead == 'e') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead == 'm') ADVANCE(7);
      if (lookahead == 'r') ADVANCE(8);
      if (lookahead == 't') ADVANCE(9);
      if (lookahead == 'u') ADVANCE(10);
      if (lookahead == 'w') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == 'l') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == 'x') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'm') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == 'h') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 'y') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == 'p') ADVANCE(36);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 48:
      if (lookahead == 'h') ADVANCE(62);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 55:
      if (lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_expression_true);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_expression_unit);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_expression_false);
      END_STATE();
    case 66:
      if (lookahead == 'g') ADVANCE(72);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_exports);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_foreign);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
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
  [198] = {.lex_state = 2},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
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
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 6},
  [369] = {.lex_state = 7},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__name] = ACTIONS(1),
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
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_foreign] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_expression_string] = ACTIONS(1),
    [sym_expression_int] = ACTIONS(1),
    [sym_expression_float] = ACTIONS(1),
    [sym_expression_true] = ACTIONS(1),
    [sym_expression_false] = ACTIONS(1),
    [sym_expression_unit] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_PIPE_GT] = ACTIONS(1),
    [sym__proper_name] = ACTIONS(1),
    [sym__unused_name] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(380),
    [sym_module_header] = STATE(43),
    [anon_sym_module] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__name,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    STATE(349), 1,
      sym_expression_effect_bind_name,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(68), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(98), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(301), 5,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
    STATE(376), 5,
      sym__expression_effect_statement,
      sym_expression_effect_bind,
      sym_expression_effect_let,
      sym_expression_effect_expression,
      sym_expression_effect_return,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
  [91] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__name,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    STATE(349), 1,
      sym_expression_effect_bind_name,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(68), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(98), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(301), 5,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
    STATE(364), 5,
      sym__expression_effect_statement,
      sym_expression_effect_bind,
      sym_expression_effect_let,
      sym_expression_effect_expression,
      sym_expression_effect_return,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
  [182] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__name,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    STATE(349), 1,
      sym_expression_effect_bind_name,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(68), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(98), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(301), 5,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
    STATE(359), 5,
      sym__expression_effect_statement,
      sym_expression_effect_bind,
      sym_expression_effect_let,
      sym_expression_effect_expression,
      sym_expression_effect_return,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
  [273] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__name,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    STATE(349), 1,
      sym_expression_effect_bind_name,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(68), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(98), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(301), 5,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_match,
    STATE(334), 5,
      sym__expression_effect_statement,
      sym_expression_effect_bind,
      sym_expression_effect_let,
      sym_expression_effect_expression,
      sym_expression_effect_return,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
  [364] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(68), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(98), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(258), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [448] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(39), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(68), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(98), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(269), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [532] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(41), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(68), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(98), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(258), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [616] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(68), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(98), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(258), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [700] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(68), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(98), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(215), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [784] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(68), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(98), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(258), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [868] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(68), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(98), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(101), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [949] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(68), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(98), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(258), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [1030] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(68), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(98), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(99), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [1111] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(68), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(98), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(114), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [1192] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(68), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(98), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(365), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [1273] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(68), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(98), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(348), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [1354] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(68), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(98), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(344), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [1435] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(68), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(98), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(371), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [1516] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(68), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(98), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(328), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [1597] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(68), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(98), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(104), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [1678] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(68), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(98), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(333), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [1759] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(68), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(98), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(323), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [1840] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(68), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(98), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(110), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [1921] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(68), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(98), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(108), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [2002] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(68), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(98), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(336), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [2083] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(68), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(98), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(111), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [2164] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(68), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(98), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(103), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [2245] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(68), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(98), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(354), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [2326] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(68), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(98), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(112), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [2407] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(68), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(98), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(106), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [2488] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(68), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(98), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(374), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [2569] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(68), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(98), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(338), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [2650] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(68), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(98), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(280), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [2731] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_do,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_match,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    ACTIONS(37), 1,
      anon_sym_let,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(68), 2,
      sym__expression1,
      sym_expression_constructor,
    STATE(98), 2,
      sym__expression2,
      sym_expression_right_pipe,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
    STATE(310), 8,
      sym__expression,
      sym__expression4,
      sym__expression3,
      sym_expression_effect,
      sym_expression_function,
      sym_expression_if,
      sym_expression_let,
      sym_expression_match,
  [2812] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(49), 1,
      sym__name,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    STATE(265), 1,
      sym_expression_record_field,
    STATE(337), 1,
      sym_expression_record_field_label,
    STATE(340), 1,
      sym__expression_record_update_target,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(259), 2,
      sym__expression1,
      sym_expression_constructor,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
  [2876] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym__proper_name,
    ACTIONS(33), 1,
      sym__name,
    STATE(71), 1,
      sym_expression_variable_name,
    STATE(89), 1,
      sym_expression_constructor_proper_name,
    STATE(189), 1,
      sym_qualifier,
    ACTIONS(25), 2,
      sym_expression_string,
      sym_expression_float,
    STATE(61), 2,
      sym__expression1,
      sym_expression_constructor,
    ACTIONS(27), 4,
      sym_expression_int,
      sym_expression_true,
      sym_expression_false,
      sym_expression_unit,
    STATE(69), 8,
      sym__expression0,
      sym__expression_parens,
      sym_expression_variable,
      sym_expression_call,
      sym_expression_array,
      sym_expression_record,
      sym_expression_record_update,
      sym_expression_record_access,
  [2928] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      sym__proper_name,
    STATE(124), 1,
      sym_type_constructor_proper_name,
    STATE(308), 1,
      sym_qualifier,
    STATE(119), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(290), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [2966] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      sym__proper_name,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      sym_type_constructor_proper_name,
    STATE(308), 1,
      sym_qualifier,
    STATE(119), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(290), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [3004] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      sym__proper_name,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      sym_type_constructor_proper_name,
    STATE(308), 1,
      sym_qualifier,
    STATE(119), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(290), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [3042] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      sym__name,
    ACTIONS(71), 1,
      anon_sym_import,
    ACTIONS(73), 1,
      anon_sym_type,
    ACTIONS(75), 1,
      anon_sym_foreign,
    STATE(240), 1,
      sym_value_declaration_name,
    STATE(130), 2,
      sym_module_import,
      aux_sym_source_file_repeat1,
    STATE(74), 8,
      sym__module_declaration,
      sym__type_declaration,
      sym_type_declaration,
      sym_type_declaration_empty,
      sym_type_alias_declaration,
      sym_value_declaration,
      sym_foreign_value_declaration,
      aux_sym_source_file_repeat2,
  [3078] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      sym__proper_name,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      sym_type_constructor_proper_name,
    STATE(308), 1,
      sym_qualifier,
    STATE(119), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(290), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [3116] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__name,
    ACTIONS(71), 1,
      anon_sym_import,
    ACTIONS(73), 1,
      anon_sym_type,
    ACTIONS(75), 1,
      anon_sym_foreign,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    STATE(240), 1,
      sym_value_declaration_name,
    STATE(41), 2,
      sym_module_import,
      aux_sym_source_file_repeat1,
    STATE(81), 8,
      sym__module_declaration,
      sym__type_declaration,
      sym_type_declaration,
      sym_type_declaration_empty,
      sym_type_alias_declaration,
      sym_value_declaration,
      sym_foreign_value_declaration,
      aux_sym_source_file_repeat2,
  [3152] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      sym__proper_name,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      sym_type_constructor_proper_name,
    STATE(308), 1,
      sym_qualifier,
    STATE(119), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(260), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [3190] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      sym__proper_name,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      sym_type_constructor_proper_name,
    STATE(308), 1,
      sym_qualifier,
    STATE(119), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(290), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [3228] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      sym__proper_name,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      sym_type_constructor_proper_name,
    STATE(308), 1,
      sym_qualifier,
    STATE(119), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(290), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [3266] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      sym__proper_name,
    STATE(124), 1,
      sym_type_constructor_proper_name,
    STATE(308), 1,
      sym_qualifier,
    STATE(119), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(154), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [3301] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      sym__proper_name,
    STATE(124), 1,
      sym_type_constructor_proper_name,
    STATE(308), 1,
      sym_qualifier,
    STATE(119), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(171), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [3336] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      sym__proper_name,
    STATE(124), 1,
      sym_type_constructor_proper_name,
    STATE(308), 1,
      sym_qualifier,
    STATE(119), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(281), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [3371] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      sym__proper_name,
    STATE(124), 1,
      sym_type_constructor_proper_name,
    STATE(308), 1,
      sym_qualifier,
    STATE(119), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(378), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [3406] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      sym__proper_name,
    STATE(124), 1,
      sym_type_constructor_proper_name,
    STATE(308), 1,
      sym_qualifier,
    STATE(119), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(377), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [3441] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      sym__proper_name,
    STATE(124), 1,
      sym_type_constructor_proper_name,
    STATE(308), 1,
      sym_qualifier,
    STATE(119), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(172), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [3476] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      sym__proper_name,
    STATE(124), 1,
      sym_type_constructor_proper_name,
    STATE(308), 1,
      sym_qualifier,
    STATE(119), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(278), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [3511] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      sym__proper_name,
    STATE(124), 1,
      sym_type_constructor_proper_name,
    STATE(308), 1,
      sym_qualifier,
    STATE(119), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(229), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [3546] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      sym__proper_name,
    STATE(124), 1,
      sym_type_constructor_proper_name,
    STATE(308), 1,
      sym_qualifier,
    STATE(119), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(190), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [3581] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      sym__proper_name,
    STATE(124), 1,
      sym_type_constructor_proper_name,
    STATE(308), 1,
      sym_qualifier,
    STATE(119), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(345), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [3616] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      sym__proper_name,
    STATE(124), 1,
      sym_type_constructor_proper_name,
    STATE(308), 1,
      sym_qualifier,
    STATE(119), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(290), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [3651] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      sym__proper_name,
    STATE(124), 1,
      sym_type_constructor_proper_name,
    STATE(308), 1,
      sym_qualifier,
    STATE(119), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(170), 7,
      sym__type,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_function,
      sym_type_closed_record,
      sym_type_open_record,
  [3686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_PIPE,
    ACTIONS(87), 13,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
      anon_sym_PIPE_GT,
  [3708] = 3,
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
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
      anon_sym_PIPE_GT,
  [3729] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_PIPE,
    STATE(84), 1,
      sym_expression_call_arguments,
    ACTIONS(95), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
      anon_sym_PIPE_GT,
  [3754] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym__name,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      sym__proper_name,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    STATE(124), 1,
      sym_type_constructor_proper_name,
    STATE(308), 1,
      sym_qualifier,
    STATE(119), 2,
      sym_type_constructor,
      sym_type_variable,
    STATE(331), 5,
      sym__type1,
      sym__type_parens,
      sym_type_call,
      sym_type_closed_record,
      sym_type_open_record,
  [3787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_PIPE,
    ACTIONS(103), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
      anon_sym_PIPE_GT,
  [3808] = 3,
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
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
      anon_sym_PIPE_GT,
  [3829] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      anon_sym_PIPE,
    ACTIONS(111), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
      anon_sym_PIPE_GT,
  [3852] = 3,
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
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
      anon_sym_PIPE_GT,
  [3873] = 3,
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
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
      anon_sym_PIPE_GT,
  [3894] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_PIPE,
    STATE(84), 1,
      sym_expression_call_arguments,
    ACTIONS(125), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
      anon_sym_PIPE_GT,
  [3919] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_DOT,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(129), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
      anon_sym_PIPE_GT,
  [3942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_PIPE,
    ACTIONS(135), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
      anon_sym_PIPE_GT,
  [3963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    ACTIONS(139), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
      anon_sym_PIPE_GT,
  [3984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_PIPE,
    ACTIONS(143), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
      anon_sym_PIPE_GT,
  [4005] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    ACTIONS(147), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
      anon_sym_PIPE_GT,
  [4026] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__name,
    ACTIONS(73), 1,
      anon_sym_type,
    ACTIONS(75), 1,
      anon_sym_foreign,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    STATE(240), 1,
      sym_value_declaration_name,
    STATE(86), 8,
      sym__module_declaration,
      sym__type_declaration,
      sym_type_declaration,
      sym_type_declaration_empty,
      sym_type_alias_declaration,
      sym_value_declaration,
      sym_foreign_value_declaration,
      aux_sym_source_file_repeat2,
  [4055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_PIPE,
    ACTIONS(153), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
      anon_sym_PIPE_GT,
  [4076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    ACTIONS(157), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
      anon_sym_PIPE_GT,
  [4097] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_PIPE,
    ACTIONS(161), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
      anon_sym_PIPE_GT,
  [4118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_PIPE,
    ACTIONS(165), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
      anon_sym_PIPE_GT,
  [4139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_PIPE,
    ACTIONS(169), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
      anon_sym_PIPE_GT,
  [4160] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_PIPE,
    ACTIONS(173), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
      anon_sym_PIPE_GT,
  [4181] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__name,
    ACTIONS(73), 1,
      anon_sym_type,
    ACTIONS(75), 1,
      anon_sym_foreign,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    STATE(240), 1,
      sym_value_declaration_name,
    STATE(86), 8,
      sym__module_declaration,
      sym__type_declaration,
      sym_type_declaration,
      sym_type_declaration_empty,
      sym_type_alias_declaration,
      sym_value_declaration,
      sym_foreign_value_declaration,
      aux_sym_source_file_repeat2,
  [4210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_PIPE,
    ACTIONS(179), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
      anon_sym_PIPE_GT,
  [4231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_PIPE,
    ACTIONS(183), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
      anon_sym_PIPE_GT,
  [4252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_PIPE,
    ACTIONS(187), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
      anon_sym_PIPE_GT,
  [4273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(191), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
      anon_sym_PIPE_GT,
  [4294] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(197), 1,
      sym__name,
    ACTIONS(200), 1,
      anon_sym_type,
    ACTIONS(203), 1,
      anon_sym_foreign,
    STATE(240), 1,
      sym_value_declaration_name,
    STATE(86), 8,
      sym__module_declaration,
      sym__type_declaration,
      sym_type_declaration,
      sym_type_declaration_empty,
      sym_type_alias_declaration,
      sym_value_declaration,
      sym_foreign_value_declaration,
      aux_sym_source_file_repeat2,
  [4323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_PIPE,
    ACTIONS(206), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
      anon_sym_PIPE_GT,
  [4344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_PIPE,
    ACTIONS(210), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
      anon_sym_PIPE_GT,
  [4365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_PIPE,
    ACTIONS(214), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
      anon_sym_PIPE_GT,
  [4385] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      sym__name,
    ACTIONS(221), 1,
      anon_sym_in,
    ACTIONS(223), 1,
      sym__proper_name,
    ACTIONS(226), 1,
      sym__unused_name,
    STATE(126), 1,
      sym_pattern_constructor_proper_name,
    STATE(287), 1,
      sym_qualifier,
    STATE(90), 2,
      sym_expression_let_value_declaration,
      aux_sym_expression_let_repeat1,
    STATE(275), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [4417] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym__name,
    ACTIONS(231), 1,
      anon_sym_in,
    ACTIONS(233), 1,
      sym__proper_name,
    ACTIONS(235), 1,
      sym__unused_name,
    STATE(126), 1,
      sym_pattern_constructor_proper_name,
    STATE(287), 1,
      sym_qualifier,
    STATE(90), 2,
      sym_expression_let_value_declaration,
      aux_sym_expression_let_repeat1,
    STATE(275), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [4449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_PIPE,
    ACTIONS(111), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
      anon_sym_PIPE_GT,
  [4469] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_PIPE,
    ACTIONS(237), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
      anon_sym_PIPE_GT,
  [4489] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym__proper_name,
    ACTIONS(235), 1,
      sym__unused_name,
    ACTIONS(241), 1,
      sym__name,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      sym_pattern_constructor_proper_name,
    STATE(287), 1,
      sym_qualifier,
    STATE(307), 1,
      sym_expression_function_parameter,
    STATE(188), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [4520] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym__proper_name,
    ACTIONS(235), 1,
      sym__unused_name,
    ACTIONS(241), 1,
      sym__name,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      sym_pattern_constructor_proper_name,
    STATE(276), 1,
      sym_expression_function_parameter,
    STATE(287), 1,
      sym_qualifier,
    STATE(188), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [4551] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym__proper_name,
    ACTIONS(235), 1,
      sym__unused_name,
    ACTIONS(241), 1,
      sym__name,
    STATE(126), 1,
      sym_pattern_constructor_proper_name,
    STATE(287), 1,
      sym_qualifier,
    STATE(91), 2,
      sym_expression_let_value_declaration,
      aux_sym_expression_let_repeat1,
    STATE(275), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [4580] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym__proper_name,
    ACTIONS(235), 1,
      sym__unused_name,
    ACTIONS(241), 1,
      sym__name,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      sym_pattern_constructor_proper_name,
    STATE(287), 1,
      sym_qualifier,
    STATE(307), 1,
      sym_expression_function_parameter,
    STATE(188), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [4611] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_PIPE,
    ACTIONS(253), 1,
      anon_sym_PIPE_GT,
    ACTIONS(249), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
  [4632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
  [4648] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym__proper_name,
    ACTIONS(235), 1,
      sym__unused_name,
    ACTIONS(241), 1,
      sym__name,
    STATE(126), 1,
      sym_pattern_constructor_proper_name,
    STATE(287), 1,
      sym_qualifier,
    STATE(375), 1,
      sym_expression_effect_let_binder,
    STATE(238), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [4676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
  [4692] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym__proper_name,
    ACTIONS(235), 1,
      sym__unused_name,
    ACTIONS(241), 1,
      sym__name,
    STATE(126), 1,
      sym_pattern_constructor_proper_name,
    STATE(287), 1,
      sym_qualifier,
    STATE(307), 1,
      sym_expression_function_parameter,
    STATE(188), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [4720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
  [4736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
  [4752] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym__proper_name,
    ACTIONS(235), 1,
      sym__unused_name,
    ACTIONS(241), 1,
      sym__name,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      sym_pattern_constructor_proper_name,
    STATE(287), 1,
      sym_qualifier,
    STATE(214), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [4780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
  [4796] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym__proper_name,
    ACTIONS(235), 1,
      sym__unused_name,
    ACTIONS(241), 1,
      sym__name,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      sym_pattern_constructor_proper_name,
    STATE(287), 1,
      sym_qualifier,
    STATE(286), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [4824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
  [4840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
  [4856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
  [4872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
  [4888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
  [4904] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym__proper_name,
    ACTIONS(235), 1,
      sym__unused_name,
    ACTIONS(241), 1,
      sym__name,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      sym_pattern_constructor_proper_name,
    STATE(287), 1,
      sym_qualifier,
    STATE(286), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [4932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
  [4948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_then,
      anon_sym_else,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_end,
  [4964] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym__proper_name,
    ACTIONS(235), 1,
      sym__unused_name,
    ACTIONS(241), 1,
      sym__name,
    STATE(126), 1,
      sym_pattern_constructor_proper_name,
    STATE(287), 1,
      sym_qualifier,
    STATE(286), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [4989] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym__proper_name,
    ACTIONS(235), 1,
      sym__unused_name,
    ACTIONS(241), 1,
      sym__name,
    STATE(126), 1,
      sym_pattern_constructor_proper_name,
    STATE(287), 1,
      sym_qualifier,
    STATE(326), 4,
      sym__pattern,
      sym_pattern_constructor,
      sym_pattern_variable,
      sym_pattern_unused,
  [5014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(285), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [5030] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    STATE(145), 1,
      sym_type_call_arguments,
    ACTIONS(287), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [5048] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym__name,
    ACTIONS(293), 1,
      anon_sym_DOT_DOT,
    ACTIONS(295), 1,
      sym__proper_name,
    STATE(168), 1,
      sym_exposing_list_item_type_name,
    STATE(227), 3,
      sym__exposing_list_item,
      sym_exposing_list_item_type,
      sym_exposing_list_item_value,
  [5069] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    STATE(175), 1,
      sym_pattern_constructor_fields,
    ACTIONS(299), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [5086] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym__name,
    ACTIONS(295), 1,
      sym__proper_name,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      sym_exposing_list_item_type_name,
    STATE(288), 3,
      sym__exposing_list_item,
      sym_exposing_list_item_type,
      sym_exposing_list_item_value,
  [5107] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_SEMI,
    ACTIONS(305), 1,
      anon_sym_as,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    STATE(356), 1,
      sym__everything,
    STATE(353), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [5128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [5141] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      anon_sym_SEMI,
    ACTIONS(313), 1,
      anon_sym_as,
    STATE(356), 1,
      sym__everything,
    STATE(327), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [5162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    STATE(177), 1,
      sym_pattern_constructor_fields,
    ACTIONS(315), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [5179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [5192] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym__name,
    ACTIONS(295), 1,
      sym__proper_name,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      sym_exposing_list_item_type_name,
    STATE(288), 3,
      sym__exposing_list_item,
      sym_exposing_list_item_type,
      sym_exposing_list_item_value,
  [5213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(321), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [5228] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 1,
      anon_sym_import,
    STATE(130), 2,
      sym_module_import,
      aux_sym_source_file_repeat1,
    ACTIONS(325), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [5260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [5273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_DOT,
    STATE(133), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(332), 4,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LPAREN,
  [5289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [5301] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_DOT,
    STATE(151), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(339), 4,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LPAREN,
  [5317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [5329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [5341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [5353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [5365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [5377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [5389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_LT_DASH,
    ACTIONS(117), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_PIPE_GT,
  [5403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [5415] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(359), 1,
      anon_sym_SEMI,
    STATE(356), 1,
      sym__everything,
    STATE(373), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [5433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [5445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [5457] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    ACTIONS(365), 1,
      anon_sym_SEMI,
    STATE(356), 1,
      sym__everything,
    STATE(332), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [5475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [5487] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym__name,
    ACTIONS(295), 1,
      sym__proper_name,
    STATE(168), 1,
      sym_exposing_list_item_type_name,
    STATE(288), 3,
      sym__exposing_list_item,
      sym_exposing_list_item_type,
      sym_exposing_list_item_value,
  [5505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
  [5517] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_DOT,
    STATE(133), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(369), 4,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_as,
      anon_sym_LPAREN,
  [5533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_DASH_GT,
    ACTIONS(371), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [5547] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      ts_builtin_sym_end,
    ACTIONS(377), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [5571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      ts_builtin_sym_end,
    ACTIONS(383), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 5,
      anon_sym_exports,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_LPAREN,
  [5595] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    STATE(356), 1,
      sym__everything,
    STATE(357), 3,
      sym__exposing,
      sym_exposing_everything,
      sym_exposing_list,
  [5610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [5621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      ts_builtin_sym_end,
    ACTIONS(389), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5634] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      ts_builtin_sym_end,
    ACTIONS(393), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [5658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      ts_builtin_sym_end,
    ACTIONS(399), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5671] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
    ACTIONS(403), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      ts_builtin_sym_end,
    ACTIONS(407), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      ts_builtin_sym_end,
    ACTIONS(411), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [5721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      ts_builtin_sym_end,
    ACTIONS(417), 4,
      anon_sym_import,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5734] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    STATE(305), 1,
      sym_exposing_list_item_type_constructors,
    STATE(306), 1,
      sym__everything,
    ACTIONS(421), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [5762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [5773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [5784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [5795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [5806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [5817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [5828] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      sym__name,
    ACTIONS(439), 1,
      anon_sym_RBRACE,
    STATE(251), 1,
      sym_type_record_field,
    STATE(360), 1,
      sym_type_record_field_label,
    STATE(363), 1,
      sym_type_open_record_row_variable,
  [5847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_GT,
      anon_sym_COLON,
  [5858] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_PIPE,
    ACTIONS(443), 1,
      sym__proper_name,
    STATE(194), 1,
      sym_type_declaration_constructor_name,
    STATE(219), 1,
      sym_type_declaration_constructor,
  [5874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      ts_builtin_sym_end,
    ACTIONS(447), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5886] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(451), 1,
      sym__proper_name,
    STATE(123), 1,
      sym_module_name,
    STATE(304), 1,
      sym_module_import_package,
  [5902] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_SEMI,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(457), 1,
      anon_sym_EQ,
    STATE(289), 1,
      sym_type_declaration_variables,
  [5918] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym__name,
    ACTIONS(461), 1,
      anon_sym_RBRACE,
    STATE(284), 1,
      sym_type_record_field,
    STATE(360), 1,
      sym_type_record_field_label,
  [5934] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      ts_builtin_sym_end,
    ACTIONS(465), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [5946] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym__proper_name,
    ACTIONS(467), 1,
      anon_sym_PIPE,
    STATE(194), 1,
      sym_type_declaration_constructor_name,
    STATE(242), 1,
      sym_type_declaration_constructor,
  [5962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 2,
      anon_sym_in,
      sym__name,
    ACTIONS(471), 2,
      sym__proper_name,
      sym__unused_name,
  [5974] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym__name,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
    STATE(312), 1,
      sym_expression_record_field,
    STATE(337), 1,
      sym_expression_record_field_label,
  [5990] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      ts_builtin_sym_end,
    ACTIONS(479), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [6002] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_COLON,
    STATE(296), 1,
      sym_type_annotation,
    ACTIONS(481), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6016] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      sym__name,
    ACTIONS(487), 1,
      sym__proper_name,
    STATE(76), 1,
      sym_expression_variable_name,
    STATE(93), 1,
      sym_expression_constructor_proper_name,
  [6032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [6042] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym__name,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
    STATE(312), 1,
      sym_expression_record_field,
    STATE(337), 1,
      sym_expression_record_field_label,
  [6058] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym__name,
    ACTIONS(493), 1,
      anon_sym_RBRACE,
    STATE(284), 1,
      sym_type_record_field,
    STATE(360), 1,
      sym_type_record_field_label,
  [6074] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_PIPE,
    ACTIONS(498), 1,
      anon_sym_end,
    STATE(193), 2,
      sym_expression_match_arm,
      aux_sym_expression_match_repeat1,
  [6088] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_LPAREN,
    STATE(303), 1,
      sym_type_declaration_constructor_fields,
    ACTIONS(500), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [6102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      ts_builtin_sym_end,
    ACTIONS(506), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [6114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      ts_builtin_sym_end,
    ACTIONS(510), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [6126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 2,
      anon_sym_in,
      sym__name,
    ACTIONS(514), 2,
      sym__proper_name,
      sym__unused_name,
  [6138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_EQ,
    ACTIONS(117), 3,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_PIPE,
  [6150] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym__name,
    ACTIONS(516), 1,
      anon_sym_RBRACE,
    STATE(284), 1,
      sym_type_record_field,
    STATE(360), 1,
      sym_type_record_field_label,
  [6166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      ts_builtin_sym_end,
    ACTIONS(520), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [6178] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym__name,
    ACTIONS(522), 1,
      anon_sym_RBRACE,
    STATE(312), 1,
      sym_expression_record_field,
    STATE(337), 1,
      sym_expression_record_field_label,
  [6194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      ts_builtin_sym_end,
    ACTIONS(526), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [6206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      ts_builtin_sym_end,
    ACTIONS(530), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [6218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      ts_builtin_sym_end,
    ACTIONS(534), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [6230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      ts_builtin_sym_end,
    ACTIONS(538), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [6242] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_expression_call_arguments_repeat1,
    ACTIONS(540), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      ts_builtin_sym_end,
    ACTIONS(547), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [6268] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym__name,
    ACTIONS(549), 1,
      anon_sym_RBRACE,
    STATE(312), 1,
      sym_expression_record_field,
    STATE(337), 1,
      sym_expression_record_field_label,
  [6284] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_PIPE,
    ACTIONS(553), 1,
      anon_sym_end,
    STATE(193), 2,
      sym_expression_match_arm,
      aux_sym_expression_match_repeat1,
  [6298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      ts_builtin_sym_end,
    ACTIONS(557), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [6310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      ts_builtin_sym_end,
    ACTIONS(561), 3,
      anon_sym_type,
      anon_sym_foreign,
      sym__name,
  [6322] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym__name,
    ACTIONS(563), 1,
      anon_sym_RBRACE,
    STATE(284), 1,
      sym_type_record_field,
    STATE(360), 1,
      sym_type_record_field_label,
  [6338] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_RBRACE,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym_type_closed_record_repeat1,
  [6351] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    STATE(244), 1,
      aux_sym_pattern_constructor_fields_repeat1,
  [6364] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
    ACTIONS(573), 1,
      anon_sym_COMMA,
    STATE(263), 1,
      aux_sym_expression_call_arguments_repeat1,
  [6377] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    STATE(225), 1,
      aux_sym_type_declaration_variables_repeat1,
  [6390] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
    ACTIONS(581), 1,
      anon_sym_COMMA,
    STATE(217), 1,
      aux_sym_exposing_list_repeat1,
  [6403] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
    ACTIONS(584), 1,
      sym__name,
    STATE(318), 1,
      sym_type_declaration_variable,
  [6416] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_SEMI,
    ACTIONS(588), 1,
      anon_sym_PIPE,
    STATE(231), 1,
      aux_sym_type_declaration_repeat1,
  [6429] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym__name,
    STATE(236), 1,
      sym_expression_record_field,
    STATE(337), 1,
      sym_expression_record_field_label,
  [6442] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_alias,
    ACTIONS(592), 1,
      sym__proper_name,
    STATE(181), 1,
      sym_type_declaration_name,
  [6455] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym__name,
    STATE(284), 1,
      sym_type_record_field,
    STATE(360), 1,
      sym_type_record_field_label,
  [6468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6477] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      sym__name,
    ACTIONS(596), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      sym_type_declaration_variable,
  [6490] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_RPAREN,
    ACTIONS(600), 1,
      anon_sym_COMMA,
    STATE(225), 1,
      aux_sym_type_declaration_variables_repeat1,
  [6503] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_PIPE,
    ACTIONS(603), 1,
      anon_sym_SEMI,
    STATE(228), 1,
      aux_sym_type_declaration_repeat1,
  [6516] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
    ACTIONS(607), 1,
      anon_sym_COMMA,
    STATE(245), 1,
      aux_sym_exposing_list_repeat1,
  [6529] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_SEMI,
    ACTIONS(611), 1,
      anon_sym_PIPE,
    STATE(228), 1,
      aux_sym_type_declaration_repeat1,
  [6542] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_RPAREN,
    ACTIONS(616), 1,
      anon_sym_COMMA,
    STATE(246), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [6555] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_PIPE,
    ACTIONS(618), 1,
      anon_sym_SEMI,
    STATE(266), 1,
      aux_sym_type_declaration_repeat1,
  [6568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_PIPE,
    ACTIONS(618), 1,
      anon_sym_SEMI,
    STATE(228), 1,
      aux_sym_type_declaration_repeat1,
  [6581] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym__proper_name,
    STATE(194), 1,
      sym_type_declaration_constructor_name,
    STATE(230), 1,
      sym_type_declaration_constructor,
  [6594] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_RPAREN,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    STATE(216), 1,
      aux_sym_type_declaration_variables_repeat1,
  [6607] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_COMMA,
    ACTIONS(627), 1,
      anon_sym_RBRACE,
    STATE(234), 1,
      aux_sym_expression_record_repeat1,
  [6620] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_RPAREN,
    ACTIONS(631), 1,
      anon_sym_COMMA,
    STATE(235), 1,
      aux_sym_expression_function_repeat1,
  [6633] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_COMMA,
    ACTIONS(636), 1,
      anon_sym_RBRACE,
    STATE(257), 1,
      aux_sym_expression_record_repeat1,
  [6646] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym__proper_name,
    STATE(194), 1,
      sym_type_declaration_constructor_name,
    STATE(262), 1,
      sym_type_declaration_constructor,
  [6659] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_COLON,
    ACTIONS(638), 1,
      anon_sym_EQ,
    STATE(321), 1,
      sym_type_annotation,
  [6672] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_DASH_GT,
    ACTIONS(642), 1,
      anon_sym_COLON,
    STATE(350), 1,
      sym_return_type_annotation,
  [6685] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_COLON,
    ACTIONS(644), 1,
      anon_sym_EQ,
    STATE(358), 1,
      sym_type_annotation,
  [6698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_PIPE,
  [6707] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_PIPE,
    ACTIONS(648), 1,
      anon_sym_SEMI,
    STATE(243), 1,
      aux_sym_type_declaration_repeat1,
  [6720] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_PIPE,
    ACTIONS(650), 1,
      anon_sym_SEMI,
    STATE(228), 1,
      aux_sym_type_declaration_repeat1,
  [6733] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    ACTIONS(652), 1,
      anon_sym_COMMA,
    STATE(270), 1,
      aux_sym_pattern_constructor_fields_repeat1,
  [6746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    ACTIONS(654), 1,
      anon_sym_COMMA,
    STATE(217), 1,
      aux_sym_exposing_list_repeat1,
  [6759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    ACTIONS(656), 1,
      anon_sym_COMMA,
    STATE(268), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [6772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_EQ,
  [6781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym__proper_name,
    STATE(194), 1,
      sym_type_declaration_constructor_name,
    STATE(317), 1,
      sym_type_declaration_constructor,
  [6803] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    ACTIONS(662), 1,
      anon_sym_COMMA,
    STATE(268), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [6816] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_COMMA,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
    STATE(255), 1,
      aux_sym_type_closed_record_repeat1,
  [6829] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_COLON,
    ACTIONS(668), 1,
      anon_sym_DASH_GT,
    STATE(330), 1,
      sym_return_type_annotation,
  [6842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_PIPE,
    STATE(209), 2,
      sym_expression_match_arm,
      aux_sym_expression_match_repeat1,
  [6853] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    ACTIONS(670), 1,
      anon_sym_COMMA,
    STATE(235), 1,
      aux_sym_expression_function_repeat1,
  [6866] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_RBRACE,
    ACTIONS(672), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym_type_closed_record_repeat1,
  [6879] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(674), 1,
      anon_sym_EQ,
    STATE(325), 1,
      sym_type_declaration_variables,
  [6892] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_RBRACE,
    ACTIONS(676), 1,
      anon_sym_COMMA,
    STATE(234), 1,
      aux_sym_expression_record_repeat1,
  [6905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6914] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(678), 1,
      anon_sym_PIPE,
    STATE(84), 1,
      sym_expression_call_arguments,
  [6927] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_RPAREN,
    ACTIONS(682), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [6940] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_COLON,
    ACTIONS(684), 1,
      anon_sym_DASH_GT,
    STATE(372), 1,
      sym_return_type_annotation,
  [6953] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_PIPE,
    ACTIONS(650), 1,
      anon_sym_SEMI,
    STATE(226), 1,
      aux_sym_type_declaration_repeat1,
  [6966] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    ACTIONS(686), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_expression_call_arguments_repeat1,
  [6979] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym__name,
    STATE(312), 1,
      sym_expression_record_field,
    STATE(337), 1,
      sym_expression_record_field_label,
  [6992] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_COMMA,
    ACTIONS(690), 1,
      anon_sym_RBRACE,
    STATE(277), 1,
      aux_sym_expression_record_repeat1,
  [7005] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_PIPE,
    ACTIONS(692), 1,
      anon_sym_SEMI,
    STATE(228), 1,
      aux_sym_type_declaration_repeat1,
  [7018] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym__name,
    STATE(272), 1,
      sym_type_record_field,
    STATE(360), 1,
      sym_type_record_field_label,
  [7031] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_RPAREN,
    ACTIONS(696), 1,
      anon_sym_COMMA,
    STATE(268), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [7044] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_COMMA,
    ACTIONS(701), 1,
      anon_sym_RBRACK,
    STATE(279), 1,
      aux_sym_expression_call_arguments_repeat1,
  [7057] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_RPAREN,
    ACTIONS(705), 1,
      anon_sym_COMMA,
    STATE(270), 1,
      aux_sym_pattern_constructor_fields_repeat1,
  [7070] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_COMMA,
    ACTIONS(711), 1,
      anon_sym_RBRACE,
    STATE(271), 1,
      aux_sym_type_closed_record_repeat1,
  [7083] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    ACTIONS(715), 1,
      anon_sym_RBRACE,
    STATE(213), 1,
      aux_sym_type_closed_record_repeat1,
  [7096] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(717), 1,
      anon_sym_COMMA,
    STATE(268), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [7109] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_COLON,
    ACTIONS(719), 1,
      anon_sym_DASH_GT,
    STATE(361), 1,
      sym_return_type_annotation,
  [7122] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_COLON,
    ACTIONS(721), 1,
      anon_sym_EQ,
    STATE(347), 1,
      sym_type_annotation,
  [7135] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
    ACTIONS(725), 1,
      anon_sym_COMMA,
    STATE(254), 1,
      aux_sym_expression_function_repeat1,
  [7148] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    STATE(234), 1,
      aux_sym_expression_record_repeat1,
  [7161] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
    ACTIONS(731), 1,
      anon_sym_COMMA,
    STATE(273), 1,
      aux_sym_type_declaration_constructor_fields_repeat1,
  [7174] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_RBRACK,
    ACTIONS(733), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_expression_call_arguments_repeat1,
  [7187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 2,
      anon_sym_PIPE,
      anon_sym_end,
  [7195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [7203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [7211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      sym__name,
    STATE(318), 1,
      sym_type_declaration_variable,
  [7221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [7229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [7237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      sym__proper_name,
    STATE(121), 1,
      sym_pattern_constructor_proper_name,
  [7255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_SEMI,
    ACTIONS(747), 1,
      anon_sym_EQ,
  [7273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      sym__name,
    STATE(233), 1,
      sym_type_declaration_variable,
  [7291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 2,
      sym__proper_name,
      sym__name,
  [7299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym__name,
    STATE(70), 1,
      sym_expression_record_field_label,
  [7309] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_PIPE,
    ACTIONS(753), 1,
      anon_sym_COLON,
  [7319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      sym__proper_name,
    STATE(379), 1,
      sym_module_name,
  [7329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [7345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      sym__proper_name,
    STATE(144), 1,
      sym_module_import_alias,
  [7355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_COLON,
    STATE(343), 1,
      sym_type_annotation,
  [7365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [7373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_SEMI,
    ACTIONS(765), 1,
      anon_sym_RBRACE,
  [7383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      sym__proper_name,
    STATE(256), 1,
      sym_type_declaration_name,
  [7393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [7401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      sym__proper_name,
    STATE(125), 1,
      sym_module_name,
  [7411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      sym__proper_name,
    STATE(132), 1,
      sym_type_constructor_proper_name,
  [7445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [7453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [7461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [7477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      sym__proper_name,
    STATE(147), 1,
      sym_module_import_alias,
  [7487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 2,
      anon_sym_SEMI,
      anon_sym_LPAREN,
  [7495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      sym__name,
    STATE(299), 1,
      sym_foreign_value_declaration_name,
  [7505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [7521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [7537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [7545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_EQ,
  [7552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      sym__proper_name,
  [7559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_SEMI,
  [7566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_DASH_GT,
  [7573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      anon_sym_EQ,
  [7580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_DASH_GT,
  [7587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_SEMI,
  [7594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_RPAREN,
  [7601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_RPAREN,
  [7608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_DASH_GT,
  [7615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_DASH_GT,
  [7622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_SEMI,
  [7629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_SEMI,
  [7636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_RBRACE,
  [7643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_SEMI,
  [7650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_SEMI,
  [7657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_EQ,
  [7664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_SEMI,
  [7671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_LPAREN,
  [7678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_PIPE,
  [7685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_LBRACE,
  [7692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_SEMI,
  [7699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_SEMI,
  [7706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_then,
  [7713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_RPAREN,
  [7720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_COLON,
  [7727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_EQ,
  [7734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_with,
  [7741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_LT_DASH,
  [7748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_DASH_GT,
  [7755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_DASH_GT,
  [7762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_DASH_GT,
  [7769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_SEMI,
  [7776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_else,
  [7783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_RPAREN,
  [7790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_SEMI,
  [7797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_SEMI,
  [7804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_EQ,
  [7811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_RBRACE,
  [7818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_COLON,
  [7825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_DASH_GT,
  [7832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_COLON,
  [7839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_PIPE,
  [7846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_RBRACE,
  [7853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_SEMI,
  [7860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_SEMI,
  [7867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_DASH_GT,
  [7874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_DOT_DOT,
  [7881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      sym__package_name,
  [7888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      sym__proper_name,
  [7895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_SEMI,
  [7902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_DASH_GT,
  [7909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_SEMI,
  [7916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_RBRACE,
  [7923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_EQ,
  [7930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_RBRACE,
  [7937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_SEMI,
  [7944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_SEMI,
  [7951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_exports,
  [7958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 91,
  [SMALL_STATE(4)] = 182,
  [SMALL_STATE(5)] = 273,
  [SMALL_STATE(6)] = 364,
  [SMALL_STATE(7)] = 448,
  [SMALL_STATE(8)] = 532,
  [SMALL_STATE(9)] = 616,
  [SMALL_STATE(10)] = 700,
  [SMALL_STATE(11)] = 784,
  [SMALL_STATE(12)] = 868,
  [SMALL_STATE(13)] = 949,
  [SMALL_STATE(14)] = 1030,
  [SMALL_STATE(15)] = 1111,
  [SMALL_STATE(16)] = 1192,
  [SMALL_STATE(17)] = 1273,
  [SMALL_STATE(18)] = 1354,
  [SMALL_STATE(19)] = 1435,
  [SMALL_STATE(20)] = 1516,
  [SMALL_STATE(21)] = 1597,
  [SMALL_STATE(22)] = 1678,
  [SMALL_STATE(23)] = 1759,
  [SMALL_STATE(24)] = 1840,
  [SMALL_STATE(25)] = 1921,
  [SMALL_STATE(26)] = 2002,
  [SMALL_STATE(27)] = 2083,
  [SMALL_STATE(28)] = 2164,
  [SMALL_STATE(29)] = 2245,
  [SMALL_STATE(30)] = 2326,
  [SMALL_STATE(31)] = 2407,
  [SMALL_STATE(32)] = 2488,
  [SMALL_STATE(33)] = 2569,
  [SMALL_STATE(34)] = 2650,
  [SMALL_STATE(35)] = 2731,
  [SMALL_STATE(36)] = 2812,
  [SMALL_STATE(37)] = 2876,
  [SMALL_STATE(38)] = 2928,
  [SMALL_STATE(39)] = 2966,
  [SMALL_STATE(40)] = 3004,
  [SMALL_STATE(41)] = 3042,
  [SMALL_STATE(42)] = 3078,
  [SMALL_STATE(43)] = 3116,
  [SMALL_STATE(44)] = 3152,
  [SMALL_STATE(45)] = 3190,
  [SMALL_STATE(46)] = 3228,
  [SMALL_STATE(47)] = 3266,
  [SMALL_STATE(48)] = 3301,
  [SMALL_STATE(49)] = 3336,
  [SMALL_STATE(50)] = 3371,
  [SMALL_STATE(51)] = 3406,
  [SMALL_STATE(52)] = 3441,
  [SMALL_STATE(53)] = 3476,
  [SMALL_STATE(54)] = 3511,
  [SMALL_STATE(55)] = 3546,
  [SMALL_STATE(56)] = 3581,
  [SMALL_STATE(57)] = 3616,
  [SMALL_STATE(58)] = 3651,
  [SMALL_STATE(59)] = 3686,
  [SMALL_STATE(60)] = 3708,
  [SMALL_STATE(61)] = 3729,
  [SMALL_STATE(62)] = 3754,
  [SMALL_STATE(63)] = 3787,
  [SMALL_STATE(64)] = 3808,
  [SMALL_STATE(65)] = 3829,
  [SMALL_STATE(66)] = 3852,
  [SMALL_STATE(67)] = 3873,
  [SMALL_STATE(68)] = 3894,
  [SMALL_STATE(69)] = 3919,
  [SMALL_STATE(70)] = 3942,
  [SMALL_STATE(71)] = 3963,
  [SMALL_STATE(72)] = 3984,
  [SMALL_STATE(73)] = 4005,
  [SMALL_STATE(74)] = 4026,
  [SMALL_STATE(75)] = 4055,
  [SMALL_STATE(76)] = 4076,
  [SMALL_STATE(77)] = 4097,
  [SMALL_STATE(78)] = 4118,
  [SMALL_STATE(79)] = 4139,
  [SMALL_STATE(80)] = 4160,
  [SMALL_STATE(81)] = 4181,
  [SMALL_STATE(82)] = 4210,
  [SMALL_STATE(83)] = 4231,
  [SMALL_STATE(84)] = 4252,
  [SMALL_STATE(85)] = 4273,
  [SMALL_STATE(86)] = 4294,
  [SMALL_STATE(87)] = 4323,
  [SMALL_STATE(88)] = 4344,
  [SMALL_STATE(89)] = 4365,
  [SMALL_STATE(90)] = 4385,
  [SMALL_STATE(91)] = 4417,
  [SMALL_STATE(92)] = 4449,
  [SMALL_STATE(93)] = 4469,
  [SMALL_STATE(94)] = 4489,
  [SMALL_STATE(95)] = 4520,
  [SMALL_STATE(96)] = 4551,
  [SMALL_STATE(97)] = 4580,
  [SMALL_STATE(98)] = 4611,
  [SMALL_STATE(99)] = 4632,
  [SMALL_STATE(100)] = 4648,
  [SMALL_STATE(101)] = 4676,
  [SMALL_STATE(102)] = 4692,
  [SMALL_STATE(103)] = 4720,
  [SMALL_STATE(104)] = 4736,
  [SMALL_STATE(105)] = 4752,
  [SMALL_STATE(106)] = 4780,
  [SMALL_STATE(107)] = 4796,
  [SMALL_STATE(108)] = 4824,
  [SMALL_STATE(109)] = 4840,
  [SMALL_STATE(110)] = 4856,
  [SMALL_STATE(111)] = 4872,
  [SMALL_STATE(112)] = 4888,
  [SMALL_STATE(113)] = 4904,
  [SMALL_STATE(114)] = 4932,
  [SMALL_STATE(115)] = 4948,
  [SMALL_STATE(116)] = 4964,
  [SMALL_STATE(117)] = 4989,
  [SMALL_STATE(118)] = 5014,
  [SMALL_STATE(119)] = 5030,
  [SMALL_STATE(120)] = 5048,
  [SMALL_STATE(121)] = 5069,
  [SMALL_STATE(122)] = 5086,
  [SMALL_STATE(123)] = 5107,
  [SMALL_STATE(124)] = 5128,
  [SMALL_STATE(125)] = 5141,
  [SMALL_STATE(126)] = 5162,
  [SMALL_STATE(127)] = 5179,
  [SMALL_STATE(128)] = 5192,
  [SMALL_STATE(129)] = 5213,
  [SMALL_STATE(130)] = 5228,
  [SMALL_STATE(131)] = 5247,
  [SMALL_STATE(132)] = 5260,
  [SMALL_STATE(133)] = 5273,
  [SMALL_STATE(134)] = 5289,
  [SMALL_STATE(135)] = 5301,
  [SMALL_STATE(136)] = 5317,
  [SMALL_STATE(137)] = 5329,
  [SMALL_STATE(138)] = 5341,
  [SMALL_STATE(139)] = 5353,
  [SMALL_STATE(140)] = 5365,
  [SMALL_STATE(141)] = 5377,
  [SMALL_STATE(142)] = 5389,
  [SMALL_STATE(143)] = 5403,
  [SMALL_STATE(144)] = 5415,
  [SMALL_STATE(145)] = 5433,
  [SMALL_STATE(146)] = 5445,
  [SMALL_STATE(147)] = 5457,
  [SMALL_STATE(148)] = 5475,
  [SMALL_STATE(149)] = 5487,
  [SMALL_STATE(150)] = 5505,
  [SMALL_STATE(151)] = 5517,
  [SMALL_STATE(152)] = 5533,
  [SMALL_STATE(153)] = 5547,
  [SMALL_STATE(154)] = 5560,
  [SMALL_STATE(155)] = 5571,
  [SMALL_STATE(156)] = 5584,
  [SMALL_STATE(157)] = 5595,
  [SMALL_STATE(158)] = 5610,
  [SMALL_STATE(159)] = 5621,
  [SMALL_STATE(160)] = 5634,
  [SMALL_STATE(161)] = 5647,
  [SMALL_STATE(162)] = 5658,
  [SMALL_STATE(163)] = 5671,
  [SMALL_STATE(164)] = 5684,
  [SMALL_STATE(165)] = 5697,
  [SMALL_STATE(166)] = 5710,
  [SMALL_STATE(167)] = 5721,
  [SMALL_STATE(168)] = 5734,
  [SMALL_STATE(169)] = 5751,
  [SMALL_STATE(170)] = 5762,
  [SMALL_STATE(171)] = 5773,
  [SMALL_STATE(172)] = 5784,
  [SMALL_STATE(173)] = 5795,
  [SMALL_STATE(174)] = 5806,
  [SMALL_STATE(175)] = 5817,
  [SMALL_STATE(176)] = 5828,
  [SMALL_STATE(177)] = 5847,
  [SMALL_STATE(178)] = 5858,
  [SMALL_STATE(179)] = 5874,
  [SMALL_STATE(180)] = 5886,
  [SMALL_STATE(181)] = 5902,
  [SMALL_STATE(182)] = 5918,
  [SMALL_STATE(183)] = 5934,
  [SMALL_STATE(184)] = 5946,
  [SMALL_STATE(185)] = 5962,
  [SMALL_STATE(186)] = 5974,
  [SMALL_STATE(187)] = 5990,
  [SMALL_STATE(188)] = 6002,
  [SMALL_STATE(189)] = 6016,
  [SMALL_STATE(190)] = 6032,
  [SMALL_STATE(191)] = 6042,
  [SMALL_STATE(192)] = 6058,
  [SMALL_STATE(193)] = 6074,
  [SMALL_STATE(194)] = 6088,
  [SMALL_STATE(195)] = 6102,
  [SMALL_STATE(196)] = 6114,
  [SMALL_STATE(197)] = 6126,
  [SMALL_STATE(198)] = 6138,
  [SMALL_STATE(199)] = 6150,
  [SMALL_STATE(200)] = 6166,
  [SMALL_STATE(201)] = 6178,
  [SMALL_STATE(202)] = 6194,
  [SMALL_STATE(203)] = 6206,
  [SMALL_STATE(204)] = 6218,
  [SMALL_STATE(205)] = 6230,
  [SMALL_STATE(206)] = 6242,
  [SMALL_STATE(207)] = 6256,
  [SMALL_STATE(208)] = 6268,
  [SMALL_STATE(209)] = 6284,
  [SMALL_STATE(210)] = 6298,
  [SMALL_STATE(211)] = 6310,
  [SMALL_STATE(212)] = 6322,
  [SMALL_STATE(213)] = 6338,
  [SMALL_STATE(214)] = 6351,
  [SMALL_STATE(215)] = 6364,
  [SMALL_STATE(216)] = 6377,
  [SMALL_STATE(217)] = 6390,
  [SMALL_STATE(218)] = 6403,
  [SMALL_STATE(219)] = 6416,
  [SMALL_STATE(220)] = 6429,
  [SMALL_STATE(221)] = 6442,
  [SMALL_STATE(222)] = 6455,
  [SMALL_STATE(223)] = 6468,
  [SMALL_STATE(224)] = 6477,
  [SMALL_STATE(225)] = 6490,
  [SMALL_STATE(226)] = 6503,
  [SMALL_STATE(227)] = 6516,
  [SMALL_STATE(228)] = 6529,
  [SMALL_STATE(229)] = 6542,
  [SMALL_STATE(230)] = 6555,
  [SMALL_STATE(231)] = 6568,
  [SMALL_STATE(232)] = 6581,
  [SMALL_STATE(233)] = 6594,
  [SMALL_STATE(234)] = 6607,
  [SMALL_STATE(235)] = 6620,
  [SMALL_STATE(236)] = 6633,
  [SMALL_STATE(237)] = 6646,
  [SMALL_STATE(238)] = 6659,
  [SMALL_STATE(239)] = 6672,
  [SMALL_STATE(240)] = 6685,
  [SMALL_STATE(241)] = 6698,
  [SMALL_STATE(242)] = 6707,
  [SMALL_STATE(243)] = 6720,
  [SMALL_STATE(244)] = 6733,
  [SMALL_STATE(245)] = 6746,
  [SMALL_STATE(246)] = 6759,
  [SMALL_STATE(247)] = 6772,
  [SMALL_STATE(248)] = 6781,
  [SMALL_STATE(249)] = 6790,
  [SMALL_STATE(250)] = 6803,
  [SMALL_STATE(251)] = 6816,
  [SMALL_STATE(252)] = 6829,
  [SMALL_STATE(253)] = 6842,
  [SMALL_STATE(254)] = 6853,
  [SMALL_STATE(255)] = 6866,
  [SMALL_STATE(256)] = 6879,
  [SMALL_STATE(257)] = 6892,
  [SMALL_STATE(258)] = 6905,
  [SMALL_STATE(259)] = 6914,
  [SMALL_STATE(260)] = 6927,
  [SMALL_STATE(261)] = 6940,
  [SMALL_STATE(262)] = 6953,
  [SMALL_STATE(263)] = 6966,
  [SMALL_STATE(264)] = 6979,
  [SMALL_STATE(265)] = 6992,
  [SMALL_STATE(266)] = 7005,
  [SMALL_STATE(267)] = 7018,
  [SMALL_STATE(268)] = 7031,
  [SMALL_STATE(269)] = 7044,
  [SMALL_STATE(270)] = 7057,
  [SMALL_STATE(271)] = 7070,
  [SMALL_STATE(272)] = 7083,
  [SMALL_STATE(273)] = 7096,
  [SMALL_STATE(274)] = 7109,
  [SMALL_STATE(275)] = 7122,
  [SMALL_STATE(276)] = 7135,
  [SMALL_STATE(277)] = 7148,
  [SMALL_STATE(278)] = 7161,
  [SMALL_STATE(279)] = 7174,
  [SMALL_STATE(280)] = 7187,
  [SMALL_STATE(281)] = 7195,
  [SMALL_STATE(282)] = 7203,
  [SMALL_STATE(283)] = 7211,
  [SMALL_STATE(284)] = 7221,
  [SMALL_STATE(285)] = 7229,
  [SMALL_STATE(286)] = 7237,
  [SMALL_STATE(287)] = 7245,
  [SMALL_STATE(288)] = 7255,
  [SMALL_STATE(289)] = 7263,
  [SMALL_STATE(290)] = 7273,
  [SMALL_STATE(291)] = 7281,
  [SMALL_STATE(292)] = 7291,
  [SMALL_STATE(293)] = 7299,
  [SMALL_STATE(294)] = 7309,
  [SMALL_STATE(295)] = 7319,
  [SMALL_STATE(296)] = 7329,
  [SMALL_STATE(297)] = 7337,
  [SMALL_STATE(298)] = 7345,
  [SMALL_STATE(299)] = 7355,
  [SMALL_STATE(300)] = 7365,
  [SMALL_STATE(301)] = 7373,
  [SMALL_STATE(302)] = 7383,
  [SMALL_STATE(303)] = 7393,
  [SMALL_STATE(304)] = 7401,
  [SMALL_STATE(305)] = 7411,
  [SMALL_STATE(306)] = 7419,
  [SMALL_STATE(307)] = 7427,
  [SMALL_STATE(308)] = 7435,
  [SMALL_STATE(309)] = 7445,
  [SMALL_STATE(310)] = 7453,
  [SMALL_STATE(311)] = 7461,
  [SMALL_STATE(312)] = 7469,
  [SMALL_STATE(313)] = 7477,
  [SMALL_STATE(314)] = 7487,
  [SMALL_STATE(315)] = 7495,
  [SMALL_STATE(316)] = 7505,
  [SMALL_STATE(317)] = 7513,
  [SMALL_STATE(318)] = 7521,
  [SMALL_STATE(319)] = 7529,
  [SMALL_STATE(320)] = 7537,
  [SMALL_STATE(321)] = 7545,
  [SMALL_STATE(322)] = 7552,
  [SMALL_STATE(323)] = 7559,
  [SMALL_STATE(324)] = 7566,
  [SMALL_STATE(325)] = 7573,
  [SMALL_STATE(326)] = 7580,
  [SMALL_STATE(327)] = 7587,
  [SMALL_STATE(328)] = 7594,
  [SMALL_STATE(329)] = 7601,
  [SMALL_STATE(330)] = 7608,
  [SMALL_STATE(331)] = 7615,
  [SMALL_STATE(332)] = 7622,
  [SMALL_STATE(333)] = 7629,
  [SMALL_STATE(334)] = 7636,
  [SMALL_STATE(335)] = 7643,
  [SMALL_STATE(336)] = 7650,
  [SMALL_STATE(337)] = 7657,
  [SMALL_STATE(338)] = 7664,
  [SMALL_STATE(339)] = 7671,
  [SMALL_STATE(340)] = 7678,
  [SMALL_STATE(341)] = 7685,
  [SMALL_STATE(342)] = 7692,
  [SMALL_STATE(343)] = 7699,
  [SMALL_STATE(344)] = 7706,
  [SMALL_STATE(345)] = 7713,
  [SMALL_STATE(346)] = 7720,
  [SMALL_STATE(347)] = 7727,
  [SMALL_STATE(348)] = 7734,
  [SMALL_STATE(349)] = 7741,
  [SMALL_STATE(350)] = 7748,
  [SMALL_STATE(351)] = 7755,
  [SMALL_STATE(352)] = 7762,
  [SMALL_STATE(353)] = 7769,
  [SMALL_STATE(354)] = 7776,
  [SMALL_STATE(355)] = 7783,
  [SMALL_STATE(356)] = 7790,
  [SMALL_STATE(357)] = 7797,
  [SMALL_STATE(358)] = 7804,
  [SMALL_STATE(359)] = 7811,
  [SMALL_STATE(360)] = 7818,
  [SMALL_STATE(361)] = 7825,
  [SMALL_STATE(362)] = 7832,
  [SMALL_STATE(363)] = 7839,
  [SMALL_STATE(364)] = 7846,
  [SMALL_STATE(365)] = 7853,
  [SMALL_STATE(366)] = 7860,
  [SMALL_STATE(367)] = 7867,
  [SMALL_STATE(368)] = 7874,
  [SMALL_STATE(369)] = 7881,
  [SMALL_STATE(370)] = 7888,
  [SMALL_STATE(371)] = 7895,
  [SMALL_STATE(372)] = 7902,
  [SMALL_STATE(373)] = 7909,
  [SMALL_STATE(374)] = 7916,
  [SMALL_STATE(375)] = 7923,
  [SMALL_STATE(376)] = 7930,
  [SMALL_STATE(377)] = 7937,
  [SMALL_STATE(378)] = 7944,
  [SMALL_STATE(379)] = 7951,
  [SMALL_STATE(380)] = 7958,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record_field_label, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record_field_label, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 5, .production_id = 47),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_array, 5, .production_id = 47),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_right_pipe, 3, .production_id = 23),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_right_pipe, 3, .production_id = 23),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record, 5, .production_id = 42),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record, 5, .production_id = 42),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record_update, 6, .production_id = 53),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record_update, 6, .production_id = 53),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_constructor_proper_name, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_constructor_proper_name, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_variable_name, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_variable_name, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record_update, 5, .production_id = 43),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record_update, 5, .production_id = 43),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression2, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression2, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression1, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression1, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record_access, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record_access, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_variable, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_variable, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 4, .production_id = 34),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_array, 4, .production_id = 34),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 4),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_array, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_variable, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_variable, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 5, .production_id = 58),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call_arguments, 5, .production_id = 58),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_array, 3, .production_id = 22),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_array, 3, .production_id = 22),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record, 4, .production_id = 31),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record, 4, .production_id = 31),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 3, .production_id = 35),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call_arguments, 3, .production_id = 35),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 4, .production_id = 49),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call_arguments, 4, .production_id = 49),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record, 3, .production_id = 20),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record, 3, .production_id = 20),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call, 2, .production_id = 14),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call, 2, .production_id = 14),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_parens, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_parens, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(309),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(221),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(315),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_call_arguments, 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_call_arguments, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record_update, 7, .production_id = 61),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_record_update, 7, .production_id = 61),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_constructor, 1),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_constructor, 1),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_let_repeat1, 2), SHIFT_REPEAT(166),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_let_repeat1, 2),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_let_repeat1, 2), SHIFT_REPEAT(129),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_let_repeat1, 2), SHIFT_REPEAT(158),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_constructor, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_constructor, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression3, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression3, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 8, .production_id = 69),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_if, 6, .production_id = 57),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 7, .production_id = 63),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 8, .production_id = 70),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_let, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 5, .production_id = 46),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect, 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 6, .production_id = 56),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 6, .production_id = 55),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 7, .production_id = 64),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function, 9, .production_id = 71),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_match, 5, .production_id = 48),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor_proper_name, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type1, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variable, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_proper_name, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(180),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_constructor, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(370),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_closed_record, 3, .production_id = 20),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_closed_record, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_open_record, 6, .production_id = 60),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call_arguments, 4, .production_id = 49),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_open_record, 5, .production_id = 51),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_closed_record, 5, .production_id = 42),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call_arguments, 5, .production_id = 58),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_bind_name, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_open_record, 7, .production_id = 67),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call, 2, .production_id = 14),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_closed_record, 4, .production_id = 31),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_call_arguments, 3, .production_id = 35),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_parens, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 5, .production_id = 15),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 5, .production_id = 15),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 7, .production_id = 66),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 3, .production_id = 5),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 3, .production_id = 5),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_unused, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 6, .production_id = 25),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 6, .production_id = 25),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 7, .production_id = 37),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 7, .production_id = 37),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 3, .production_id = 20),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 6, .production_id = 26),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 6, .production_id = 26),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 4, .production_id = 9),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 4, .production_id = 9),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 4, .production_id = 8),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 4, .production_id = 8),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 5, .production_id = 16),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_import, 5, .production_id = 16),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_variable, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_header, 5, .production_id = 7),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_header, 5, .production_id = 7),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list_item_type, 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 5, .production_id = 42),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 6, .production_id = 59),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 5, .production_id = 50),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_function, 4, .production_id = 36),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 4, .production_id = 31),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor_fields, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_constructor, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_declaration, 6, .production_id = 27),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_alias_declaration, 6, .production_id = 27),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_empty, 3, .production_id = 6),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration_empty, 3, .production_id = 6),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_let_value_declaration, 5, .production_id = 54),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_let_value_declaration, 5, .production_id = 54),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 8, .production_id = 52),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 8, .production_id = 52),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function_parameter, 1, .production_id = 21),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 2),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_match_repeat1, 2), SHIFT_REPEAT(117),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_match_repeat1, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor, 1, .production_id = 10),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_empty, 4, .production_id = 11),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration_empty, 4, .production_id = 11),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_value_declaration, 4, .production_id = 12),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreign_value_declaration, 4, .production_id = 12),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_let_value_declaration, 4, .production_id = 45),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_let_value_declaration, 4, .production_id = 45),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 5, .production_id = 18),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 5, .production_id = 18),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 7, .production_id = 41),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 7, .production_id = 41),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 7, .production_id = 40),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 7, .production_id = 40),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_declaration, 7, .production_id = 38),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_alias_declaration, 7, .production_id = 38),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_declaration, 5, .production_id = 24),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_declaration, 5, .production_id = 24),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_call_arguments_repeat1, 2),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_call_arguments_repeat1, 2), SHIFT_REPEAT(13),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_declaration, 4, .production_id = 13),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_declaration, 4, .production_id = 13),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 6, .production_id = 30),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 6, .production_id = 30),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 6, .production_id = 29),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 6, .production_id = 29),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exposing_list_repeat1, 2),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exposing_list_repeat1, 2), SHIFT_REPEAT(149),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list_item_type_name, 1),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_variables_repeat1, 2),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_variables_repeat1, 2), SHIFT_REPEAT(283),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_repeat1, 2),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_repeat1, 2), SHIFT_REPEAT(249),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_record_repeat1, 2), SHIFT_REPEAT(264),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_record_repeat1, 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_function_repeat1, 2),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_function_repeat1, 2), SHIFT_REPEAT(102),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_let_binder, 1, .production_id = 21),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_name, 1),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_name, 1),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__everything, 3),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_record_update_target, 1),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_declaration_constructor_fields_repeat1, 2),
  [696] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_declaration_constructor_fields_repeat1, 2), SHIFT_REPEAT(57),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_constructor_fields_repeat1, 2),
  [705] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_constructor_fields_repeat1, 2), SHIFT_REPEAT(116),
  [708] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_closed_record_repeat1, 2), SHIFT_REPEAT(222),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_closed_record_repeat1, 2),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_match_arm, 4, .production_id = 65),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record_field, 3, .production_id = 32),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variables, 5, .production_id = 39),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_fields, 3, .production_id = 20),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier, 2),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_open_record_row_variable, 1),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record_field_label, 1),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_function_parameter, 2, .production_id = 33),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_fields, 4, .production_id = 31),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor_fields, 5, .production_id = 42),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_expression, 1),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_constructor, 2, .production_id = 19),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list_item_type, 2),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list_item_type_constructors, 1),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_declaration_name, 1),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_record_field, 3, .production_id = 32),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variable, 1),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import_alias, 1),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list_item_value, 1),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variables, 4, .production_id = 28),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration_variables, 3, .production_id = 17),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_let_binder, 2, .production_id = 33),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import_package, 3),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type_annotation, 2),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_expression, 3, .production_id = 44),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list, 4),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list, 5),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_everything, 1),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_value_declaration_name, 1),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_bind, 5, .production_id = 62),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exposing_list, 3),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_return, 2),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_effect_let, 6, .production_id = 68),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [903] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__name,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
