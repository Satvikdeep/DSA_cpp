#include <iostream>
#include <set>
#include <cmath>

using namespace std;

int digits (long long n, int d){
    //3,5,7,9
    set <int> arr;
    arr.insert(1);

    unsigned long long fact = 1; 
    for (int i=1; i<=n; i++){
        fact *= i;
    }
    
    if (d == 5) {
        arr.insert(5);
    }
    
    if ((fact*d) % 9 == 0){
        arr.insert(3);
        arr.insert(9);
    }

    if((fact*d) % 9 != 0 && (fact*d) % 3 == 0){
        arr.insert(3);
    }


    int mod = 0;
    for (unsigned long long i=0; i <fact; i++){
        mod = (mod * 10 + (i)) % 7;
    }

    if(mod==0){
        arr.insert(7);
    }


    for (auto i:arr){
        cout << i << " ";
    }

    return 0;

}



int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        long long n;
        int d;
        cin >> n >> d;
        digits(n, d);
        cout << endl;
    }
}