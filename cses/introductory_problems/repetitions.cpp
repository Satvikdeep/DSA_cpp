#include <iostream>
#include <vector>

using namespace std;

int repetitions(string seq){
int n = seq.size();
int max_count=1;
int count = 1;
for (int i = 1; i<n; i++){
    if (seq[i-1]==seq[i]){
        count ++;
    }

    else{
        count = 1;
    }
    max_count = max(max_count, count);
    }
    return max_count;
}

int main(){
    string seq;
    cin >> seq;
    cout << repetitions(seq);
}