#include <iostream>

using namespace std;

int sum_digits(int n){
    int a = n%10;
    int b = n/10;
    return a+b;
}

int main(){
    int t;
    cin>>t;
    for (int i=1; i<=t; i++){
        int n;
        cin >> n;
        cout << sum_digits(n) << endl;
    }
}