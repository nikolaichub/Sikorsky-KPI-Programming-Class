'use strict';

// prints only unique values of array if numbers
const numbers = [1, 12, 1, 2, 2, 4, 2, 3, 7, 3, 9, 10, 9, 12, 12, 10];
const uniqueSet = unique(numbers);

// extended version
function unique(numbers) {
    let set = [];
    for(let i = 0; i < numbers.length; i++) {
        for(let j = 0; j < numbers.length; j++) {
            if( numbers[i] == numbers [j] && set.includes(numbers[i]) != true) {
                set.push(numbers[i])
            }
        }
    }

    return set.sort((a,b) => a - b);
}

console.log(uniqueSet);