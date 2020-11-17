'use strict';

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

range(start, end)
rangeOdd(start, end)