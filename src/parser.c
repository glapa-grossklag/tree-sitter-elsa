#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_let = 1,
  anon_sym_EQ = 2,
  anon_sym_eval = 3,
  anon_sym_COLON = 4,
  sym_identifier = 5,
  anon_sym_BSLASH = 6,
  anon_sym_DASH_GT = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_EQa_GT = 10,
  anon_sym_EQb_GT = 11,
  anon_sym_EQd_GT = 12,
  anon_sym_EQ_STAR_GT = 13,
  anon_sym_EQ_TILDE_GT = 14,
  sym_comment = 15,
  sym_source_file = 16,
  sym_definition = 17,
  sym_reduction = 18,
  sym_abstraction = 19,
  sym_application = 20,
  sym_term = 21,
  sym_step = 22,
  aux_sym_source_file_repeat1 = 23,
  aux_sym_source_file_repeat2 = 24,
  aux_sym_reduction_repeat1 = 25,
  aux_sym_abstraction_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_eval] = "eval",
  [anon_sym_COLON] = ":",
  [sym_identifier] = "identifier",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQa_GT] = "=a>",
  [anon_sym_EQb_GT] = "=b>",
  [anon_sym_EQd_GT] = "=d>",
  [anon_sym_EQ_STAR_GT] = "=*>",
  [anon_sym_EQ_TILDE_GT] = "=~>",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_definition] = "definition",
  [sym_reduction] = "reduction",
  [sym_abstraction] = "abstraction",
  [sym_application] = "application",
  [sym_term] = "term",
  [sym_step] = "step",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_reduction_repeat1] = "reduction_repeat1",
  [aux_sym_abstraction_repeat1] = "abstraction_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_eval] = anon_sym_eval,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_identifier] = sym_identifier,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQa_GT] = anon_sym_EQa_GT,
  [anon_sym_EQb_GT] = anon_sym_EQb_GT,
  [anon_sym_EQd_GT] = anon_sym_EQd_GT,
  [anon_sym_EQ_STAR_GT] = anon_sym_EQ_STAR_GT,
  [anon_sym_EQ_TILDE_GT] = anon_sym_EQ_TILDE_GT,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_definition] = sym_definition,
  [sym_reduction] = sym_reduction,
  [sym_abstraction] = sym_abstraction,
  [sym_application] = sym_application,
  [sym_term] = sym_term,
  [sym_step] = sym_step,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_reduction_repeat1] = aux_sym_reduction_repeat1,
  [aux_sym_abstraction_repeat1] = aux_sym_abstraction_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eval] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
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
  [anon_sym_EQa_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQb_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQd_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_STAR_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_TILDE_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_reduction] = {
    .visible = true,
    .named = true,
  },
  [sym_abstraction] = {
    .visible = true,
    .named = true,
  },
  [sym_application] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym_step] = {
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
  [aux_sym_reduction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_abstraction_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_abstraction = 1,
  field_argument = 2,
  field_body = 3,
  field_parameters = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_abstraction] = "abstraction",
  [field_argument] = "argument",
  [field_body] = "body",
  [field_parameters] = "parameters",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_abstraction, 0},
    {field_argument, 1},
  [2] =
    {field_body, 3},
    {field_parameters, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == 'a') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(8);
      if (lookahead == 'd') ADVANCE(9);
      if (lookahead == '~') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '>') ADVANCE(33);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(33);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(39);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(40);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(36);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(37);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(38);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'v') ADVANCE(10);
      END_STATE();
    case 15:
      if (eof) ADVANCE(17);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == '=') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '=') ADVANCE(2);
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == 'l') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '~') ADVANCE(6);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_eval);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_eval);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_EQa_GT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_EQb_GT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_EQd_GT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_EQ_STAR_GT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE_GT);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 15},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 16},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 16},
  [31] = {.lex_state = 16},
  [32] = {.lex_state = 16},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 16},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_eval] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ_STAR_GT] = ACTIONS(1),
    [anon_sym_EQ_TILDE_GT] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(46),
    [sym_definition] = STATE(16),
    [sym_reduction] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(16),
    [aux_sym_source_file_repeat2] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_eval] = ACTIONS(7),
  },
  [2] = {
    [sym_abstraction] = STATE(7),
    [sym_application] = STATE(7),
    [sym_term] = STATE(4),
    [sym_step] = STATE(23),
    [aux_sym_reduction_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_eval] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_EQa_GT] = ACTIONS(19),
    [anon_sym_EQb_GT] = ACTIONS(19),
    [anon_sym_EQd_GT] = ACTIONS(19),
    [anon_sym_EQ_STAR_GT] = ACTIONS(19),
    [anon_sym_EQ_TILDE_GT] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_BSLASH,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_eval,
    STATE(4), 1,
      sym_term,
    STATE(7), 2,
      sym_abstraction,
      sym_application,
    ACTIONS(21), 6,
      ts_builtin_sym_end,
      anon_sym_EQa_GT,
      anon_sym_EQb_GT,
      anon_sym_EQd_GT,
      anon_sym_EQ_STAR_GT,
      anon_sym_EQ_TILDE_GT,
  [28] = 4,
    STATE(4), 1,
      sym_term,
    ACTIONS(27), 2,
      anon_sym_eval,
      sym_identifier,
    STATE(7), 2,
      sym_abstraction,
      sym_application,
    ACTIONS(25), 8,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_EQa_GT,
      anon_sym_EQb_GT,
      anon_sym_EQd_GT,
      anon_sym_EQ_STAR_GT,
      anon_sym_EQ_TILDE_GT,
  [50] = 7,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_BSLASH,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_eval,
    STATE(4), 1,
      sym_term,
    STATE(7), 2,
      sym_abstraction,
      sym_application,
    ACTIONS(29), 6,
      ts_builtin_sym_end,
      anon_sym_EQa_GT,
      anon_sym_EQb_GT,
      anon_sym_EQd_GT,
      anon_sym_EQ_STAR_GT,
      anon_sym_EQ_TILDE_GT,
  [78] = 2,
    ACTIONS(35), 2,
      anon_sym_eval,
      sym_identifier,
    ACTIONS(33), 8,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_EQa_GT,
      anon_sym_EQb_GT,
      anon_sym_EQd_GT,
      anon_sym_EQ_STAR_GT,
      anon_sym_EQ_TILDE_GT,
  [93] = 2,
    ACTIONS(39), 2,
      anon_sym_eval,
      sym_identifier,
    ACTIONS(37), 8,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_EQa_GT,
      anon_sym_EQb_GT,
      anon_sym_EQd_GT,
      anon_sym_EQ_STAR_GT,
      anon_sym_EQ_TILDE_GT,
  [108] = 4,
    STATE(8), 1,
      sym_term,
    STATE(29), 2,
      sym_abstraction,
      sym_application,
    ACTIONS(25), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
    ACTIONS(27), 3,
      anon_sym_let,
      anon_sym_eval,
      sym_identifier,
  [126] = 7,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_BSLASH,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      sym_term,
    ACTIONS(23), 2,
      anon_sym_let,
      anon_sym_eval,
    STATE(29), 2,
      sym_abstraction,
      sym_application,
  [150] = 4,
    STATE(10), 1,
      aux_sym_reduction_repeat1,
    STATE(23), 1,
      sym_step,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      anon_sym_eval,
    ACTIONS(47), 5,
      anon_sym_EQa_GT,
      anon_sym_EQb_GT,
      anon_sym_EQd_GT,
      anon_sym_EQ_STAR_GT,
      anon_sym_EQ_TILDE_GT,
  [168] = 4,
    STATE(10), 1,
      aux_sym_reduction_repeat1,
    STATE(23), 1,
      sym_step,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      anon_sym_eval,
    ACTIONS(19), 5,
      anon_sym_EQa_GT,
      anon_sym_EQb_GT,
      anon_sym_EQd_GT,
      anon_sym_EQ_STAR_GT,
      anon_sym_EQ_TILDE_GT,
  [186] = 7,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_BSLASH,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_term,
    ACTIONS(54), 2,
      anon_sym_let,
      anon_sym_eval,
    STATE(29), 2,
      sym_abstraction,
      sym_application,
  [210] = 6,
    ACTIONS(56), 1,
      sym_identifier,
    ACTIONS(58), 1,
      anon_sym_BSLASH,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      sym_term,
    STATE(33), 2,
      sym_abstraction,
      sym_application,
  [230] = 6,
    ACTIONS(56), 1,
      sym_identifier,
    ACTIONS(58), 1,
      anon_sym_BSLASH,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      sym_term,
    STATE(33), 2,
      sym_abstraction,
      sym_application,
  [250] = 6,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    ACTIONS(56), 1,
      sym_identifier,
    ACTIONS(58), 1,
      anon_sym_BSLASH,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_term,
    STATE(33), 2,
      sym_abstraction,
      sym_application,
  [270] = 5,
    ACTIONS(5), 1,
      anon_sym_let,
    ACTIONS(7), 1,
      anon_sym_eval,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    STATE(30), 2,
      sym_definition,
      aux_sym_source_file_repeat1,
    STATE(32), 2,
      sym_reduction,
      aux_sym_source_file_repeat2,
  [288] = 3,
    STATE(17), 1,
      sym_term,
    STATE(33), 2,
      sym_abstraction,
      sym_application,
    ACTIONS(25), 4,
      sym_identifier,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [302] = 6,
    ACTIONS(56), 1,
      sym_identifier,
    ACTIONS(58), 1,
      anon_sym_BSLASH,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      sym_term,
    STATE(33), 2,
      sym_abstraction,
      sym_application,
  [322] = 5,
    ACTIONS(43), 1,
      anon_sym_BSLASH,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      sym_identifier,
    STATE(12), 1,
      sym_term,
    STATE(29), 2,
      sym_abstraction,
      sym_application,
  [339] = 5,
    ACTIONS(15), 1,
      anon_sym_BSLASH,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      sym_identifier,
    STATE(2), 1,
      sym_term,
    STATE(7), 2,
      sym_abstraction,
      sym_application,
  [356] = 5,
    ACTIONS(56), 1,
      sym_identifier,
    ACTIONS(58), 1,
      anon_sym_BSLASH,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_term,
    STATE(33), 2,
      sym_abstraction,
      sym_application,
  [373] = 5,
    ACTIONS(56), 1,
      sym_identifier,
    ACTIONS(58), 1,
      anon_sym_BSLASH,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_term,
    STATE(33), 2,
      sym_abstraction,
      sym_application,
  [390] = 5,
    ACTIONS(15), 1,
      anon_sym_BSLASH,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      sym_identifier,
    STATE(5), 1,
      sym_term,
    STATE(7), 2,
      sym_abstraction,
      sym_application,
  [407] = 5,
    ACTIONS(56), 1,
      sym_identifier,
    ACTIONS(58), 1,
      anon_sym_BSLASH,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_term,
    STATE(33), 2,
      sym_abstraction,
      sym_application,
  [424] = 5,
    ACTIONS(43), 1,
      anon_sym_BSLASH,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      sym_identifier,
    STATE(9), 1,
      sym_term,
    STATE(29), 2,
      sym_abstraction,
      sym_application,
  [441] = 5,
    ACTIONS(15), 1,
      anon_sym_BSLASH,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      sym_identifier,
    STATE(3), 1,
      sym_term,
    STATE(7), 2,
      sym_abstraction,
      sym_application,
  [458] = 2,
    ACTIONS(33), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
    ACTIONS(35), 3,
      anon_sym_let,
      anon_sym_eval,
      sym_identifier,
  [469] = 5,
    ACTIONS(56), 1,
      sym_identifier,
    ACTIONS(58), 1,
      anon_sym_BSLASH,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_term,
    STATE(33), 2,
      sym_abstraction,
      sym_application,
  [486] = 2,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
    ACTIONS(39), 3,
      anon_sym_let,
      anon_sym_eval,
      sym_identifier,
  [497] = 3,
    ACTIONS(76), 1,
      anon_sym_let,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      anon_sym_eval,
    STATE(30), 2,
      sym_definition,
      aux_sym_source_file_repeat1,
  [509] = 3,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      anon_sym_eval,
    STATE(31), 2,
      sym_reduction,
      aux_sym_source_file_repeat2,
  [520] = 3,
    ACTIONS(7), 1,
      anon_sym_eval,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    STATE(31), 2,
      sym_reduction,
      aux_sym_source_file_repeat2,
  [531] = 1,
    ACTIONS(37), 4,
      sym_identifier,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [538] = 1,
    ACTIONS(33), 4,
      sym_identifier,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [545] = 3,
    ACTIONS(7), 1,
      anon_sym_eval,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    STATE(31), 2,
      sym_reduction,
      aux_sym_source_file_repeat2,
  [556] = 3,
    ACTIONS(86), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_DASH_GT,
    STATE(36), 1,
      aux_sym_abstraction_repeat1,
  [566] = 3,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_DASH_GT,
    STATE(36), 1,
      aux_sym_abstraction_repeat1,
  [576] = 3,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_DASH_GT,
    STATE(36), 1,
      aux_sym_abstraction_repeat1,
  [586] = 3,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_DASH_GT,
    STATE(36), 1,
      aux_sym_abstraction_repeat1,
  [596] = 1,
    ACTIONS(99), 3,
      sym_identifier,
      anon_sym_BSLASH,
      anon_sym_LPAREN,
  [602] = 2,
    ACTIONS(101), 1,
      sym_identifier,
    STATE(37), 1,
      aux_sym_abstraction_repeat1,
  [609] = 2,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(38), 1,
      aux_sym_abstraction_repeat1,
  [616] = 2,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(39), 1,
      aux_sym_abstraction_repeat1,
  [623] = 1,
    ACTIONS(107), 1,
      anon_sym_COLON,
  [627] = 1,
    ACTIONS(109), 1,
      anon_sym_EQ,
  [631] = 1,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
  [635] = 1,
    ACTIONS(113), 1,
      sym_identifier,
  [639] = 1,
    ACTIONS(115), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 28,
  [SMALL_STATE(5)] = 50,
  [SMALL_STATE(6)] = 78,
  [SMALL_STATE(7)] = 93,
  [SMALL_STATE(8)] = 108,
  [SMALL_STATE(9)] = 126,
  [SMALL_STATE(10)] = 150,
  [SMALL_STATE(11)] = 168,
  [SMALL_STATE(12)] = 186,
  [SMALL_STATE(13)] = 210,
  [SMALL_STATE(14)] = 230,
  [SMALL_STATE(15)] = 250,
  [SMALL_STATE(16)] = 270,
  [SMALL_STATE(17)] = 288,
  [SMALL_STATE(18)] = 302,
  [SMALL_STATE(19)] = 322,
  [SMALL_STATE(20)] = 339,
  [SMALL_STATE(21)] = 356,
  [SMALL_STATE(22)] = 373,
  [SMALL_STATE(23)] = 390,
  [SMALL_STATE(24)] = 407,
  [SMALL_STATE(25)] = 424,
  [SMALL_STATE(26)] = 441,
  [SMALL_STATE(27)] = 458,
  [SMALL_STATE(28)] = 469,
  [SMALL_STATE(29)] = 486,
  [SMALL_STATE(30)] = 497,
  [SMALL_STATE(31)] = 509,
  [SMALL_STATE(32)] = 520,
  [SMALL_STATE(33)] = 531,
  [SMALL_STATE(34)] = 538,
  [SMALL_STATE(35)] = 545,
  [SMALL_STATE(36)] = 556,
  [SMALL_STATE(37)] = 566,
  [SMALL_STATE(38)] = 576,
  [SMALL_STATE(39)] = 586,
  [SMALL_STATE(40)] = 596,
  [SMALL_STATE(41)] = 602,
  [SMALL_STATE(42)] = 609,
  [SMALL_STATE(43)] = 616,
  [SMALL_STATE(44)] = 623,
  [SMALL_STATE(45)] = 627,
  [SMALL_STATE(46)] = 631,
  [SMALL_STATE(47)] = 635,
  [SMALL_STATE(48)] = 639,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduction, 4),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reduction, 4),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstraction, 4, .production_id = 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abstraction, 4, .production_id = 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_application, 2, .production_id = 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_application, 2, .production_id = 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduction_repeat1, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_reduction_repeat1, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 3),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduction_repeat1, 2), SHIFT_REPEAT(40),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduction, 5),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 4),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 4),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(47),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_abstraction_repeat1, 2), SHIFT_REPEAT(36),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_abstraction_repeat1, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [111] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_elsa(void) {
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
