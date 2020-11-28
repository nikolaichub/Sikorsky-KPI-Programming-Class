'use strict';

const matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]];
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

console.log(m);