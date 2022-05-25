#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curr_profit = 0, curr = 0, i = 0;
        
        while(i < prices.size()){
            curr_profit = max(curr_profit, prices[i] - prices[curr]);
            if(prices[i] - prices[curr] < 0) curr = i;
            i++;
        }
        return curr_profit;
    }
};

int main(){

    Solution mySolution;
    vector<int> prices = {7, 6, 5, 1, 22};
    cout << mySolution.maxProfit(prices);
}