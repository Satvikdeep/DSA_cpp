#include <iostream>
#include <vector>

using namespace std;

void permutations(int n){

    vector <int> arr;
    if (n<=3){
        cout << "NO SOLUTION";

    }
    else{
        for(int i=0; i<n; i=i+2){
            arr[i]=n-i;
        }
        for(int j = n; j>0; j=j-2){
            arr[j]=n-j;
        }
        cut 
    }

}