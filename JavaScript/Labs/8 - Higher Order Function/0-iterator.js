'use strict';

const obj = { a: 1, b: 2, c: 3 };

function iterate(object, fn) {
    for (const key in object) {
        if (Object.hasOwnProperty.call(object, key)) {
            const value = object[key];
            fn(key, value);
        }
    }
};

iterate(obj, (key, value) => {
  console.log({ key, value });
});