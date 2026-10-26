#include <iostream>
#include <unordered_map>
#include <vector>
#include <utility>

using namespace std;

// brute force
vector<int> twoSum1(vector<int>& nums, int target) {
    vector<int> sum;
    int len = nums.size();
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (nums[i] + nums[j] == target) {
                sum.push_back(i);
                sum.push_back(j);
            }
        }
    }
    return sum;
}

// melhor solução
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    int len = nums.size();
    for (int i = 0; i < len; i++) {
        int complement = target - nums[i];
        if (numMap.count(complement)) {
            return {numMap[complement], i};
        }
        numMap[nums[i]] = i;
    }
    return {};
}

int main() {

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);
    if (!result.empty()) {
        cout << "[" << result[0] << "," << result[1] << "]";
    } else {
        cout << "[]";
    }
    return 0;
}