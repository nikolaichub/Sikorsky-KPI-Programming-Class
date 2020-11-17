'use strict';

// first part

// inc :: number -> number
const inc = value => ++value;

const a = 5;
const b = inc(a);

console.dir({
    a,
    b
});

// second part

const inc2 = element => {
    for (const key in element) {
        if (typeof element[key] == 'number') {
            ++element[key];
        }
    }
};

const obj = {
    n: 5,
    d: 100,
    s: 'text',
    f() {
        console.log('function');
    }
};

inc2(obj);
console.dir(obj);

// third part 

const array = [
    'string',
    true,
    15,
    {
        name: 'Kolya',
        arms: 2,
        isMale: true,
        isFamale: false
    }
];

for (const iterator of array) {
    console.dir(iterator);
}

const objOfTypes = {
    number: 0,
    string: 0,
    boolean: 0,
    function: 0,
}

for (const key in objOfTypes) {
    if (objOfTypes.hasOwnProperty(key)) {
        const element = objOfTypes[key];
        console.log(key + " "+ element);
    }
}