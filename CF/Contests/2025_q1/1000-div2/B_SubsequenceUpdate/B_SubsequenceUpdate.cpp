#include <bits/stdc++.h>

using namespace std;



void seq_update(int n, int l, int r, vector<int> nums) {

    vector<int> arr1(nums.begin(), nums.begin() + r);
    vector<int> arr2(nums.begin() + (l-1), nums.end());


    

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    long long sum1 = 0;

    long long sum2 = 0;

    int len = r-l+1;
    if(len > arr1.size()) len = arr1.size();
    for(int i = 0; i < len; i++) {
        sum1 += arr1[i];
    }
    
    len = r-l+1;
    if(len > arr2.size()) len = arr2.size();
    for(int i = 0; i < len; i++) {
        sum2 += arr2[i];
    }

    long long sum = min(sum1, sum2);


 
    cout << sum << endl;
    
}



// int main(){

//     #ifndef ONLINE_JUDGE
//         freopen("input.txt", "r", stdin);
//         freopen("output.txt", "w", stdout);
//     #endif

//     int t;
//     cin >> t;


//     for (int i = 0; i < t; i++){
//         int n;
//         int l;
//         int r;
//         cin >> n >> l >> r;


//         vector <int> nums;
//         for (int j = 0; j<n; j++){
//             int x;
//             cin >> x;
//             nums.push_back(x);
//         }


//         seq_update(n,l,r, nums);
//     }
// }

