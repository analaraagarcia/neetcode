#include <iostream>
#include <unordered_map>
#include <vector>
#include <utility>

// brute force
std::vector<int> twoSum1(std::vector<int>& nums, int target) {
    std::vector<int> sum;
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
std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;
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

    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    std::vector<int> result = twoSum(nums, target);
    if (!result.empty()) {
        std::cout << "[" << result[0] << "," << result[1] << "]";
    } else {
        std::cout << "[]";
    }
    return 0;
}