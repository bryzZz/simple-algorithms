#include <iostream>

using namespace std;

int fibonacci(int n){
    if (n == 0 || n == 1) {
        return n;
    }

    int left = fibonacci(n - 2);
    int right = fibonacci(n - 1);

    return left + right;
}

long long int fibInner(int n, long long int cache[]){
    if (n == 0 || n == 1) {
        return n;
    }

    if (cache[n] == 0) {
        int left = fibInner(n - 2, cache);
        int right = fibInner(n - 1, cache);

        cache[n] = left + right;
    }

    return cache[n];
}

// Optimization with memoization
long long int Mfibonacci(int n){
    long long int cache[n+1] = {0};

    return fibInner(n, cache);
}

// Optimization with tabulation
long long int Tfibonacci(int n){
    if (n == 0 || n == 1) {
        return n;
    }

    long long int cache[n+1] = {0};
    cache[0] = 0;
    cache[1] = 1;

    for(int i = 2; i <= n; i++){
        cache[i] = cache[i-2] + cache[i-1];
    }

    return cache[n];
}

int main(){

    cout << fibonacci(7) << endl;
    cout << Mfibonacci(1000) << endl;
    cout << Tfibonacci(1000) << endl;

    return 0;
}