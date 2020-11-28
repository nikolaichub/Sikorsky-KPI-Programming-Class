'use strict';

const persons = {
    lenin: {
        born: 1870,
        died: 1924
    },
    mao: {
        born: 1893,
        died: 1976
    },
    gandhi: {
        born: 1869,
        died: 1948
    },
    hirohito: {
        born: 1901,
        died: 1989
    },
};

function ages(list) {
    const ages = {};
    for (const person in list) {
        ages[person] = list[person].died - list[person].born;
    }
    return ages;
}

console.log(ages(persons));