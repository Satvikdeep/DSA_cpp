// #include <bits/stdc++.h>

// using namespace std;

// void non_increasing1(int n, int m, vector <int>& a, vector<int> b){
//     int x=b[0];
//     for (int i=0; i<n-1; i++){
//         if (a[i] > a[i+1]){
//             if (x-a[i] <= a[i+1]){
//                 a[i] = x - a[i];
//             }

//             else if (x-a[i+1] >= a[i]){
//                 a[i+1] = x-a[i+1];
//             }

//             else {
//                 continue;
//             }
//         }

//     }
//     int count = 0;
//     for (int i=0; i<n-1; i++){
//         if (a[i]>a[i+1]){
//             count++;
//         }
//         else{
//             continue;
//         }
//     }
//     if (count >= 1){
//         cout << "NO"<< endl; 
//     }
//     else {
//         cout << "YES" << endl;
//     }

// }

// int main() {
//     #ifndef ONLINE_JUDGE
//         freopen("input.txt", "r", stdin);
//         freopen("output.txt", "w", stdout);
//     #endif

//     int t;
//     cin >> t;
//     while (t--) {
//         int n,m;
//         cin >> n >> m;
//         vector <int> a(n);
//         vector <int> b(m);

//         for (int i=0; i<n; i++){
//             cin >> a[i];
//         }
//         for (int j=0; j<m; j++){
//             cin >> b[j];
//         }
//         non_increasing1(n,m,a,b);
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void non_increasing1(int n, int m, vector<int>& a, vector<int> b) {
    int x = b[0];
    vector<int> best = a;  
    
    
    for(int i = 0; i < n; i++) {
        vector<int> temp = a;
        temp[i] = x - temp[i];  
        
        
        bool better = true;
        for(int j = 0; j < n-1; j++) {
            if(temp[j] > temp[j+1]) {
                better = false;
                break;
            }
        }
        if(better) {
            best = temp;
        }
    }
    
    
    bool is_sorted = true;
    for(int i = 0; i < n-1; i++) {
        if(best[i] > best[i+1]) {
            is_sorted = false;
            break;
        }
    }
    
    cout << (is_sorted ? "YES" : "NO") << endl;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int j = 0; j < m; j++) {
            cin >> b[j];
        }
        non_increasing1(n, m, a, b);
    }
    return 0;
}