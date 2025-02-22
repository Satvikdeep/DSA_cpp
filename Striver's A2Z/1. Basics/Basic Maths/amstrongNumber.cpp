//{ Driver Code Starts
// Initial Template for C++
#include <iostream>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n) {
      int x = n;
      int sum=0;
      while (x > 0) {
        int a = x%10;
        sum = sum + a*a*a;
        x = x/10;
      }

      if (sum==n){
        return "true";
      }
      else{
        return "false";
      }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends