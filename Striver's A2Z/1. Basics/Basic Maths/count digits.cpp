#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int CountDigits(int n){
	int dc = log10(n) + 1;
	return dc;
}

