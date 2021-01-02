'use strict';

const EventEmmiter = () => {
    const events = {};
    const accum = [];
    return {
        on: (name, fn) => {
            const event = events[name];
            accum.push(name);
            if (event) {
                event.push(fn);
            } else {
                events[name] = [fn];
            }
        },
        emit: (name, ...params) => {
            const event = events[name];
            if (event) {
                event.map(fn => fn(...params));
            }
        },
        listeners: () => {
            const keys = Object.keys(events);
            //console.log(keys);
            return keys;
        },
        count: (name) => {
            if (name) {
                const keys = accum.filter(event => event === name);
                //console.log(name,keys.length);
                return keys.length;
            }
        },
    }
}

const ee = EventEmmiter();

// usage

ee.on('sayName', name => {
    console.log('Hi!', name);
});

ee.on('sayName', name => {
    console.log('Hi!', name);
});

ee.on('sum', (...params) => {
    let sum = params.reduce((acc, val) => acc + val);
    console.log(sum);
});


ee.emit('sayName', 'Mykola');

// returns array of listeners
const listeners = ee.listeners();
console.log(listeners);

// returns number of conctere listeners if exist
let count = ee.count('sayName');
console.log(count);