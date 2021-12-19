#include <cstdlib> 
#include <ctime> 
#include <iostream>
#include <vector>

using namespace std;

vector<int> quickSort(vector<int> vec){
    if(vec.size() < 2){
        return vec;
    }

    srand((unsigned)time(0)); 
    int pivotIndex = (rand() % vec.size()-1) + 0;
    int pivot = vec[pivotIndex];
    vector<int> less;
    vector<int> greater;

    for (int i = 0; i < vec.size(); i++) {
        if(i == pivotIndex){
            continue;
        }

        if (vec[i] > pivot) {
            greater.push_back(vec[i]);
        } else {
            less.push_back(vec[i]);
        }
    }

    vector<int> sortedLess = quickSort(less);
    vector<int> sortedGreater = quickSort(greater);

    sortedLess.push_back(pivot);
    sortedLess.insert(sortedLess.end(), sortedGreater.begin(), sortedGreater.end());

    return sortedLess;
}

int main(){
    vector<int> vec = {10, 1, 2, 3, 11};
    vector<int> sortedVec = quickSort(vec);

    for(int item : sortedVec){
        cout << item << " ";
    }
    cout << endl;

    return 0;
}