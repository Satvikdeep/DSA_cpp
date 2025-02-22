#include <iostream>
#include <vector>

using namespace std;

long long int increasing_array(int n, vector<long long int> arr){
    long long int count = 0;
    for (int i = 1; i<n; i++){
        if (arr[i]<arr[i-1]){
            count = count + (arr[i-1]-arr[i]);
            arr[i] = arr[i]+(arr[i-1]-arr[i]);
        }
        else{
            continue;
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    vector<long long int> arr (n);
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << increasing_array(n, arr);
}