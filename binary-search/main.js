'use strict';

const binarySearch = (arr, item) => {
    let low = 0;
    let high = arr.length - 1;

    while (low <= high) {
        const mid = Math.floor((low + high) / 2);
        const guess = arr[mid];

        if (guess === item) {
            return mid;
        }

        if (guess > item) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return -1;
};

const arr = [];
for (let i = 0; i < 100; i++) {
    arr.push(i);
}

console.log(binarySearch(arr, 75));
console.log(binarySearch(arr, 9));
console.log(binarySearch(arr, 63));
console.log(binarySearch(arr, 28));
console.log(binarySearch(arr, 100));
