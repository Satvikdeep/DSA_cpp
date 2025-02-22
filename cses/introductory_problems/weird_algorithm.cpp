#include <iostream>

using namespace std;

void weird_algo (long n){

    
    while (n !=1){
        if (n%2 == 0){
            cout << n << " ";
            n = n/2;
        }

        else{
            cout << n << " ";
            n = n*3+1;
        }
    }

    if (n==1){
        cout << 1;
    }
}

int main() {
    long n;
    cin >> n;
    weird_algo(n);
}

