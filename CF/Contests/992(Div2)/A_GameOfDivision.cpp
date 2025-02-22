#include <iostream>
#include <vector>
using namespace std;

void game_of_division(int n, int k, vector <int> arr){
    int total_count = 0;
    for (int i=0; i<n; i++){
        int count = 0;
        for (int j = 0; j<n; j++){
            if (i!=j){
                if (abs(arr[i] - arr[j]) % k == 0){
                    count++;
                }
            }
        }
        if (count == 0){
            cout << "YES" << endl;
            cout << i+1 << endl;
            return;
        }
        else {
            total_count++;
        }
    }
    if (total_count==n){
        cout << "NO" <<endl;   
    }

}

int main(){
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        int n;
        int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        game_of_division(n, k, arr);
    }
    
}
