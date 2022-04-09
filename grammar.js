module.exports = grammar({
    name : 'elsa',

    rules : {
        source_file : $ => seq(repeat($.definition), repeat($.reduction)),
        definition : $ => seq('let', $.identifier, '=', $.term),
        reduction : $ =>
            seq('eval', $.identifier, ':', $.term, repeat(seq($.step, $.term))),
        identifier : $ => /[A-Za-z_]+[A-Za-z_0-9]*/,
        abstraction : $ => seq('\\', field('parameters', repeat1($.identifier)),
                               '->', field('body', $.term)),
        application : $ => prec.left(
            1, seq(field('abstraction', $.term), field('argument', $.term))),
        term : $ => choice(seq('(', $.term, ')'),
                           choice($.identifier, $.abstraction, $.application)),
        step : $ => choice('=a>', '=b>', '=d>', '=*>', '=~>'),
        comment : $ => /--.*/
    }
});
