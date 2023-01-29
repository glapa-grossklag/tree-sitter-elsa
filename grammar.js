/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'elsa',

  extras: ($) => [/\s/, $.comment],

  rules: {
    source_file: ($) => seq(repeat($.definition), repeat($.reduction)),

    definition: ($) => seq(
        'let',
        alias($.identifier, $.function),
        '=',
        $.term,
    ),

    reduction: ($) =>
      seq(
          'eval',
          alias($.identifier, $.method),
          ':',
          $.term,
          repeat(seq($.step, $.term)),
      ),

    abstraction: ($) => seq(
        '\\',
        field('parameters', repeat1(alias($.identifier, $.parameter))),
        '->',
        field('body', $.term),
    ),

    application: ($) => prec.left(1,
        seq(
            field('abstraction', $.term),
            field('argument', $.term),
        ),
    ),

    term: ($) => choice(
        seq('(', $.term, ')'),
        choice($.identifier, $.abstraction, $.application),
    ),

    step: () => choice('=a>', '=b>', '=d>', '=*>', '=~>'),

    identifier: () => /[A-Za-z_]+[A-Za-z_0-9]*/,

    comment: () => seq('--', /(\\(.|\r?\n)|[^\\\n])*/),
  },
});
