function randomInteger(min, max) {
    let rand = min - 0.5 + Math.random() * (max - min + 1);
    return Math.round(rand);
}

function quickSort(arr) {
    if (arr.length < 2) {
        return arr;
    }

    const pivotIndex = randomInteger(0, arr.length - 1);
    const pivot = arr.splice(pivotIndex, 1);
    const less = [];
    const greater = [];

    for (const item of arr) {
        if (item > pivot) {
            greater.push(item);
        } else {
            less.push(item);
        }
    }

    return quickSort(less).concat(pivot, quickSort(greater));
}

const arr = [10, 1, 2, 3, 11];

console.log(quickSort(arr));
