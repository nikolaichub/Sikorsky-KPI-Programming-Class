'use strict';

const a = sum(1, 2, 3) // 6
const b = sum(0) // 0
const c = sum() // 0
const d = sum(1, -1, 1) // 1
const e = sum(10, -1, -1, -1) // 7
const f = sum(10, 400, -1, -1) // 408

// via reduce
function sum(...args) {
    return args.reduce((a,b) => a + b, 0);
}

// via map
function sum(...args) {
    let sum = 0;
    args.map( element => sum += element);
    return sum;
}

// via for
function sum(...args) {
    let sum = 0;
    for(let i = 0; i < args.length; i++) {
        sum += args[i];
    }
    return sum;
}

// via for..of
function sum(...args) {
    let sum = 0;
    for (const i of args) {
        sum += i;
    }
    return sum;
}

// via while
function sum(...args) {
    let sum = 0, 
        i = 0;
    while (i < args.length) {
        sum += args[i];
        i++;
    }
    return sum;
}

console.log(a);