#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> mp;

    for (int num : nums) {
        mp[num]++;
    }

    using Pii = pair<int, int>;
    priority_queue<Pii, vector<Pii>, greater<Pii>> minHeap;

    for (auto& pair : mp) {
        minHeap.push({pair.second, pair.first});
        if (minHeap.size() > k) {
            minHeap.pop();
        }
    }

    vector<int> result;

    while (!minHeap.empty()) {
        result.push_back(minHeap.top().second);
        minHeap.pop();
    }

    return result;
}

// vector<int> topKFrequent2(vector<int>& nums, int k) {
//     unordered_map<int, int> mp;
//     priority_queue<pair<int, int>> pq;

//     for (int num : nums) {
//         mp[num]++;
//     }

//     for (auto it : mp) {
//         pq.push({it.second, it.first});
//     }

//     vector<int> ans;

//     while (k) {
//         ans.push_back(pq.top().second);
//         pq.pop();
//         k--;
//     }

//     return ans;
// }

int main() {

    return 0;
}