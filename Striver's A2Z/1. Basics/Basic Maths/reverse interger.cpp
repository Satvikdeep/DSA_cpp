#include <iostream>
#include <limits.h>
using namespace std;

int reverse(int x) {
	int revN = 0;
	
	while (x != 0) {
		int temp = x % 10;  

		if (revN > INT_MAX / 10 || (revN == INT_MAX / 10 && temp > 7)) {
			return 0; 
		}
		if (revN < INT_MIN / 10 || (revN == INT_MIN / 10 && temp < -8)) {
			return 0;  
		}

		revN = revN * 10 + temp; 
		x = x/10;  
	}
	
	return revN;
    }