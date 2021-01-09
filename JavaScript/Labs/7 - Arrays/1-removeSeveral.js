'use strict';

const array = [1, 2, 3, 4, 5, 6, 7];

function removeElement(array, ...items) {
    items.forEach(element => {
        const idnex = array.indexOf(element);
        if (idnex !== -1) {
            array.splice(idnex, 1);
        }
    });
}

removeElement(array, 5, 6, 1);
console.log(array);