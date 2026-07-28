#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// brute force
int search(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    vector<int> nums = {-1, 0, 2, 4, 6, 8};
    int target = 4;
    cout << search(nums, target);
}