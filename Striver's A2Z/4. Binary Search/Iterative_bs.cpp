#include <iostream>
#include <vector>

using namespace std;

int binary_search(vector <int> arr, int n, int target){
    int low = arr[0];
    int high = arr[n-1];

    while (low<=high){
        int mid = floor((low+mid)/2);

        if (arr[mid] == target ){
            return arr[mid];
        }
        else if (target > arr[mid]){
            low = mid+1;
        }

        else{
            high = mid-1;
        }
    }

    return -1;
}