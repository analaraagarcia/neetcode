#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int lengthOfLongestSubstring(string s) {
    int left = 0;
    int longest = 1;
    int len = s.size();
    unordered_set<char> memory;

    for (int i = 0; i < len; i++) {
        while (memory.find(s[i]) != memory.end()) {
            memory.erase(s[left]);
            left++;
        }
        memory.insert(s[i]);
        longest = max(longest, i - left + 1);
    }
    return longest;   
}