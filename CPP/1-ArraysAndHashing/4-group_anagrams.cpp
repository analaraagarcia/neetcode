#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>

std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
    std::vector<std::vector<std::string>> res;
    std::unordered_map<std::string, std::vector<std::string>> mp;

    for (auto& s : strs) {
        std::string key = s;
        sort(key.begin(), key.end());
        mp[key].push_back(s);
    }

    for (auto& p : mp) {
        res.push_back(p.second);
    }

    return res;
}

int main() {

    return 0;
}