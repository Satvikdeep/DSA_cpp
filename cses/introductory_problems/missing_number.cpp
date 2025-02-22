#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int missing_num(int n, unordered_set<int> arr){

    for (int i=1 ; i<=n+1; i++){
        if (arr.count(i) == 0){
            return i;
        }
    }

    return 0;

}

int main(){
    int n;
    cin >> n;
    unordered_set <int> arr;
    for (int i=0;i<n; i++){
        int num;
        cin >> num;
        arr.insert(num);
    }
    cout << missing_num(n, arr);
}