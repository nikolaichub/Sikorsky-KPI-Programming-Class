'use strict';

const obj = {
    name: 'Mike', // string
    age: 15, // number
    cat: true, // boolean
    virgin: undefined, // undefined
    parents: { // object
        mother: 'Elena',
        father: 'Den',
    },
    sayhi() { // function
        console.log('Hi');
    },
    happiness: NaN, // number,
    mark: null, // object
}

const typesAmount = countTypes(obj);

function countTypes(object) {
    const types = {};

    for (const key in object) {
        if (Object.hasOwnProperty.call(object, key)) {
            const element = object[key];
            const type = typeof element;
            Object.keys(types).includes(type) ? types[type]++ : types[type] = 1;
        }
    }

    return types;
}

console.log(typesAmount);