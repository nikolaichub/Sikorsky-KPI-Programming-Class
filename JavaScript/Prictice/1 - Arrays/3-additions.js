'use strict';

function showAdditions(number) {
    let res = [];
    const array = number.toString().split('').map(x => parseInt(x));
    for (let i = 0; i <= array.length - 1; i++) {
        const element = array[i];
        if (element !== 0) {
            const level = array.length - 1 - i;
            const component = element * 10 ** level;
            res.push(component);
        }
    }
    return res.join('+');
}

const showAdditionsShort = number => number.toString().split('').map((el, id, ar) => parseInt(el) * 10 ** (ar.length - 1 - id)).join('+');

console.log('Normal:',showAdditions(17095));
console.log('Short:',showAdditionsShort(17095));