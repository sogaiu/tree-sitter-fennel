// numbers
const SIGN =
      choice('-', '+');
const DIGIT =
      /[0-9]/;
const HEX_DIGIT =
      /[0-9A-F]/;

// symbols and keywords
const SYM_CHAR_NO_DIGIT =
      /[a-zA-Z!$%&#*+.\/:<=>?^_-]/;
const SYM_CHAR =
      /[0-9a-zA-Z!$%&#*+.\/:<=>?^_-]/;

// strings
const STRING_DOUBLE_QUOTE_CONTENT =
      repeat(choice(/[^\\"]/,
                    /\\(.|\n)/)); // thanks to tree-sitter-haskell

const STRING_SINGLE_QUOTE_CONTENT =
      repeat(choice(/[^\\']/,
                    /\\(.|\n)/)); // thanks to tree-sitter-haskell

module.exports = grammar({
  name: 'fennel',

  extras: $ =>
    [/\s/, $.comment],

  rules: {
    // THIS MUST BE FIRST -- even though this doesn't look like it matters
    source_file: $ =>
      repeat($._form),

    comment: $ =>
      /;.*/,

    _form: $ =>
      choice($.boolean,
             $.keyword,
             $.nil,
             $.number,
             $.string,
             $.symbol,
             //
             $.array,
             $.list,
             $.table,
             //
             $.syntax_quote_form,
             $.unquote_form),

    // simplest things

    boolean: $ =>
      choice('false',
             'true'),

    keyword: $ =>
      token(seq(':'),
            repeat(SYM_CHAR)),

    nil: $ =>
      'nil',

    number: $ =>
      choice($._dec,
             $._hex),

    // XXX: doesn't seem quite right?
    _dec: $ =>
      token(seq(optional(SIGN),
                choice(seq(repeat1(DIGIT),
                           optional('.'),
                           repeat(DIGIT)),
                       seq(repeat(DIGIT),
                           optional('.'),
                           repeat1(DIGIT))),
                optional(seq(choice('e', 'E'),
                             optional(SIGN),
                             repeat1(DIGIT))))),

    // XXX: doesn't seem quite right?
    _hex: $ =>
      token(seq(optional(SIGN),
                '0x',
                choice(seq(repeat1(HEX_DIGIT),
                           optional('.'),
                           repeat(HEX_DIGIT)),
                       seq(repeat(HEX_DIGIT),
                           optional('.'),
                           repeat1(HEX_DIGIT))))),

    string: $ =>
      token(choice(seq('"',
                       STRING_DOUBLE_QUOTE_CONTENT,
                       '"'),
                   seq("'",
                       STRING_SINGLE_QUOTE_CONTENT,
                       "'"))),

    symbol: $ =>
      token(seq(SYM_CHAR_NO_DIGIT,
                repeat(SYM_CHAR))),

    // collection-ish things

    array: $ =>
      seq('[',
          repeat($._form),
          ']'),

    list: $ =>
      seq('(',
          repeat($._form),
          ')'),

    table: $ =>
      seq('{',
          repeat($._form),
          '}'),

    // macro

    syntax_quote_form: $ =>
      seq('`',
          $._form),

    unquote_form: $ =>
      seq(choice('@', ','), // @ was used before 0.3.0
          $._form),

  }
});
