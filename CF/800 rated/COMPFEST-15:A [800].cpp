.#include <iostream>
using namespace std;

int ambitious_kid(int n, int list[]){
    int x;
    int a = abs(list[0]);
    for (int i=0; i<n; i++){
        x = abs (list[i]);
        if (x<=a){
            a = x;
        }
    }
    return a;
    
    
}

int main(){
    int n;
    cin >> n;
    int ls[n];
    for (int i=0; i<n; i++){
        cin >> ls[i];
    }
    int result = ambitious_kid(n, ls);
    cout << result;
}
