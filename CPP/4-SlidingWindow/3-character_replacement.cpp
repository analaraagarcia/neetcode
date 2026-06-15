#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int characterReplacement(string s, int k) {
    int res = 0;
    int len = s.size();
    unordered_map<char, int> count;
    int left = 0;
    int maxFreq = 0;
    
    for (int right = 0; right < len; right++) {
        count[s[right]]++;
        maxFreq = max(maxFreq, count[s[right]]);

        while ((right - left + 1) - maxFreq > k) {
            count[s[left]]--;
            left++;
        }
        res = max(res, right - left + 1);
    }
    return res;
}

int main() {
    string s = "AABABBA";
    
    cout << characterReplacement(s, 2);

    return 0;
}