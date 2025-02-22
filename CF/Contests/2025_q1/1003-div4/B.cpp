#include <bits/stdc++.h>

using namespace std;

void oper_x(string a){
    
    int n = a.length();
    // int count = 0;
    for (int i=0; i < n-1; i++){
        if (a [i] == a [i+1]){
            cout << 1 << endl;
            return;
        }
    }

    // if (flag) {pass};

    // if (count>=1){
    //     cout << 1 << endl;
    // }
    // else{
    // }
    cout << n << endl;;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;
        oper_x(a);
    }
    return 0;
}