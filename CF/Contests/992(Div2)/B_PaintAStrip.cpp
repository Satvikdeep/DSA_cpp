#include <iostream>
#include <cmath>
#include <functional>
using namespace std;

int paint_a_strip(int n) {
    int count = 1;
    
    function<void(int)> second_operation = [&](int x) {
        count++;
        if (x > 4) {
            int x_half = ceil(x / 2.0);
            second_operation(x_half);
        }

        else{
            count++; 
        }
    };
    
    
    
    if (n == 2 || n == 3 || n == 4) {
        count++;
    }
    
    if (n>4){
        second_operation(n);
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        cout << paint_a_strip(n) << endl;
    }
    
    return 0;
}