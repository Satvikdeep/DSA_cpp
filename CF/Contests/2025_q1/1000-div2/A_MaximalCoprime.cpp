#include <iostream>
#include <vector>
using namespace std;

int min_coprime(int a, int b){
    int result = b-a;

    if (a==1 && b==1){
        result = 1;
    }

    return result;
}

int main(){
    int n;
    cin >> n;
    for (int i = 0; i<n; i++){
        int a;
        int b;  
        cin >> a >> b;
        cout << min_coprime(a,b)<< endl;
    }
}
