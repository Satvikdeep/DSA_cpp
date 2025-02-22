#include <bits/stdc++.h>

using namespace std;

void sortColors(vector<int>& nums) {
    int n = nums.size();
    int red = 0;
    int white = 0;
    int blue = 0;

    for (int i = 0; i < n; i++){
        if (nums[i]==0){
            red++;
        }
        else if (nums[i]==1){
            white++;
        }
        else {
            blue++;
        }
    }

    vector <int> result (n);

    for (int i=0; i<=red; i++){
        nums[i];
    }

    for (int i=0; i<=white; i++){
        result.push_back(1);
    }

    for (int i=0; i<=blue; i++){
        result.push_back(2);
    }


}