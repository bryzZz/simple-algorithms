#include <iostream>
#include <vector>

using namespace std;

template<typename T>
int binarySearch(vector<T> vec, T item){
    int low = 0;
    int high = vec.size() - 1;

    while (low <= high){
        int mid = (low + high) / 2;
        T guess = vec[mid];

        if(guess == item){
            return mid;
        }

        if(guess > item){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }

    return -1;
}

int main(){

    vector<int> vec;
    for(int i = 0; i < 100; i++){
        vec.push_back(i);
    }

    cout << binarySearch(vec, 75) << endl;
    cout << binarySearch(vec, 9) << endl;
    cout << binarySearch(vec, 63) << endl;
    cout << binarySearch(vec, 28) << endl;
    cout << binarySearch(vec, 100) << endl;

    return 0;
}