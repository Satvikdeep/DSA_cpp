//
//  main.cpp
//  C++ Basic
//
//  Created by Satvik Deep on 18/06/24.
//

//#include <iostream>
//using namespace std;
//
//void nStarDiamond(int n) {
//    for (int i=1;i<=n; i++){
//        for (int a=1; a<=n-i; a++){
//            cout << " ";
//        }
//        for (int b=1; b<=2*i-1; b++){
//            cout << "*";
//        }
//        cout << endl;
//    }
//
//    for (int j=2*n; j>=n+1; j--){
//        for (int a = 1; a <= 2*n-j; a++) {
//            cout << " ";
//        }
//        for (int b = 1; b<=2*(j-n)-1; b++){
//            cout << "*";
//        }
//        cout << endl;
//    }
//}
//
//int main(){
//    int a;
//    cout << "Enter the pattern size : " << endl;
//    cin >> a;
//    
//    nStarDiamond(a);
//    return 0;
//}

#include <iostream>
using namespace std;

void nStarTriangle(int n) {
    for (int i =1; i<=n; i++){
        for (int a=1; a<=i; a++){
            cout << "*";
        }
        cout << endl;
    }
    for (int j = 2*n-1; j>=n+1; j--){
        for (int a = 1; a<=j-n; a++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int a;
    cout << "Enter the pattern size : " << endl;
    cin >> a;
    
    nStarTriangle(a);
    return 0;
}
