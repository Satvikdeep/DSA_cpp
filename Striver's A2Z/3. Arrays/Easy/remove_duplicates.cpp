#include <iostream>
using namespace std;
#include <set>

// brute force - O(NlogN)
int removeDuplicates(vector<int>& nums) {
    set<int> st;
    for (int i:nums){
        st.insert(i);
    }

    int index =0;
    for (auto j:st){
        nums[index] = j;
        index++;
    }
    cout << st.size() << ", nums = ";
    cout << "[";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i < nums.size() - 1) cout << ",";
    }
    cout << "]" << endl;
    return st.size();
}

//optimal approach - 

int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    int i = 0;
    for (int j = 1; j<n; j++){
        if (nums[j] != nums[i]){
            nums[i+1] = nums[j];
            i++;
        }
    }
    cout << i << ", nums = ";
    cout << "[";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i < nums.size() - 1) cout << ",";
    }
    cout << "]" << endl;
    return i+1;
}