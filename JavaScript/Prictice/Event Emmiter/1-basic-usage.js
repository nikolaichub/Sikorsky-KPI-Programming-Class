'use strict';

const EventEmmiter = require('./0-basic.js');

const ee = new EventEmmiter();

//ee.sayHello();
ee.on('double', (...params) => {
    let sum = params.reduce((acc, val) => acc + val);
    console.log(sum);
    return sum;
});

ee.on('sayMes', message => {
    console.log('Message:',message);
});

ee.emit('double', 5,6);
ee.emit('sayMes', 'Message');