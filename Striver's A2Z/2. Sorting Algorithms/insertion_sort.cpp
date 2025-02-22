#include <iostream>
using namespace std;

void insertion_sort (int arr[], int n){
    for (int i=1; i<n; i++){
        for (int j=0; j<i; j++){
            if (arr[j]>arr[i]){
                int temp = arr[i];
                for  (int x=i-1; x>=j; x--){
                    arr[x+1] = arr[x];
                }
                arr [j] = temp;
            }
        }
    }
    cout << "After insertion sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main(){
  int arr[] = {13,46,24,52,20,9};
  int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before insertion sort: " << "\n";
    for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
    }
    cout << "\n";
    insertion_sort(arr, n);
    return 0;
}



