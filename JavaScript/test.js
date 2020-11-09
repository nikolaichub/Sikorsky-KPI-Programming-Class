'use strict';

const obj = {
    number: 5,
    boolean: true,
    string: 'string',
    func: () => {
        console.log('its function');
    },
    func1: function anotherFunc(params) {
        console.log('another one function');
    }

};

const show = parametr => {
    console.log(parametr.func1());
}

show(obj);