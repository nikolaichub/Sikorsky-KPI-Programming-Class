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

const omap = (src, mapFn) => {
    const dest = {};
    for (const key of Object.keys(src)) {
        dest[key] = mapFn(src[key]);
    }

    return dest;
};

console.log(omap(person, x => x));