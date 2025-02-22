#include <iostream>
#include <vector>

using namespace std;

int second_largest (vector <int> nums){
	int n = nums.size();
	int max = INT_MIN;
	int sec_max = INT_MIN;

	for (int i = 0; i < n; i++){
        if (nums[i] >= max){
            sec_max = max;
            max = nums[i];
            
        }   
        else if (nums[i] > sec_max && max > nums[i]) {
            sec_max = nums[i];
        }
    }
    return sec_max;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
	int n;
	cin >> n;
	vector <int> nums (n);
	for (int i = 0; i < n; i++){
		cin >> nums[i];
    }
    cout << second_largest(nums) << endl;
    return 0;
}