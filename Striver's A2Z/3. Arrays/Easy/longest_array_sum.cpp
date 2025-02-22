#include <iostream>
using namespace std;

int lenOfLongestSubarr(vector<int>& arr, int k) {
    int n = arr.size();
    int max_count = 0;
    for (int i =0; i<n; i++){
        int sum=0;
        for (int j=0; sum<=k; j++){
            sum = sum + arr[i+j];
            if (sum==k and j+1>max_count){
                max_count = j+1;
            } al
        }
    }
    return max_count;
}