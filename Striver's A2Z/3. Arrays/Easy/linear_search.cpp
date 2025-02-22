#include <iostream>
using namespace std;

bool searchInSorted(vector<int> arr, int k) {
    int count = 0;
    for (int i = 0; i<arr.size(); i++){
        if (arr[i]==k){
            count++;
        }
    }
    if (count==0){
        return false;
    }
    else{
        return true;
    }
}