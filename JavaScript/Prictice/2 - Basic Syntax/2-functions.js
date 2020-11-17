'use strict';

// Функции

let a = 2;
let b = 6;

const avarage = (a, b) => (a + b) / 2;
const square = a => a*a;
const cube = a => a*a*a;

console.log(`avarage between ${a} and ${b}:`,avarage(a,b));
console.log(`square of ${a}:`,square(a));
console.log(`cube of ${a}:`,cube(a));

const calculate = () => {
    let array = [];
    for (let i = 0; i <= 9; i++) {
        let iSquare = square(i);
        let iCube = cube(i); 
        let iAvarage = avarage(iSquare, iCube); 
        array.push(iAvarage);
    }

    return array;
}

console.log(calculate());