'use strict';

const array1 = [10, 10, 10, 10];
const array2 = [0, 1, 2, 3];

const callback = (a, b) => Math.pow(a, b);

const zipWith = (callback, arr1 = [], arr2 = []) => {
  if (arr1.length !== arr2.length)
    throw new Error('arrays must be the same length');

  const dist = [];
  for (let i = 0; i < arr1.length; i += 1) {
    const elm1 = arr1[i];
    const elm2 = arr2[i];
    dist.push(callback(elm1, elm2));
  }
  return dist;
};

// zipWith(callback, array1, array2);
console.log(zipWith(callback, array1, array2));
