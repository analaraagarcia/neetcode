#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// binary search
int minEatingSpeed(vector<int>& piles, int h) {
    int left = 1;
    int right = *max_element(piles.begin(), piles.end());
    int ans = right;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        long long totalTime = 0;
        
        for (int pile : piles) {
            totalTime += (pile + mid - 1) / mid;
        }

        if (totalTime <= h) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return ans;
}

// brute force
// int minEatingSpeed(vector<int>& piles, int h) {
//     int speed = 1;
//     while (true) {
//         long long totalTime = 0;
//         for (int pile : piles) {
//             totalTime += (pile + speed - 1) / speed;
//         }

//         if (totalTime <= h) {
//             return speed;
//         }

//         speed++;
//     }
// }

int main() {
    vector<int> piles = {1, 4, 3, 2};
    int h = 9;
    cout << minEatingSpeed(piles, h);
}