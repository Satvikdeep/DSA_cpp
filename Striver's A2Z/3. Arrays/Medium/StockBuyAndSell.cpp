#include <iostream>
#include <vector>

using namespace std;

//brute approach

int maxProfit(vector<int>& prices) {
    int n = prices.size();
    int max_profit = 0;
    int profit =0;
    for (int i = 0; i<n-1; i++){
        for (int j = i+1; j<n; j++){
            profit = prices[j]-prices[i];
            max_profit = max(max_profit, profit);
        }
        
    }
    return max_profit;
    
}

//optimal approach

int maxProfit(vector<int>& prices) {
int n = prices.size();
int max_profit = 0;
int profit = 0;
int smallest_precede = prices [0];
for (int i = 1; i<n; i++){
    profit = prices[i] - smallest_precede; 
    smallest_precede = min (smallest_precede, prices[i]);
    max_profit = max(max_profit, profit);
}
return max_profit;

}

