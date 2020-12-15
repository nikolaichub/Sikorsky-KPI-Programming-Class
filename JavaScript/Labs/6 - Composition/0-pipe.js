'use strict';

const inc = x => ++x;
const twice = x => x * 2;
const cube = x => x ** 3;

const pipe = (...params) => argument => {
    // checks if parametr is a function
    const isParamFunc = params.findIndex(elem => typeof elem != 'function') == -1;
    // checks for parameters
    const isParamLength = params.length != 0;
    // checks if argument is a number
    const isArgNumber = typeof argument == 'number';

    if (isParamFunc && isParamLength && isArgNumber) {
        let result = argument;
        for (const iterator of params) {
            result = iterator(result);
        }
        return result;
    } else {
        return undefined;
    }
};

const f = pipe(inc, twice, cube);
const x = f(5);

const f1 = pipe(inc, inc);
const x1 = f1(7);

console.dir({x, x1});