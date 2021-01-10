'use strict';

// prints only unique values of array
const numbers = [2, 1, 1, 3, 2];
const words = ['top', 'bottom', 'top', 'left'];
const uniqueNumbers = uniqueClassic(numbers);
const uniqueWords = uniqueForEach(words);

// via classic for
function uniqueClassic(array) {
    let set = [];
    for(let i = 0; i < array.length; i++) {
        for(let j = 0; j < array.length; j++) {
            if( array[i] == array [j] && set.includes(array[i]) != true) {
                set.push(array[i])
            }
        }
    }

    return set.sort((a,b) => a - b);
}

// via forEach
function uniqueForEach(array) {
    let set = [];
    array.forEach(number => {
        array.forEach(duplicate => {
            if (number === duplicate && set.indexOf(number) == -1) {
                set.push(number);
            }
        });
    });

    return set.sort((a,b) => a - b);
}

console.dir({uniqueNumbers, uniqueWords});