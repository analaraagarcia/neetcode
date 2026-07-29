#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// brute force
int minEatingSpeed(vector<int>& piles, int h) {
    int speed = 1;
    while (true) {
        long long totalTime = 0;
        for (int pile : piles) {
            totalTime += (pile + speed - 1) / speed;
        }

        if (totalTime <= h) {
            return speed;
        }

        speed++;
    }
}

int main() {
    vector<int> piles = {1, 4, 3, 2};
    int h = 9;
    cout << minEatingSpeed(piles, h);
}