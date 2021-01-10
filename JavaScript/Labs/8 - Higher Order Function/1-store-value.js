'use strict';

const store = param => {
    return () => {
        return param;
    }
}

const read = store(5);
const value = read();
console.log(value); // Output: 5