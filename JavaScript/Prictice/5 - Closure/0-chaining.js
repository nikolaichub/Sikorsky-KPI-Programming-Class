'use strict';

function seq(...args) {
    console.log(args.reduce((a,b) => a + b, 0));
    return seq;
}

seq(0)(25);