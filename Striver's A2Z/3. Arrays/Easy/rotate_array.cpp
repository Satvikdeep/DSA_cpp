#include <iostream>;
using namespace std;

// Approach - 1 (Brute force)
// Time Complexity - O(n)
// Space Complexity - O(n)

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k%n;
    vector <int> n_nums(n);
    int index=0;
    for (int i = n-k; i<n; i++){
        n_nums[index] = nums[i];
        index++;
    }
    for (int j = 0; j<n-k; j++){
        n_nums[index] = nums[j];
        index++;
    }
    nums = n_nums;
    cout << "[";
    for (int x:nums){
        cout << x << ",";
    }
    cout << "]";
}

// Approach - 2
// Time Complexity - O(n*k)
// Space Complexity - O(1)

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k%n;
    for (int x=0; x<k; x++){
        int temp = nums.back();
        
        for (int i = nums.size() - 1; i > 0; i--) {
        nums[i] = nums[i-1];
        }

        nums[0] = temp;
    }
}

//Approach - 3
//Time Complexity - O(3n)
//Space Complexity - O(1)

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;
    vector<int> temp(k);
    for (int i=n-k; i<n; i++){
        temp[i-n+k]=nums[i];
    }
    for (int i=n-k-1; i>=0; i--){
        nums[i+k]=nums[i];
    }
    for (int i=0; i<k; i++){
        nums[i]=temp[i];
    }
}

//Aproach - 4 - Most optimal

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;
    reverse(nums.begin(), nums.begin() + n - k);
    reverse(nums.begin() + n - k, nums.end());
    reverse(nums.begin(), nums.end());
}