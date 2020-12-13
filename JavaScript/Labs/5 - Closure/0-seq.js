'use strict';

const seq = fX => gX => {
    if (typeof gX === 'number') {
        return fX(gX);
    } else {
        return seq(x => fX(gX(x)));
    };
};

//const seq = f => g => (typeof g === 'number' ? f(g) : seq(x => f(g(x))));

console.log(seq(x => x + 7)(x => x * 2)(5));