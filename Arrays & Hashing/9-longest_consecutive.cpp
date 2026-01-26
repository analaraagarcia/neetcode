#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

int longestConsecutive(vector<int>&  nums) {
    unordered_set<int> s(nums.begin(), nums.end());
    int best = 0;

    for (int n : s) {
        if (s.find(n - 1) == s.end()) {
            int len = 1;
            while (s.find(n + len) != s.end())
                ++len;
            best = max(best, len);
        }
    }

    return best;
}

int main() {
    vector<int> nums = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    
    cout << longestConsecutive(nums);

    return 0;
}