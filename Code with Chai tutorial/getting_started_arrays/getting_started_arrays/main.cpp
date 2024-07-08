//
//  main.cpp
//  getting_started_arrays
//
//  Created by Satvik Deep on 25/05/24.
//

#include <iostream>
using namespace std;


int main() {
    int integer_array[4]={1,2,3,4};
    cout << integer_array[0] << endl;
    
    int another_array[4];
    another_array[0] = 9;
    
    cout << another_array[0] << endl;
    *another_array = 29;
    cout << another_array[0] << endl;
    
    int *ap = another_array;
    ap = ap+1;
    *ap = 209;
    cout << another_array[1] << endl;
    
    return 0;
}

  
