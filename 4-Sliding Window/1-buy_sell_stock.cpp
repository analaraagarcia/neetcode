#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int maxProfit(vector<int>& prices) {
    int left = 0;
    int right = 1;
    int max_prof = 0;
    int len = prices.size();

    while (right < len) {
        if (prices[left] < prices[right]) {
            int profit = prices[right] - prices[left];
            max_prof = max(profit, max_prof);
        } else {
            left = right;
        }
        right++;
    }
    return max_prof;       
}

int main() {
    vector<int> prices = {7,1,5,3,6,4};

    cout << maxProfit(prices);

    return 0;
}