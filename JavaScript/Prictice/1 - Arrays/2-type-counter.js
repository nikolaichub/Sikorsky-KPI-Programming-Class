'use strict';

const array = [5, 'string', true, null, undefined, NaN, mes => {mes}, ['1', 2],{ city : 'Kyiv'}, { name : 'Mike'}.toString()];
const typesAmount = countTypes(array);

function countTypes(array) {
    const types = {}

    for (const item of array) {
        const type = typeof item;
        Object.keys(types).indexOf(type) !== -1 ? types[type]++ : types[type] = 1;
    }

    return types;
}

console.log(typesAmount);