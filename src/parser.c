#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 191
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 83
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 17

enum {
  sym_comment = 1,
  anon_sym_main = 2,
  anon_sym_package = 3,
  anon_sym_SEMI = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_import = 7,
  aux_sym_notify_option_token1 = 8,
  anon_sym_notify = 9,
  anon_sym_true = 10,
  anon_sym_false = 11,
  sym_integer = 12,
  anon_sym_COLON = 13,
  anon_sym_LPAREN = 14,
  anon_sym_COMMA = 15,
  anon_sym_RPAREN = 16,
  anon_sym_component = 17,
  anon_sym_transient = 18,
  anon_sym_enum = 19,
  anon_sym_system = 20,
  anon_sym_action = 21,
  anon_sym_with = 22,
  anon_sym_readwrite = 23,
  anon_sym_readonly = 24,
  anon_sym_writeonly = 25,
  anon_sym_adds = 26,
  anon_sym_removes = 27,
  anon_sym_exclude = 28,
  anon_sym_include = 29,
  sym_number = 30,
  anon_sym_EQ = 31,
  anon_sym_i32 = 32,
  anon_sym_u32 = 33,
  anon_sym_f32 = 34,
  anon_sym_i16 = 35,
  anon_sym_u16 = 36,
  anon_sym_i8 = 37,
  anon_sym_u8 = 38,
  anon_sym_entity = 39,
  anon_sym_LBRACK = 40,
  anon_sym_RBRACK = 41,
  sym_package_identifier = 42,
  sym_declaration_identifier = 43,
  sym_declaration_lookup = 44,
  sym_source_file = 45,
  sym_package_statement = 46,
  sym_import_statement = 47,
  sym__declaration_statement = 48,
  sym_notify_option = 49,
  sym__notify_shorthand = 50,
  sym__notify_block = 51,
  sym_notify_statement = 52,
  sym_boolean = 53,
  sym_parameter_name = 54,
  sym_parameter_value = 55,
  sym_parameter = 56,
  sym_parameters = 57,
  sym_component_statement = 58,
  sym_transient_statement = 59,
  sym_enum_statement = 60,
  sym_system_statement = 61,
  sym_action_statement = 62,
  sym_with_statement = 63,
  sym_system_capability = 64,
  sym__system_capability_statement_with_shorthand = 65,
  sym__system_capability_statement = 66,
  sym_system_capability_statement = 67,
  sym_enum_value_statement = 68,
  sym_builtin_field_type = 69,
  sym_user_field_type = 70,
  sym__field_type = 71,
  sym_field_statement = 72,
  aux_sym_source_file_repeat1 = 73,
  aux_sym_source_file_repeat2 = 74,
  aux_sym__notify_block_repeat1 = 75,
  aux_sym_parameters_repeat1 = 76,
  aux_sym_component_statement_repeat1 = 77,
  aux_sym_enum_statement_repeat1 = 78,
  aux_sym_system_statement_repeat1 = 79,
  aux_sym_action_statement_repeat1 = 80,
  aux_sym_with_statement_repeat1 = 81,
  aux_sym__system_capability_statement_repeat1 = 82,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_main] = "main",
  [anon_sym_package] = "package",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_import] = "import",
  [aux_sym_notify_option_token1] = "notify_option_token1",
  [anon_sym_notify] = "notify",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_integer] = "integer",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_component] = "component",
  [anon_sym_transient] = "transient",
  [anon_sym_enum] = "enum",
  [anon_sym_system] = "system",
  [anon_sym_action] = "action",
  [anon_sym_with] = "with",
  [anon_sym_readwrite] = "readwrite",
  [anon_sym_readonly] = "readonly",
  [anon_sym_writeonly] = "writeonly",
  [anon_sym_adds] = "adds",
  [anon_sym_removes] = "removes",
  [anon_sym_exclude] = "exclude",
  [anon_sym_include] = "include",
  [sym_number] = "number",
  [anon_sym_EQ] = "=",
  [anon_sym_i32] = "i32",
  [anon_sym_u32] = "u32",
  [anon_sym_f32] = "f32",
  [anon_sym_i16] = "i16",
  [anon_sym_u16] = "u16",
  [anon_sym_i8] = "i8",
  [anon_sym_u8] = "u8",
  [anon_sym_entity] = "entity",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_package_identifier] = "package_identifier",
  [sym_declaration_identifier] = "declaration_identifier",
  [sym_declaration_lookup] = "declaration_lookup",
  [sym_source_file] = "source_file",
  [sym_package_statement] = "package_statement",
  [sym_import_statement] = "import_statement",
  [sym__declaration_statement] = "_declaration_statement",
  [sym_notify_option] = "notify_option",
  [sym__notify_shorthand] = "_notify_shorthand",
  [sym__notify_block] = "_notify_block",
  [sym_notify_statement] = "notify_statement",
  [sym_boolean] = "boolean",
  [sym_parameter_name] = "parameter_name",
  [sym_parameter_value] = "parameter_value",
  [sym_parameter] = "parameter",
  [sym_parameters] = "parameters",
  [sym_component_statement] = "component_statement",
  [sym_transient_statement] = "transient_statement",
  [sym_enum_statement] = "enum_statement",
  [sym_system_statement] = "system_statement",
  [sym_action_statement] = "action_statement",
  [sym_with_statement] = "with_statement",
  [sym_system_capability] = "system_capability",
  [sym__system_capability_statement_with_shorthand] = "_system_capability_statement_with_shorthand",
  [sym__system_capability_statement] = "_system_capability_statement",
  [sym_system_capability_statement] = "system_capability_statement",
  [sym_enum_value_statement] = "enum_value_statement",
  [sym_builtin_field_type] = "builtin_field_type",
  [sym_user_field_type] = "user_field_type",
  [sym__field_type] = "_field_type",
  [sym_field_statement] = "field_statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym__notify_block_repeat1] = "_notify_block_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_component_statement_repeat1] = "component_statement_repeat1",
  [aux_sym_enum_statement_repeat1] = "enum_statement_repeat1",
  [aux_sym_system_statement_repeat1] = "system_statement_repeat1",
  [aux_sym_action_statement_repeat1] = "action_statement_repeat1",
  [aux_sym_with_statement_repeat1] = "with_statement_repeat1",
  [aux_sym__system_capability_statement_repeat1] = "_system_capability_statement_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_main] = anon_sym_main,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_import] = anon_sym_import,
  [aux_sym_notify_option_token1] = aux_sym_notify_option_token1,
  [anon_sym_notify] = anon_sym_notify,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_integer] = sym_integer,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_component] = anon_sym_component,
  [anon_sym_transient] = anon_sym_transient,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_system] = anon_sym_system,
  [anon_sym_action] = anon_sym_action,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_readwrite] = anon_sym_readwrite,
  [anon_sym_readonly] = anon_sym_readonly,
  [anon_sym_writeonly] = anon_sym_writeonly,
  [anon_sym_adds] = anon_sym_adds,
  [anon_sym_removes] = anon_sym_removes,
  [anon_sym_exclude] = anon_sym_exclude,
  [anon_sym_include] = anon_sym_include,
  [sym_number] = sym_number,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_f32] = anon_sym_f32,
  [anon_sym_i16] = anon_sym_i16,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_i8] = anon_sym_i8,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_entity] = anon_sym_entity,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_package_identifier] = sym_package_identifier,
  [sym_declaration_identifier] = sym_declaration_identifier,
  [sym_declaration_lookup] = sym_declaration_lookup,
  [sym_source_file] = sym_source_file,
  [sym_package_statement] = sym_package_statement,
  [sym_import_statement] = sym_import_statement,
  [sym__declaration_statement] = sym__declaration_statement,
  [sym_notify_option] = sym_notify_option,
  [sym__notify_shorthand] = sym__notify_shorthand,
  [sym__notify_block] = sym__notify_block,
  [sym_notify_statement] = sym_notify_statement,
  [sym_boolean] = sym_boolean,
  [sym_parameter_name] = sym_parameter_name,
  [sym_parameter_value] = sym_parameter_value,
  [sym_parameter] = sym_parameter,
  [sym_parameters] = sym_parameters,
  [sym_component_statement] = sym_component_statement,
  [sym_transient_statement] = sym_transient_statement,
  [sym_enum_statement] = sym_enum_statement,
  [sym_system_statement] = sym_system_statement,
  [sym_action_statement] = sym_action_statement,
  [sym_with_statement] = sym_with_statement,
  [sym_system_capability] = sym_system_capability,
  [sym__system_capability_statement_with_shorthand] = sym__system_capability_statement_with_shorthand,
  [sym__system_capability_statement] = sym__system_capability_statement,
  [sym_system_capability_statement] = sym_system_capability_statement,
  [sym_enum_value_statement] = sym_enum_value_statement,
  [sym_builtin_field_type] = sym_builtin_field_type,
  [sym_user_field_type] = sym_user_field_type,
  [sym__field_type] = sym__field_type,
  [sym_field_statement] = sym_field_statement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym__notify_block_repeat1] = aux_sym__notify_block_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_component_statement_repeat1] = aux_sym_component_statement_repeat1,
  [aux_sym_enum_statement_repeat1] = aux_sym_enum_statement_repeat1,
  [aux_sym_system_statement_repeat1] = aux_sym_system_statement_repeat1,
  [aux_sym_action_statement_repeat1] = aux_sym_action_statement_repeat1,
  [aux_sym_with_statement_repeat1] = aux_sym_with_statement_repeat1,
  [aux_sym__system_capability_statement_repeat1] = aux_sym__system_capability_statement_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_main] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_notify_option_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_notify] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_component] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transient] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_system] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_action] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_readwrite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_readonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_writeonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adds] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_removes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_entity] = {
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
  [sym_package_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration_lookup] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_package_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_notify_option] = {
    .visible = true,
    .named = true,
  },
  [sym__notify_shorthand] = {
    .visible = false,
    .named = true,
  },
  [sym__notify_block] = {
    .visible = false,
    .named = true,
  },
  [sym_notify_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_name] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_value] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_component_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_transient_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_system_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_action_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_with_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_system_capability] = {
    .visible = true,
    .named = true,
  },
  [sym__system_capability_statement_with_shorthand] = {
    .visible = false,
    .named = true,
  },
  [sym__system_capability_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_system_capability_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_value_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_field_type] = {
    .visible = true,
    .named = true,
  },
  [sym_user_field_type] = {
    .visible = true,
    .named = true,
  },
  [sym__field_type] = {
    .visible = false,
    .named = true,
  },
  [sym_field_statement] = {
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
  [aux_sym__notify_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_component_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_action_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_with_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__system_capability_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_component = 1,
  field_component_lookup = 2,
  field_field_name = 3,
  field_field_type = 4,
  field_length = 5,
  field_name = 6,
  field_option = 7,
  field_parameters = 8,
  field_value = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_component] = "component",
  [field_component_lookup] = "component_lookup",
  [field_field_name] = "field_name",
  [field_field_type] = "field_type",
  [field_length] = "length",
  [field_name] = "name",
  [field_option] = "option",
  [field_parameters] = "parameters",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 3},
  [9] = {.index = 12, .length = 3},
  [10] = {.index = 15, .length = 1},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 2},
  [13] = {.index = 20, .length = 2},
  [14] = {.index = 22, .length = 4},
  [15] = {.index = 26, .length = 2},
  [16] = {.index = 28, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 2},
  [2] =
    {field_field_type, 0},
  [3] =
    {field_name, 0},
  [4] =
    {field_name, 1},
    {field_parameters, 2},
  [6] =
    {field_component, 0, .inherited = true},
    {field_option, 0, .inherited = true},
  [8] =
    {field_component_lookup, 0, .inherited = true},
  [9] =
    {field_field_name, 1},
    {field_field_type, 0, .inherited = true},
    {field_length, 0, .inherited = true},
  [12] =
    {field_name, 0},
    {field_value, 1},
    {field_value, 2},
  [15] =
    {field_component_lookup, 1},
  [16] =
    {field_field_type, 0},
    {field_length, 2},
  [18] =
    {field_name, 0},
    {field_value, 2},
  [20] =
    {field_component, 2, .inherited = true},
    {field_option, 2, .inherited = true},
  [22] =
    {field_component, 0, .inherited = true},
    {field_component, 1, .inherited = true},
    {field_option, 0, .inherited = true},
    {field_option, 1, .inherited = true},
  [26] =
    {field_component, 1},
    {field_option, 0},
  [28] =
    {field_field_name, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 40,
  [44] = 42,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 7,
  [50] = 11,
  [51] = 13,
  [52] = 17,
  [53] = 14,
  [54] = 18,
  [55] = 9,
  [56] = 19,
  [57] = 20,
  [58] = 58,
  [59] = 10,
  [60] = 12,
  [61] = 16,
  [62] = 22,
  [63] = 8,
  [64] = 15,
  [65] = 21,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 110,
  [112] = 112,
  [113] = 107,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 104,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 116,
  [122] = 119,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 128,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 141,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 140,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 164,
  [179] = 179,
  [180] = 165,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 159,
  [188] = 188,
  [189] = 183,
  [190] = 181,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(116);
      if (lookahead == '(') ADVANCE(133);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == ',') ADVANCE(134);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(156);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == ';') ADVANCE(121);
      if (lookahead == '=') ADVANCE(157);
      if (lookahead == '[') ADVANCE(174);
      if (lookahead == ']') ADVANCE(175);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 'm') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == 'p') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(34);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == 'u') ADVANCE(13);
      if (lookahead == 'w') ADVANCE(51);
      if (lookahead == '{') ADVANCE(122);
      if (lookahead == '}') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '{') ADVANCE(122);
      if (lookahead == '}') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(118);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(4);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ';') ADVANCE(121);
      if (lookahead == '[') ADVANCE(174);
      if (lookahead == '}') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead == 'f') ADVANCE(183);
      if (lookahead == 'i') ADVANCE(177);
      if (lookahead == 'n') ADVANCE(215);
      if (lookahead == 'r') ADVANCE(194);
      if (lookahead == 'u') ADVANCE(179);
      if (lookahead == 'w') ADVANCE(217);
      if (lookahead == '}') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead == 'f') ADVANCE(183);
      if (lookahead == 'i') ADVANCE(178);
      if (lookahead == 'u') ADVANCE(179);
      if (lookahead == '}') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(20);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(117);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 12:
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == '3') ADVANCE(15);
      if (lookahead == '8') ADVANCE(168);
      if (lookahead == 'm') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 13:
      if (lookahead == '1') ADVANCE(19);
      if (lookahead == '3') ADVANCE(16);
      if (lookahead == '8') ADVANCE(170);
      END_STATE();
    case 14:
      if (lookahead == '2') ADVANCE(162);
      END_STATE();
    case 15:
      if (lookahead == '2') ADVANCE(158);
      END_STATE();
    case 16:
      if (lookahead == '2') ADVANCE(160);
      END_STATE();
    case 17:
      if (lookahead == '3') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 18:
      if (lookahead == '6') ADVANCE(164);
      END_STATE();
    case 19:
      if (lookahead == '6') ADVANCE(166);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(111);
      END_STATE();
    case 47:
      if (lookahead == 'g') ADVANCE(39);
      END_STATE();
    case 48:
      if (lookahead == 'h') ADVANCE(141);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 57:
      if (lookahead == 'k') ADVANCE(22);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(138);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(139);
      END_STATE();
    case 65:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == 'x') ADVANCE(28);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(69);
      if (lookahead == 'w') ADVANCE(88);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 83:
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 84:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(150);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 92:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 93:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(52);
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 105:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 106:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 107:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 108:
      if (lookahead == 'v') ADVANCE(42);
      END_STATE();
    case 109:
      if (lookahead == 'y') ADVANCE(92);
      END_STATE();
    case 110:
      if (lookahead == 'y') ADVANCE(172);
      END_STATE();
    case 111:
      if (lookahead == 'y') ADVANCE(126);
      END_STATE();
    case 112:
      if (lookahead == 'y') ADVANCE(144);
      END_STATE();
    case 113:
      if (lookahead == 'y') ADVANCE(146);
      END_STATE();
    case 114:
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 115:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_main);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_notify_option_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_notify);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_notify);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '\'' ||
          lookahead == '.') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_transient);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_readwrite);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_readwrite);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_readonly);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_writeonly);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_writeonly);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_adds);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_adds);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_removes);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_removes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_exclude);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_exclude);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_include);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_f32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_i16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_entity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_package_identifier);
      if (lookahead == '.') ADVANCE(4);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == '1') ADVANCE(184);
      if (lookahead == '3') ADVANCE(181);
      if (lookahead == '8') ADVANCE(169);
      if (lookahead == 'n') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == '1') ADVANCE(184);
      if (lookahead == '3') ADVANCE(181);
      if (lookahead == '8') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == '1') ADVANCE(185);
      if (lookahead == '3') ADVANCE(182);
      if (lookahead == '8') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == '2') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == '2') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == '2') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == '3') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == '6') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == '6') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'm') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'c') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'c') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'd') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'd') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'd') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'd') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'd') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'e') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'e') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'e') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'e') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'e') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'e') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'f') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'i') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'i') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'i') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'i') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'l') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'l') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'l') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'l') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'n') ADVANCE(225);
      if (lookahead == 'x') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'n') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'n') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'n') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'o') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'o') ADVANCE(211);
      if (lookahead == 'w') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'o') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'o') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'r') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'r') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 's') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 's') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 't') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 't') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 't') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 't') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 't') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'u') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'u') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'v') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'y') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'y') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'y') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'y') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_declaration_lookup);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
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
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
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
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 6},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 9},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 5},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 5},
  [182] = {.lex_state = 6},
  [183] = {.lex_state = 10},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 9},
  [186] = {.lex_state = 9},
  [187] = {.lex_state = 5},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_main] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_notify] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_component] = ACTIONS(1),
    [anon_sym_transient] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_system] = ACTIONS(1),
    [anon_sym_action] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_readwrite] = ACTIONS(1),
    [anon_sym_readonly] = ACTIONS(1),
    [anon_sym_writeonly] = ACTIONS(1),
    [anon_sym_adds] = ACTIONS(1),
    [anon_sym_removes] = ACTIONS(1),
    [anon_sym_exclude] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_entity] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(170),
    [sym_package_statement] = STATE(30),
    [sym_import_statement] = STATE(29),
    [sym__declaration_statement] = STATE(46),
    [sym_component_statement] = STATE(46),
    [sym_transient_statement] = STATE(46),
    [sym_enum_statement] = STATE(46),
    [sym_system_statement] = STATE(46),
    [sym_action_statement] = STATE(46),
    [aux_sym_source_file_repeat1] = STATE(29),
    [aux_sym_source_file_repeat2] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_main] = ACTIONS(7),
    [anon_sym_package] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_component] = ACTIONS(13),
    [anon_sym_transient] = ACTIONS(15),
    [anon_sym_enum] = ACTIONS(17),
    [anon_sym_system] = ACTIONS(19),
    [anon_sym_action] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(25), 1,
      anon_sym_notify,
    ACTIONS(31), 1,
      sym_declaration_identifier,
    STATE(8), 1,
      sym__notify_shorthand,
    STATE(19), 1,
      sym__system_capability_statement,
    STATE(21), 1,
      sym__notify_block,
    STATE(22), 1,
      sym__system_capability_statement_with_shorthand,
    STATE(187), 1,
      sym__field_type,
    STATE(189), 1,
      sym_system_capability,
    STATE(157), 2,
      sym_builtin_field_type,
      sym_user_field_type,
    STATE(5), 4,
      sym_notify_statement,
      sym_system_capability_statement,
      sym_field_statement,
      aux_sym_action_statement_repeat1,
    ACTIONS(27), 7,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
    ACTIONS(29), 8,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
  [60] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_notify,
    ACTIONS(31), 1,
      sym_declaration_identifier,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym__notify_shorthand,
    STATE(19), 1,
      sym__system_capability_statement,
    STATE(21), 1,
      sym__notify_block,
    STATE(22), 1,
      sym__system_capability_statement_with_shorthand,
    STATE(187), 1,
      sym__field_type,
    STATE(189), 1,
      sym_system_capability,
    STATE(157), 2,
      sym_builtin_field_type,
      sym_user_field_type,
    STATE(4), 4,
      sym_notify_statement,
      sym_system_capability_statement,
      sym_field_statement,
      aux_sym_action_statement_repeat1,
    ACTIONS(27), 7,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
    ACTIONS(29), 8,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
  [120] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    ACTIONS(37), 1,
      anon_sym_notify,
    ACTIONS(46), 1,
      sym_declaration_identifier,
    STATE(8), 1,
      sym__notify_shorthand,
    STATE(19), 1,
      sym__system_capability_statement,
    STATE(21), 1,
      sym__notify_block,
    STATE(22), 1,
      sym__system_capability_statement_with_shorthand,
    STATE(187), 1,
      sym__field_type,
    STATE(189), 1,
      sym_system_capability,
    STATE(157), 2,
      sym_builtin_field_type,
      sym_user_field_type,
    STATE(4), 4,
      sym_notify_statement,
      sym_system_capability_statement,
      sym_field_statement,
      aux_sym_action_statement_repeat1,
    ACTIONS(40), 7,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
    ACTIONS(43), 8,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
  [180] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_notify,
    ACTIONS(31), 1,
      sym_declaration_identifier,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym__notify_shorthand,
    STATE(19), 1,
      sym__system_capability_statement,
    STATE(21), 1,
      sym__notify_block,
    STATE(22), 1,
      sym__system_capability_statement_with_shorthand,
    STATE(187), 1,
      sym__field_type,
    STATE(189), 1,
      sym_system_capability,
    STATE(157), 2,
      sym_builtin_field_type,
      sym_user_field_type,
    STATE(4), 4,
      sym_notify_statement,
      sym_system_capability_statement,
      sym_field_statement,
      aux_sym_action_statement_repeat1,
    ACTIONS(27), 7,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
    ACTIONS(29), 8,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
  [240] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_notify,
    ACTIONS(31), 1,
      sym_declaration_identifier,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym__notify_shorthand,
    STATE(19), 1,
      sym__system_capability_statement,
    STATE(21), 1,
      sym__notify_block,
    STATE(22), 1,
      sym__system_capability_statement_with_shorthand,
    STATE(187), 1,
      sym__field_type,
    STATE(189), 1,
      sym_system_capability,
    STATE(157), 2,
      sym_builtin_field_type,
      sym_user_field_type,
    STATE(3), 4,
      sym_notify_statement,
      sym_system_capability_statement,
      sym_field_statement,
      aux_sym_action_statement_repeat1,
    ACTIONS(27), 7,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
    ACTIONS(29), 8,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
  [300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 17,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 17,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(63), 17,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    ACTIONS(67), 17,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 17,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(75), 17,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    ACTIONS(79), 17,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    ACTIONS(83), 17,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(87), 17,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(91), 17,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    ACTIONS(95), 17,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    ACTIONS(99), 17,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    ACTIONS(103), 17,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    ACTIONS(107), 17,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    ACTIONS(111), 17,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    ACTIONS(103), 17,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [716] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    ACTIONS(115), 1,
      anon_sym_notify,
    STATE(56), 1,
      sym__system_capability_statement,
    STATE(62), 1,
      sym__system_capability_statement_with_shorthand,
    STATE(63), 1,
      sym__notify_shorthand,
    STATE(65), 1,
      sym__notify_block,
    STATE(183), 1,
      sym_system_capability,
    STATE(23), 3,
      sym_notify_statement,
      sym_system_capability_statement,
      aux_sym_system_statement_repeat1,
    ACTIONS(118), 7,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [755] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    ACTIONS(123), 1,
      anon_sym_notify,
    STATE(56), 1,
      sym__system_capability_statement,
    STATE(62), 1,
      sym__system_capability_statement_with_shorthand,
    STATE(63), 1,
      sym__notify_shorthand,
    STATE(65), 1,
      sym__notify_block,
    STATE(183), 1,
      sym_system_capability,
    STATE(23), 3,
      sym_notify_statement,
      sym_system_capability_statement,
      aux_sym_system_statement_repeat1,
    ACTIONS(125), 7,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [794] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_notify,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym__system_capability_statement,
    STATE(62), 1,
      sym__system_capability_statement_with_shorthand,
    STATE(63), 1,
      sym__notify_shorthand,
    STATE(65), 1,
      sym__notify_block,
    STATE(183), 1,
      sym_system_capability,
    STATE(26), 3,
      sym_notify_statement,
      sym_system_capability_statement,
      aux_sym_system_statement_repeat1,
    ACTIONS(125), 7,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [833] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_notify,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym__system_capability_statement,
    STATE(62), 1,
      sym__system_capability_statement_with_shorthand,
    STATE(63), 1,
      sym__notify_shorthand,
    STATE(65), 1,
      sym__notify_block,
    STATE(183), 1,
      sym_system_capability,
    STATE(23), 3,
      sym_notify_statement,
      sym_system_capability_statement,
      aux_sym_system_statement_repeat1,
    ACTIONS(125), 7,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [872] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_notify,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym__system_capability_statement,
    STATE(62), 1,
      sym__system_capability_statement_with_shorthand,
    STATE(63), 1,
      sym__notify_shorthand,
    STATE(65), 1,
      sym__notify_block,
    STATE(183), 1,
      sym_system_capability,
    STATE(24), 3,
      sym_notify_statement,
      sym_system_capability_statement,
      aux_sym_system_statement_repeat1,
    ACTIONS(125), 7,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [911] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_component,
    ACTIONS(15), 1,
      anon_sym_transient,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_system,
    ACTIONS(21), 1,
      anon_sym_action,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    STATE(58), 2,
      sym_import_statement,
      aux_sym_source_file_repeat1,
    STATE(47), 7,
      sym__declaration_statement,
      sym_component_statement,
      sym_transient_statement,
      sym_enum_statement,
      sym_system_statement,
      sym_action_statement,
      aux_sym_source_file_repeat2,
  [949] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_component,
    ACTIONS(15), 1,
      anon_sym_transient,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_system,
    ACTIONS(21), 1,
      anon_sym_action,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    STATE(58), 2,
      sym_import_statement,
      aux_sym_source_file_repeat1,
    STATE(41), 7,
      sym__declaration_statement,
      sym_component_statement,
      sym_transient_statement,
      sym_enum_statement,
      sym_system_statement,
      sym_action_statement,
      aux_sym_source_file_repeat2,
  [987] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_component,
    ACTIONS(15), 1,
      anon_sym_transient,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_system,
    ACTIONS(21), 1,
      anon_sym_action,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    STATE(28), 2,
      sym_import_statement,
      aux_sym_source_file_repeat1,
    STATE(41), 7,
      sym__declaration_statement,
      sym_component_statement,
      sym_transient_statement,
      sym_enum_statement,
      sym_system_statement,
      sym_action_statement,
      aux_sym_source_file_repeat2,
  [1025] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_declaration_identifier,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(159), 1,
      sym__field_type,
    STATE(36), 2,
      sym_field_statement,
      aux_sym_component_statement_repeat1,
    STATE(157), 2,
      sym_builtin_field_type,
      sym_user_field_type,
    ACTIONS(29), 8,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
  [1056] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_declaration_identifier,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    STATE(159), 1,
      sym__field_type,
    STATE(33), 2,
      sym_field_statement,
      aux_sym_component_statement_repeat1,
    STATE(157), 2,
      sym_builtin_field_type,
      sym_user_field_type,
    ACTIONS(29), 8,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
  [1087] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    ACTIONS(146), 1,
      sym_declaration_identifier,
    STATE(159), 1,
      sym__field_type,
    STATE(33), 2,
      sym_field_statement,
      aux_sym_component_statement_repeat1,
    STATE(157), 2,
      sym_builtin_field_type,
      sym_user_field_type,
    ACTIONS(143), 8,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
  [1118] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_declaration_identifier,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    STATE(159), 1,
      sym__field_type,
    STATE(39), 2,
      sym_field_statement,
      aux_sym_component_statement_repeat1,
    STATE(157), 2,
      sym_builtin_field_type,
      sym_user_field_type,
    ACTIONS(29), 8,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
  [1149] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_declaration_identifier,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    STATE(159), 1,
      sym__field_type,
    STATE(32), 2,
      sym_field_statement,
      aux_sym_component_statement_repeat1,
    STATE(157), 2,
      sym_builtin_field_type,
      sym_user_field_type,
    ACTIONS(29), 8,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
  [1180] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_declaration_identifier,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    STATE(159), 1,
      sym__field_type,
    STATE(33), 2,
      sym_field_statement,
      aux_sym_component_statement_repeat1,
    STATE(157), 2,
      sym_builtin_field_type,
      sym_user_field_type,
    ACTIONS(29), 8,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
  [1211] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_declaration_identifier,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    STATE(159), 1,
      sym__field_type,
    STATE(38), 2,
      sym_field_statement,
      aux_sym_component_statement_repeat1,
    STATE(157), 2,
      sym_builtin_field_type,
      sym_user_field_type,
    ACTIONS(29), 8,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
  [1242] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_declaration_identifier,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    STATE(159), 1,
      sym__field_type,
    STATE(33), 2,
      sym_field_statement,
      aux_sym_component_statement_repeat1,
    STATE(157), 2,
      sym_builtin_field_type,
      sym_user_field_type,
    ACTIONS(29), 8,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
  [1273] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_declaration_identifier,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    STATE(159), 1,
      sym__field_type,
    STATE(33), 2,
      sym_field_statement,
      aux_sym_component_statement_repeat1,
    STATE(157), 2,
      sym_builtin_field_type,
      sym_user_field_type,
    ACTIONS(29), 8,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
  [1304] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym__system_capability_statement,
    STATE(62), 1,
      sym__system_capability_statement_with_shorthand,
    STATE(183), 1,
      sym_system_capability,
    STATE(42), 2,
      sym_system_capability_statement,
      aux_sym_with_statement_repeat1,
    ACTIONS(125), 7,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1333] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_component,
    ACTIONS(15), 1,
      anon_sym_transient,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_system,
    ACTIONS(21), 1,
      anon_sym_action,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    STATE(48), 7,
      sym__declaration_statement,
      sym_component_statement,
      sym_transient_statement,
      sym_enum_statement,
      sym_system_statement,
      sym_action_statement,
      aux_sym_source_file_repeat2,
  [1364] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym__system_capability_statement,
    STATE(62), 1,
      sym__system_capability_statement_with_shorthand,
    STATE(183), 1,
      sym_system_capability,
    STATE(45), 2,
      sym_system_capability_statement,
      aux_sym_with_statement_repeat1,
    ACTIONS(125), 7,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1393] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym__system_capability_statement,
    STATE(62), 1,
      sym__system_capability_statement_with_shorthand,
    STATE(183), 1,
      sym_system_capability,
    STATE(44), 2,
      sym_system_capability_statement,
      aux_sym_with_statement_repeat1,
    ACTIONS(125), 7,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1422] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym__system_capability_statement,
    STATE(62), 1,
      sym__system_capability_statement_with_shorthand,
    STATE(183), 1,
      sym_system_capability,
    STATE(45), 2,
      sym_system_capability_statement,
      aux_sym_with_statement_repeat1,
    ACTIONS(125), 7,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1451] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym__system_capability_statement,
    STATE(62), 1,
      sym__system_capability_statement_with_shorthand,
    STATE(183), 1,
      sym_system_capability,
    STATE(45), 2,
      sym_system_capability_statement,
      aux_sym_with_statement_repeat1,
    ACTIONS(171), 7,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1480] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_component,
    ACTIONS(15), 1,
      anon_sym_transient,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_system,
    ACTIONS(21), 1,
      anon_sym_action,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    STATE(48), 7,
      sym__declaration_statement,
      sym_component_statement,
      sym_transient_statement,
      sym_enum_statement,
      sym_system_statement,
      sym_action_statement,
      aux_sym_source_file_repeat2,
  [1511] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_component,
    ACTIONS(15), 1,
      anon_sym_transient,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_system,
    ACTIONS(21), 1,
      anon_sym_action,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    STATE(48), 7,
      sym__declaration_statement,
      sym_component_statement,
      sym_transient_statement,
      sym_enum_statement,
      sym_system_statement,
      sym_action_statement,
      aux_sym_source_file_repeat2,
  [1542] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
    ACTIONS(178), 1,
      anon_sym_component,
    ACTIONS(181), 1,
      anon_sym_transient,
    ACTIONS(184), 1,
      anon_sym_enum,
    ACTIONS(187), 1,
      anon_sym_system,
    ACTIONS(190), 1,
      anon_sym_action,
    STATE(48), 7,
      sym__declaration_statement,
      sym_component_statement,
      sym_transient_statement,
      sym_enum_statement,
      sym_system_statement,
      sym_action_statement,
      aux_sym_source_file_repeat2,
  [1573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 9,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [1591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 9,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [1609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 10,
      anon_sym_RBRACE,
      anon_sym_notify,
      anon_sym_with,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 10,
      anon_sym_RBRACE,
      anon_sym_notify,
      anon_sym_with,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 10,
      anon_sym_RBRACE,
      anon_sym_notify,
      anon_sym_with,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 9,
      anon_sym_RBRACE,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 9,
      anon_sym_RBRACE,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 9,
      anon_sym_RBRACE,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 9,
      anon_sym_RBRACE,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1717] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_import,
    STATE(58), 2,
      sym_import_statement,
      aux_sym_source_file_repeat1,
    ACTIONS(193), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 9,
      anon_sym_RBRACE,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 9,
      anon_sym_RBRACE,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 9,
      anon_sym_RBRACE,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 9,
      anon_sym_RBRACE,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 9,
      anon_sym_RBRACE,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 9,
      anon_sym_RBRACE,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 9,
      anon_sym_RBRACE,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [2003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [2015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [2027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [2039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [2051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [2063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [2075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [2087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [2099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [2111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [2123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [2135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [2147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [2159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [2171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [2183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [2195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [2207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [2219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [2231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [2243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [2255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [2267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [2279] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      sym_integer,
    STATE(147), 1,
      sym_parameter_value,
    STATE(148), 1,
      sym_boolean,
    ACTIONS(270), 2,
      anon_sym_true,
      anon_sym_false,
  [2296] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      aux_sym_notify_option_token1,
    ACTIONS(276), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      sym_parameter_name,
    STATE(132), 1,
      sym_parameter,
  [2312] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    ACTIONS(280), 1,
      anon_sym_with,
    STATE(119), 2,
      sym_with_statement,
      aux_sym__system_capability_statement_repeat1,
  [2326] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_SEMI,
    ACTIONS(284), 1,
      anon_sym_LBRACE,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    STATE(156), 1,
      sym_parameters,
  [2342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    ACTIONS(290), 1,
      sym_declaration_identifier,
    STATE(125), 2,
      sym_enum_value_statement,
      aux_sym_enum_statement_repeat1,
  [2356] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_RBRACE,
    ACTIONS(294), 1,
      aux_sym_notify_option_token1,
    STATE(116), 1,
      aux_sym__notify_block_repeat1,
    STATE(179), 1,
      sym_notify_option,
  [2372] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(296), 1,
      anon_sym_SEMI,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    STATE(139), 1,
      sym_parameters,
  [2388] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_SEMI,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    STATE(136), 1,
      sym_parameters,
  [2404] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(304), 1,
      anon_sym_SEMI,
    ACTIONS(306), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_with_statement,
  [2420] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_SEMI,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
    ACTIONS(312), 1,
      anon_sym_with,
    STATE(15), 1,
      sym_with_statement,
  [2436] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym_declaration_identifier,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    STATE(125), 2,
      sym_enum_value_statement,
      aux_sym_enum_statement_repeat1,
  [2450] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      aux_sym_notify_option_token1,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    STATE(121), 1,
      aux_sym__notify_block_repeat1,
    STATE(179), 1,
      sym_notify_option,
  [2466] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_SEMI,
    ACTIONS(320), 1,
      anon_sym_LBRACE,
    STATE(154), 1,
      sym_parameters,
  [2482] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym_declaration_identifier,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    STATE(106), 2,
      sym_enum_value_statement,
      aux_sym_enum_statement_repeat1,
  [2496] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      aux_sym_notify_option_token1,
    ACTIONS(324), 1,
      anon_sym_RBRACE,
    STATE(124), 1,
      aux_sym__notify_block_repeat1,
    STATE(179), 1,
      sym_notify_option,
  [2512] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
    STATE(122), 2,
      sym_with_statement,
      aux_sym__system_capability_statement_repeat1,
  [2526] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(328), 1,
      anon_sym_SEMI,
    ACTIONS(330), 1,
      anon_sym_LBRACE,
    STATE(153), 1,
      sym_parameters,
  [2542] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(332), 1,
      anon_sym_RBRACE,
    STATE(120), 2,
      sym_with_statement,
      aux_sym__system_capability_statement_repeat1,
  [2556] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
    ACTIONS(336), 1,
      anon_sym_with,
    STATE(120), 2,
      sym_with_statement,
      aux_sym__system_capability_statement_repeat1,
  [2570] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      aux_sym_notify_option_token1,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
    STATE(124), 1,
      aux_sym__notify_block_repeat1,
    STATE(179), 1,
      sym_notify_option,
  [2586] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_with,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    STATE(120), 2,
      sym_with_statement,
      aux_sym__system_capability_statement_repeat1,
  [2600] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym_declaration_identifier,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    STATE(112), 2,
      sym_enum_value_statement,
      aux_sym_enum_statement_repeat1,
  [2614] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    ACTIONS(347), 1,
      aux_sym_notify_option_token1,
    STATE(124), 1,
      aux_sym__notify_block_repeat1,
    STATE(179), 1,
      sym_notify_option,
  [2630] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    ACTIONS(352), 1,
      sym_declaration_identifier,
    STATE(125), 2,
      sym_enum_value_statement,
      aux_sym_enum_statement_repeat1,
  [2644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_COLON,
    ACTIONS(357), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      aux_sym_parameters_repeat1,
  [2668] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      aux_sym_notify_option_token1,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    STATE(164), 1,
      sym_notify_option,
  [2681] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      aux_sym_notify_option_token1,
    STATE(126), 1,
      sym_parameter_name,
    STATE(146), 1,
      sym_parameter,
  [2694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 3,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2703] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      aux_sym_notify_option_token1,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    STATE(178), 1,
      sym_notify_option,
  [2716] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    STATE(133), 1,
      aux_sym_parameters_repeat1,
  [2729] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(374), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      aux_sym_parameters_repeat1,
  [2742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_SEMI,
    ACTIONS(380), 1,
      anon_sym_LBRACE,
  [2760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_SEMI,
    ACTIONS(384), 1,
      anon_sym_LBRACE,
  [2770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 2,
      anon_sym_RBRACE,
      sym_declaration_identifier,
  [2786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_SEMI,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
  [2796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_SEMI,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
  [2806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_SEMI,
    ACTIONS(400), 1,
      anon_sym_LBRACE,
  [2816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_SEMI,
    ACTIONS(406), 1,
      anon_sym_LBRACE,
  [2834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_SEMI,
    ACTIONS(410), 1,
      anon_sym_LBRACE,
  [2844] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_SEMI,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
  [2854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_SEMI,
    ACTIONS(422), 1,
      anon_sym_LBRACE,
  [2888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 2,
      anon_sym_RBRACE,
      aux_sym_notify_option_token1,
  [2896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_SEMI,
      sym_declaration_identifier,
  [2912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_SEMI,
    ACTIONS(432), 1,
      anon_sym_LBRACE,
  [2922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_SEMI,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
  [2932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_LBRACK,
      sym_declaration_identifier,
  [2940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_SEMI,
    ACTIONS(442), 1,
      anon_sym_LBRACE,
  [2950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_LBRACK,
    ACTIONS(446), 1,
      sym_declaration_identifier,
  [2960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 2,
      anon_sym_LBRACK,
      sym_declaration_identifier,
  [2968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      sym_declaration_identifier,
  [2975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      sym_declaration_identifier,
  [2982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_RBRACE,
  [2989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_RBRACE,
  [2996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_RBRACK,
  [3003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_SEMI,
  [3010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_RBRACE,
  [3017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      sym_number,
  [3024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_SEMI,
  [3031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      sym_declaration_identifier,
  [3038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      sym_package_identifier,
  [3045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      ts_builtin_sym_end,
  [3052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      sym_declaration_identifier,
  [3059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      sym_declaration_identifier,
  [3066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      sym_declaration_identifier,
  [3073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_RBRACE,
  [3080] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      sym_declaration_identifier,
  [3087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_SEMI,
  [3094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_package,
  [3101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_SEMI,
  [3108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      sym_declaration_identifier,
  [3115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_RBRACE,
  [3122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      sym_declaration_identifier,
  [3129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      sym_number,
  [3136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym_declaration_lookup,
  [3143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_EQ,
  [3150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      sym_package_identifier,
  [3157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      sym_package_identifier,
  [3164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      sym_declaration_identifier,
  [3171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      sym_declaration_lookup,
  [3178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      sym_declaration_lookup,
  [3185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_declaration_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 60,
  [SMALL_STATE(4)] = 120,
  [SMALL_STATE(5)] = 180,
  [SMALL_STATE(6)] = 240,
  [SMALL_STATE(7)] = 300,
  [SMALL_STATE(8)] = 326,
  [SMALL_STATE(9)] = 352,
  [SMALL_STATE(10)] = 378,
  [SMALL_STATE(11)] = 404,
  [SMALL_STATE(12)] = 430,
  [SMALL_STATE(13)] = 456,
  [SMALL_STATE(14)] = 482,
  [SMALL_STATE(15)] = 508,
  [SMALL_STATE(16)] = 534,
  [SMALL_STATE(17)] = 560,
  [SMALL_STATE(18)] = 586,
  [SMALL_STATE(19)] = 612,
  [SMALL_STATE(20)] = 638,
  [SMALL_STATE(21)] = 664,
  [SMALL_STATE(22)] = 690,
  [SMALL_STATE(23)] = 716,
  [SMALL_STATE(24)] = 755,
  [SMALL_STATE(25)] = 794,
  [SMALL_STATE(26)] = 833,
  [SMALL_STATE(27)] = 872,
  [SMALL_STATE(28)] = 911,
  [SMALL_STATE(29)] = 949,
  [SMALL_STATE(30)] = 987,
  [SMALL_STATE(31)] = 1025,
  [SMALL_STATE(32)] = 1056,
  [SMALL_STATE(33)] = 1087,
  [SMALL_STATE(34)] = 1118,
  [SMALL_STATE(35)] = 1149,
  [SMALL_STATE(36)] = 1180,
  [SMALL_STATE(37)] = 1211,
  [SMALL_STATE(38)] = 1242,
  [SMALL_STATE(39)] = 1273,
  [SMALL_STATE(40)] = 1304,
  [SMALL_STATE(41)] = 1333,
  [SMALL_STATE(42)] = 1364,
  [SMALL_STATE(43)] = 1393,
  [SMALL_STATE(44)] = 1422,
  [SMALL_STATE(45)] = 1451,
  [SMALL_STATE(46)] = 1480,
  [SMALL_STATE(47)] = 1511,
  [SMALL_STATE(48)] = 1542,
  [SMALL_STATE(49)] = 1573,
  [SMALL_STATE(50)] = 1591,
  [SMALL_STATE(51)] = 1609,
  [SMALL_STATE(52)] = 1625,
  [SMALL_STATE(53)] = 1641,
  [SMALL_STATE(54)] = 1657,
  [SMALL_STATE(55)] = 1672,
  [SMALL_STATE(56)] = 1687,
  [SMALL_STATE(57)] = 1702,
  [SMALL_STATE(58)] = 1717,
  [SMALL_STATE(59)] = 1736,
  [SMALL_STATE(60)] = 1751,
  [SMALL_STATE(61)] = 1766,
  [SMALL_STATE(62)] = 1781,
  [SMALL_STATE(63)] = 1796,
  [SMALL_STATE(64)] = 1811,
  [SMALL_STATE(65)] = 1826,
  [SMALL_STATE(66)] = 1841,
  [SMALL_STATE(67)] = 1854,
  [SMALL_STATE(68)] = 1867,
  [SMALL_STATE(69)] = 1880,
  [SMALL_STATE(70)] = 1893,
  [SMALL_STATE(71)] = 1906,
  [SMALL_STATE(72)] = 1919,
  [SMALL_STATE(73)] = 1931,
  [SMALL_STATE(74)] = 1943,
  [SMALL_STATE(75)] = 1955,
  [SMALL_STATE(76)] = 1967,
  [SMALL_STATE(77)] = 1979,
  [SMALL_STATE(78)] = 1991,
  [SMALL_STATE(79)] = 2003,
  [SMALL_STATE(80)] = 2015,
  [SMALL_STATE(81)] = 2027,
  [SMALL_STATE(82)] = 2039,
  [SMALL_STATE(83)] = 2051,
  [SMALL_STATE(84)] = 2063,
  [SMALL_STATE(85)] = 2075,
  [SMALL_STATE(86)] = 2087,
  [SMALL_STATE(87)] = 2099,
  [SMALL_STATE(88)] = 2111,
  [SMALL_STATE(89)] = 2123,
  [SMALL_STATE(90)] = 2135,
  [SMALL_STATE(91)] = 2147,
  [SMALL_STATE(92)] = 2159,
  [SMALL_STATE(93)] = 2171,
  [SMALL_STATE(94)] = 2183,
  [SMALL_STATE(95)] = 2195,
  [SMALL_STATE(96)] = 2207,
  [SMALL_STATE(97)] = 2219,
  [SMALL_STATE(98)] = 2231,
  [SMALL_STATE(99)] = 2243,
  [SMALL_STATE(100)] = 2255,
  [SMALL_STATE(101)] = 2267,
  [SMALL_STATE(102)] = 2279,
  [SMALL_STATE(103)] = 2296,
  [SMALL_STATE(104)] = 2312,
  [SMALL_STATE(105)] = 2326,
  [SMALL_STATE(106)] = 2342,
  [SMALL_STATE(107)] = 2356,
  [SMALL_STATE(108)] = 2372,
  [SMALL_STATE(109)] = 2388,
  [SMALL_STATE(110)] = 2404,
  [SMALL_STATE(111)] = 2420,
  [SMALL_STATE(112)] = 2436,
  [SMALL_STATE(113)] = 2450,
  [SMALL_STATE(114)] = 2466,
  [SMALL_STATE(115)] = 2482,
  [SMALL_STATE(116)] = 2496,
  [SMALL_STATE(117)] = 2512,
  [SMALL_STATE(118)] = 2526,
  [SMALL_STATE(119)] = 2542,
  [SMALL_STATE(120)] = 2556,
  [SMALL_STATE(121)] = 2570,
  [SMALL_STATE(122)] = 2586,
  [SMALL_STATE(123)] = 2600,
  [SMALL_STATE(124)] = 2614,
  [SMALL_STATE(125)] = 2630,
  [SMALL_STATE(126)] = 2644,
  [SMALL_STATE(127)] = 2655,
  [SMALL_STATE(128)] = 2668,
  [SMALL_STATE(129)] = 2681,
  [SMALL_STATE(130)] = 2694,
  [SMALL_STATE(131)] = 2703,
  [SMALL_STATE(132)] = 2716,
  [SMALL_STATE(133)] = 2729,
  [SMALL_STATE(134)] = 2742,
  [SMALL_STATE(135)] = 2750,
  [SMALL_STATE(136)] = 2760,
  [SMALL_STATE(137)] = 2770,
  [SMALL_STATE(138)] = 2778,
  [SMALL_STATE(139)] = 2786,
  [SMALL_STATE(140)] = 2796,
  [SMALL_STATE(141)] = 2806,
  [SMALL_STATE(142)] = 2816,
  [SMALL_STATE(143)] = 2824,
  [SMALL_STATE(144)] = 2834,
  [SMALL_STATE(145)] = 2844,
  [SMALL_STATE(146)] = 2854,
  [SMALL_STATE(147)] = 2862,
  [SMALL_STATE(148)] = 2870,
  [SMALL_STATE(149)] = 2878,
  [SMALL_STATE(150)] = 2888,
  [SMALL_STATE(151)] = 2896,
  [SMALL_STATE(152)] = 2904,
  [SMALL_STATE(153)] = 2912,
  [SMALL_STATE(154)] = 2922,
  [SMALL_STATE(155)] = 2932,
  [SMALL_STATE(156)] = 2940,
  [SMALL_STATE(157)] = 2950,
  [SMALL_STATE(158)] = 2960,
  [SMALL_STATE(159)] = 2968,
  [SMALL_STATE(160)] = 2975,
  [SMALL_STATE(161)] = 2982,
  [SMALL_STATE(162)] = 2989,
  [SMALL_STATE(163)] = 2996,
  [SMALL_STATE(164)] = 3003,
  [SMALL_STATE(165)] = 3010,
  [SMALL_STATE(166)] = 3017,
  [SMALL_STATE(167)] = 3024,
  [SMALL_STATE(168)] = 3031,
  [SMALL_STATE(169)] = 3038,
  [SMALL_STATE(170)] = 3045,
  [SMALL_STATE(171)] = 3052,
  [SMALL_STATE(172)] = 3059,
  [SMALL_STATE(173)] = 3066,
  [SMALL_STATE(174)] = 3073,
  [SMALL_STATE(175)] = 3080,
  [SMALL_STATE(176)] = 3087,
  [SMALL_STATE(177)] = 3094,
  [SMALL_STATE(178)] = 3101,
  [SMALL_STATE(179)] = 3108,
  [SMALL_STATE(180)] = 3115,
  [SMALL_STATE(181)] = 3122,
  [SMALL_STATE(182)] = 3129,
  [SMALL_STATE(183)] = 3136,
  [SMALL_STATE(184)] = 3143,
  [SMALL_STATE(185)] = 3150,
  [SMALL_STATE(186)] = 3157,
  [SMALL_STATE(187)] = 3164,
  [SMALL_STATE(188)] = 3171,
  [SMALL_STATE(189)] = 3178,
  [SMALL_STATE(190)] = 3185,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_action_statement_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_statement_repeat1, 2), SHIFT_REPEAT(131),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_statement_repeat1, 2), SHIFT_REPEAT(188),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_statement_repeat1, 2), SHIFT_REPEAT(155),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_statement_repeat1, 2), SHIFT_REPEAT(158),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_statement, 3, .production_id = 8),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_statement, 3, .production_id = 8),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_notify_statement, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_notify_statement, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__system_capability_statement, 4, .production_id = 10),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__system_capability_statement, 4, .production_id = 10),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__notify_block, 4, .production_id = 13),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__notify_block, 4, .production_id = 13),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_statement, 4, .production_id = 8),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_statement, 4, .production_id = 8),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__system_capability_statement, 5, .production_id = 10),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__system_capability_statement, 5, .production_id = 10),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_statement, 5, .production_id = 16),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_statement, 5, .production_id = 16),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_statement, 4, .production_id = 16),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_statement, 4, .production_id = 16),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__system_capability_statement_with_shorthand, 3, .production_id = 10),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__system_capability_statement_with_shorthand, 3, .production_id = 10),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__system_capability_statement, 3, .production_id = 10),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__system_capability_statement, 3, .production_id = 10),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_statement, 3, .production_id = 16),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_statement, 3, .production_id = 16),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__notify_block, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__notify_block, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_capability_statement, 1, .production_id = 7),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_capability_statement, 1, .production_id = 7),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__notify_shorthand, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__notify_shorthand, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_notify_statement, 1, .production_id = 6),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_notify_statement, 1, .production_id = 6),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_system_statement_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_statement_repeat1, 2), SHIFT_REPEAT(128),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_statement_repeat1, 2), SHIFT_REPEAT(188),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_statement_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_statement_repeat1, 2), SHIFT_REPEAT(155),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_statement_repeat1, 2), SHIFT_REPEAT(158),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_statement_repeat1, 2),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_statement_repeat1, 2), SHIFT_REPEAT(188),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(175),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(160),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(173),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(172),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(171),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(185),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_statement, 4, .production_id = 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_statement, 5, .production_id = 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_statement, 4, .production_id = 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_statement, 3, .production_id = 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_statement, 6, .production_id = 5),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transient_statement, 3, .production_id = 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_statement, 4, .production_id = 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_statement, 4, .production_id = 5),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transient_statement, 4, .production_id = 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transient_statement, 4, .production_id = 5),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_statement, 4, .production_id = 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_statement, 6, .production_id = 5),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_statement, 3, .production_id = 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_statement, 4, .production_id = 5),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transient_statement, 6, .production_id = 5),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_statement, 4, .production_id = 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_statement, 6, .production_id = 5),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_statement, 6, .production_id = 5),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_statement, 3, .production_id = 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_statement, 4, .production_id = 5),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_statement, 4, .production_id = 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_statement, 4, .production_id = 5),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_statement, 3, .production_id = 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_statement, 5, .production_id = 5),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_statement, 5, .production_id = 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_statement, 3, .production_id = 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_statement, 5, .production_id = 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_statement, 5, .production_id = 5),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_statement, 5, .production_id = 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_statement, 5, .production_id = 5),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_statement, 5, .production_id = 5),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transient_statement, 5, .production_id = 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transient_statement, 5, .production_id = 5),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_statement, 5, .production_id = 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__system_capability_statement_repeat1, 2),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__system_capability_statement_repeat1, 2), SHIFT_REPEAT(181),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__notify_block_repeat1, 2, .production_id = 14),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__notify_block_repeat1, 2, .production_id = 14), SHIFT_REPEAT(152),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_statement_repeat1, 2),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_statement_repeat1, 2), SHIFT_REPEAT(184),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 4),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(129),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_name, 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_value_statement, 4, .production_id = 12),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 9),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_value, 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__notify_block_repeat1, 3, .production_id = 15),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_notify_option, 1),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_field_type, 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_type, 1, .production_id = 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_field_type, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_type, 4, .production_id = 11),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [472] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_capability, 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ecsact(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
