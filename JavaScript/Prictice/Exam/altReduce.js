'use strict';

// альтернатива reduce для массива

const array = [1, 2, 3, 4];

function alternativeRed(array, fn, initial) {
    const length = array.length;
    if (length === 0) {
        if (initial) return initial;
        throw 'Empty array'      
    }
    let current = initial;
    for (let i = 0; i < length; i++) {
        current = fn(current, array[i]);
    }
    return current;
}

// usage

const origReduce = array.reduce((acc, val) => acc + val, 0);
const altReduce = alternativeRed(array, (acc, val) => acc + val, 0);

console.dir({ origReduce, altReduce });