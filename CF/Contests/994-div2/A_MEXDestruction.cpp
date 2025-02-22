#include <iostream>
#include <vector>

using namespace std;

int mex_destruction(int n, vector <int> arr){
    int count=0;
    int x1;
    int x2;

    for (int i = 0; i<n; i++){
        if (arr[i]!=0){
            arr[x1] = arr[i];
        }

        else{
            x1=0;
        }
    }
    for (int j = n-1; j>=0; j--){
        if (arr[j]!=0){
            arr[x1] = arr[j];
        }
        else{
            x2=0;
        }
    }
    if (x1==0){
        return 0;
    }
    
    for (int i=x1; i<=x2; i++){

        if (arr[i]==0){
            return 2;
            count++;
            break;
        }
    }
    if (count == 0){
        return 1;
    }

}

int main(){
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        int n;
        cin >> n;
        vector <int> arr;
        for (int i=0; i<n; i++){
            cin >> arr[i];
        }
        mex_destruction(n, arr);
    }
}