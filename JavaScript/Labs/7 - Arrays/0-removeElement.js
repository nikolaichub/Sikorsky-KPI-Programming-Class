'use strict';

const array = [1, 2, 3, 4, 4, 5, 6, 7];

function removeElement(array, element) {
    const index = array.indexOf(element);
    if (index !== -1) {
        array.splice(index, 1); // first argument tells where to start and second one tells how many items to delete
    }
};

removeElement(array, 4);
console.log(array);
