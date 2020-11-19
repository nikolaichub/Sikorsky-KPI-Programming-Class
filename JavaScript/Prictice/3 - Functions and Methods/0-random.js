'use strict';

// gets random integer
const getRandom = (min, max) => {
    //return Math.floor(Math.random() * max + 1); //works in lack of min value
    return Math.floor(Math.random() * (max - min) + min + 1);

};

module.exports.getRandom = getRandom;