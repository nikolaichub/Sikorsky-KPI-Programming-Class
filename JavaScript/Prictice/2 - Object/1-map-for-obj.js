'use strict';

// тестовый обьект
const person = {
    name: 'Den',
    age: 15,
    sex: 'male',
    parents: {
        mother: {
            name: 'Elena',
            age: 40
        },
        father: {
            name: 'Steve',
            age: 44
        }
    }
};

Object.prototype.map = function (fn) {
    const newObj = {};

    // получает только ключи Object
    const objKeys = Object.keys(this);
    objKeys.forEach(el => {
        newObj[el] = fn(this[el]);
    });

    return newObj;
};

console.log(person.map(x => x));