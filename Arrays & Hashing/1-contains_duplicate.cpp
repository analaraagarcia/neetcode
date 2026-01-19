#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

// resolução bruta:
bool containsDuplicateBrute(vector<int>& nums) {
    int len = nums.size();

    for (int i = 0; i < len; i++)
        for (int j = i + 1; j < len; j++) 
            if (nums[i] == nums[j])
                return true;

    return false;
}

// usando hash:
bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> numbers;

    for (int num : nums) {
        if (numbers.contains(num))
            return true;
        
        numbers.insert(num);
    }

    return false;
}

int main() {

    vector<int> nums = {1,2,3,1};

    cout << containsDuplicateBrute(nums);

    return 0;
}