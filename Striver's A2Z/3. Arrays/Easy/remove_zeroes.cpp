#include <iostream>
using namespace std;

//my first approach
void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int non_zero=0;
    for (int i = 0; i<n; i++){
        if (nums[i]!=0){
            nums[non_zero] = nums[i];
            non_zero++;
        }
    }
    for (int i = non_zero; i<n; i++){
        nums[i] = 0;
    }
    
}

//