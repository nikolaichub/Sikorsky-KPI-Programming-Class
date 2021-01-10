'use strict';

const numSet1 = [7, -2, 10, 5, 0];
const numSet2 = [0, 10];
const differenceNum = difference(numSet1, numSet2);

const wordSet1 = ['Beijing', 'Kiev'];
const wordSet2 = ['Kiev', 'London', 'Baghdad'];
const differenceWord = difference(wordSet1, wordSet2);

function difference(array, array2) {
    let res = [];
    array.forEach(item => {
        if (!array2.includes(item)) {
            res.push(item);
        }
    });

    return res;
}

console.dir({differenceNum, differenceWord});