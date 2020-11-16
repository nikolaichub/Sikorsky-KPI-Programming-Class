'use strict';

// Идентификаторы

let name = 'Kolya';
const birthDay = 2002;
const printGreet = name => console.log('Hello,',name);

//printGreet(name);

// Циклы

let start = 15, 
    end = 30;

const range = (start, end) => {
    let interval = end - start;
    let array = [];

    for (let i = 0; i <= interval; i++) {
        array[i] = start;
        start++;
    }

    return console.log(array);
};

const rangeOdd = (start, end) => {
    let interval = end - start;
    let array = [];

    for (let i = 0; i <= interval; i++) {
        if(start %2 == 0){
            array[i-1] = start;
        }
        start++;
    }

    return console.log(array);
};

//range(start, end)
//rangeOdd(start, end)

// Функции

let a = 2;
let b = 6;

const avarage = (a, b) => (a + b) / 2;
const square = a => a*a;
const cube = a => a*a*a;

console.log(avarage(a,b));
console.log(square(a));
console.log(cube(a));
