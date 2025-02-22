#include <iostream>
#include <vector>
#include <set>

using namespace std;

void distinct_char (int n, vector <int>& a, vector <int>& b){

    set <int> set_a;
    set <int> set_b;

    for (int i =0; i<n; i++){
        set_a.insert(a[i]);
    }
    for (int j=0; j<n; j++){
        set_b.insert(b[j]);
    }

    int a_size = set_a.size();
    int b_size = set_b.size();

    if (a_size == 1){
        if (b_size >= 3){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    else if (a_size == 2){
        if (b_size >= 2){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

    }

    else if (a_size >= 3){
        cout << "YES" << endl;
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
        int n;
        cin >> n;
        vector <int> a(n);
        for (int i=0;  i<n; i++){
            cin >> a[i];       
        }
        vector <int> b(n);
        for (int j=0; j<n; j++){
            cin >> b[j];
        }

        distinct_char(n, a, b);

    }

    return 0;
}