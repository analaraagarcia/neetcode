#include <iostream>
#include <vector>

using namespace std;

int search(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (target == nums[mid]) {
            return mid;
        }
        if (nums[left] <= nums[mid]) {
            if (target > nums[mid] || target < nums[left]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        } else {
            if (target < nums[mid] || target > nums[right]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {3, 4, 5, 6, 1, 2};
    int target = 1;
    cout << search(nums, target);
}