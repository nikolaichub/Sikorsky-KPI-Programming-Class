'use strict';

const inc = x => ++x;
const twice = x => x * 2;
const cube = x => x ** 3;


// doest work.
const f = pipe(inc, twice, cube);
const x = f(5);

function pipe(...params) {
    console.log(params);
}

console.log(x);