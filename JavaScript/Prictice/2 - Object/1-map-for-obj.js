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

const omap = (mapFn, obj) => {
    const newObj = {};
    for (const key of Object.keys(obj)) {
        newObj[key] = mapFn(obj[key]);
    }

    return newObj;
};

console.log(omap(x => x, person));