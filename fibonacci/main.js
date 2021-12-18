'use strict';

function fibonacci(n) {
    if (n === 0 || n === 1) {
        return n;
    }

    const left = fibonacci(n - 2);
    const right = fibonacci(n - 1);

    return left + right;
}

// Optimization with memoization
function Mfibonacci(n) {
    const cache = new Array(n + 1).fill(null);

    const fibInner = (n) => {
        if (n === 0 || n === 1) {
            return n;
        }

        if (cache[n] === null) {
            const left = fibInner(n - 2);
            const right = fibInner(n - 1);

            cache[n] = left + right;
        }

        return cache[n];
    };

    return fibInner(n);
}

// Optimization with tabulation
function Tfibonacci(n) {
    if (n == 0 || n == 1) {
        return n;
    }

    const cache = new Array(n + 1).fill(null);
    cache[0] = 0;
    cache[1] = 1;

    for (let i = 2; i <= n; i++) {
        cache[i] = cache[i - 2] + cache[i - 1];
    }

    return cache[n];
}

console.log(fibonacci(6));
console.log(Mfibonacci(1000));
console.log(Tfibonacci(1000));
