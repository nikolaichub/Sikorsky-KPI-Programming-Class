'use strict';

// альтернатива map для массива

const array = ['name', 1, null, true, { head: 'head'}];

function alternativeMap(array, fn) {
    const res = [];

    for (const item of array) {
        res.push(fn(item));
    }

    return res;
}

// usage

const origMap = array.map(x => x);
const altMap = alternativeMap(array, x => x);

console.dir({origMap, altMap});