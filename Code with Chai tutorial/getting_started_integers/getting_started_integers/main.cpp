//
//  main.cpp
//  getting_started_integers
//
//  Created by Satvik Deep on 26/05/24.
//


#include <iostream>
#include <cstdint>

using namespace std;

int main() {
    //1 byte is of 8 bits
    
    printf("Size of this data type is %ld bits\n", sizeof(uint16_t)*8);
    int fun =  0x16;
    printf("Fun value is %d\n", fun);
    
    return 0;
}
