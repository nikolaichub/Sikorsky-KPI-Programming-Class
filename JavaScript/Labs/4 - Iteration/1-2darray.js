'use strict';

const matrix = [[1, 2, 3], [4, 5, 6], [70, 8, 9]];
const m = max(matrix);

// standart method
function max(mtrx) {
    let maxValue = 0;
    for(let i = 0; i < mtrx.length; i++) {
        for(let j = 0; j < mtrx[i].length; j++){
            if (mtrx[i][j] >= maxValue) {
                maxValue = mtrx[i][j];
            }
        }
    }
    return maxValue;
}

// via map
function max(mtrx) {
    let maxValue = 0;
    mtrx.map(i => i.map(j => j >= maxValue ? maxValue = j : null));
    return maxValue;
}

// via forEach
function max(mtrx) {
    let maxValue = 0;
    mtrx.forEach(i => {
        i.forEach(j => {
            j >= maxValue ? maxValue = j : null;
        });   
    });
    return maxValue;
}

console.log(m);