#include <bits/stdc++.h>

using namespace std;

void plural_term (string a){
    int n = a.length();
    if ( n >= 3){
        string result = a.substr(0,n-2)+ 'i';
        cout << result << endl;
    }
    else{
        cout << 'i' << endl;
    }
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
        plural_term(a);
    }
    return 0;
}