'use strict';

const EventEmmiter = require('./0-prototype.js');

const ee = new EventEmmiter();

//ee.sayHello();
ee.on('sum', (...params) => {
    let sum = params.reduce((acc, val) => acc + val);
    console.log(sum);
    return sum;
});

ee.on('sayMes', message => {
    console.log('Message:',message);
});

ee.emit('sum', 5,6);
ee.emit('sayMes', 'Im message');