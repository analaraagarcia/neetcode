#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
    std::unordered_map<int, int> mp;

    for (int num : nums) {
        mp[num]++;
    }

    using Pii = std::pair<int, int>;
    std::priority_queue<Pii, std::vector<Pii>, std::greater<Pii>> minHeap;

    for (auto& pair : mp) {
        minHeap.push({pair.second, pair.first});
        if (minHeap.size() > k) {
            minHeap.pop();
        }
    }

    std::vector<int> result;

    while (!minHeap.empty()) {
        result.push_back(minHeap.top().second);
        minHeap.pop();
    }

    return result;
}

std::vector<int> topKFrequent2(std::vector<int>& nums, int k) {
    std::unordered_map<int, int> mp;
    std::priority_queue<std::pair<int, int>> pq;

    for (int num : nums) {
        mp[num]++;
    }

    for (auto it : mp) {
        pq.push({it.second, it.first});
    }

    std::vector<int> ans;

    while (k) {
        ans.push_back(pq.top().second);
        pq.pop();
        k--;
    }

    return ans;
}


int main() {

    return 0;
}