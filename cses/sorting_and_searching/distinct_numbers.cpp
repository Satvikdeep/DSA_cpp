#include <iostream>
#include <set>
#include <vector>

using namespace std;

long distinct_numbers(int n , vector <long> arr){
    set <long> set;
    for (long i=0; i<n; i++){
        set.insert(arr[i]);
    }

    return set.size();
}

int main(){
    int n;
    cin >> n;
    vector <long> arr (n);
    for (long i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << distinct_numbers(n,arr);
}