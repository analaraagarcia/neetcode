#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// brute force
// int findMin(vector<int>& nums) {
//     return *min_element(nums.begin(), nums.end());
// }

int findMin(vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] < nums[right]) {
            right = mid;
        } else if (nums[mid] > nums[right]) {
            left = mid + 1;
        }
    }

    return nums[right];
}

int main() {
    vector<int> nums = {3, 4, 5, 6, 1, 2};
    cout << findMin(nums);
}