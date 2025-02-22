#include <iostream>
using namespace std;

//better approach

int getSecondLargest(vector<int> &arr) {
    int largest_element = arr[0];
    for (int i:arr){
        largest_element = max(i,largest_element);
    }
    int sec_largest = -1;
    for (int i:arr){
        if (i!=largest_element){
            sec_largest = max(i,sec_largest);
        }
    }
    return sec_largest;
}

//optimal approach

int getSecondLargest(vector<int> &arr) {
    int largest = arr[0];
    int s_largest = -1;

    for (int i:arr){
        if(i>largest){
            s_largest = largest;
            largest = i;
        }
        else if (i>s_largest and i!= largest){
            s_largest = i;
        }
    }
}