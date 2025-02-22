#include <iostream>
#include <cmath>

using namespace std;

int coin_transformation(long long n){
    long long count=1;
    long long x = n;

    if (n<=3){
        return 1;
    }

    while (x>3){
        count = count * 2;
        x = floor (x/4);
    }
    return count;

}

int main(){
    int t;
    cin >> t;
    for (int i = 0; i< t; i++){
        long long n;
        cin >> n;
        cout << coin_transformation(n) << endl; 
    }
}

