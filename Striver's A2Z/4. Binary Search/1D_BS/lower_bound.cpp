#include <iostream>
#include <vector>

using namespace std;

//log n time complexity

int findFloor(vector<int>& arr, int k) {
    int left = 0;
    int right = arr.size() - 1;
    int floor = -1;
    
    while (right>=left) {
        
        int mid = (left + right)/2;
        
        if (arr[mid] == k){
            return mid;
        }
        
        if (arr[mid] < k){
            if (arr[mid]>arr[floor]){
                floor = mid;
            }
            left = mid+1;
        }
        
        else{
            right = mid-1;
        }

    }
    return floor;
}
