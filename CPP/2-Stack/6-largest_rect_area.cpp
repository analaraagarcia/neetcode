#include <iostream>
#include <vector>
#include <stack>

using namespace std;

// brute force
int largestRectangleArea1(vector<int>& heights) {
    int len = heights.size();
    int maxArea = 0;

    for (int i = 0; i < len; i++) {
        int curHeight = heights[i];
        int left = i;
        while (left >= 0 && heights[left] >= curHeight) {
            left--;
        }

        int right = i;
        while (right < len && heights[right] >= curHeight) {
            right++;
        }

        int width = right - left - 1;
        maxArea = max(maxArea, curHeight * width);
    }

    return maxArea;
}

int largestRectangleArea(vector<int>& heights) {
    stack<int> s;
    heights.push_back(0);
    int len = heights.size();
    int maxArea = 0;

    for (int i = 0; i < len; i++) {
        while (!s.empty() && heights[i] < heights[s.top()]) {
            int h = heights[s.top()];
            s.pop();

            int width = s.empty() ? i : i - s.top() - 1;
            maxArea = max(maxArea, h * width);
        }
        s.push(i);
    }
    heights.pop_back();

    return maxArea;
}

int main() {
    vector<int> heights = {2, 1, 5, 6, 2, 3};

    int max = largestRectangleArea(heights);
    cout << max;

    return 0;
}