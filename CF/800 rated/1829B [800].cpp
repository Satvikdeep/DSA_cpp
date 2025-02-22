#include <iostream>
#include <vector>
using namespace std;

int blankspace(vector <int> list){
    int max_blank = 0;
    int current_blank = 0;
    
    for (int nums:list){
        if (nums == 0){
            current_blank = current_blank + 1;
        }

        else{
            max_blank = max(current_blank, max_blank);
            current_blank=0;
        }
    }
    max_blank = max(current_blank, max_blank);
    return max_blank;

}


int main(){
    int n;
    cin >> n;
    vector <int> output;
    for (int i = 0; i<n; i++){
        int t;
        cin >> t;
        vector<int> arr(t);
        for (int &x : arr) {
            cin >> x;
        }

        int result = blankspace(arr);
        output.push_back(result);
    }

    for (auto i : output)
        cout << i << " ";
}
