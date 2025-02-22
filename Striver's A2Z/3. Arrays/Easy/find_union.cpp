#include <iostream>;
#include <set>;
using namespace std;

// My approach 

vector<int> findUnion(vector<int> &a, vector<int> &b) {
    set <int> s;
    for (int i = 0; i<a.size(); i++){
        s.insert(a[i]);
    }
    for (int j = 0; j<b.size(); j++){
        s.insert(b[j]);
    }
    
    vector <int> f;
    
    for (auto i:s){
        f.push_back(i);
    }
    return f;
}

//TUF approach

    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int i=0;
        int j=0;
        vector<int> union_arr;
        while(i<a.size() && j<b.size()){
            if (a[i]<=b[j]){
                if (union_arr.size() == 0 || union_arr.back()!=a[i]){
                    union_arr.push_back(a[i]);
                }
                i++;
            }
            else{
                if (union_arr.size() == 0 || union_arr.back()!=b[j]){
                    union_arr.push_back(b[j]);
                }
                j++;
            }
        }
        
        while (j<b.size()){
            if (union_arr.size() == 0 || union_arr.back()!=b[j]){
                union_arr.push_back(b[j]);
            }
            j++;
        }
        while (i<a.size()){
            if (union_arr.size() == 0 || union_arr.back()!=a[i]){
                union_arr.push_back(a[i]);
            }
            i++;
        }
        
        return union_arr;
    }

    44