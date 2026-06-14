#include <iostream>
#include <vector>

using namespace std;

int maxArea(vector<int>& height) {
    int max_area = 0;
    int len = height.size();
    int left = 0;
    int right = len - 1;

    while (left < right) {
        int area = min(height[left], height[right]) * (right - left);
        if (area > max_area) {
            max_area = area;
        }
        
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return max_area;
}

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    int area = maxArea(height);
    cout << area;

    return 0;
}