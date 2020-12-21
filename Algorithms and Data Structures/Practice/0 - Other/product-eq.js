'use strict';

function product(x, i) {
    let p = 1;
    for (let k = 1; k <= i; k++) {
        p = p * Math.cos(x / (2 ** k));
    }
    return p;
}

const x = 1.5;
const res = product(x, 5);
console.log(res);
