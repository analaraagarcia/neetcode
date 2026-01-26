#include <iostream>
#include <string>
#include <unordered_map>

bool isAanagram(std::string s, std::string t) {
    std::unordered_map<char, int> m;
    std::unordered_map<char, int> n;

    for (char carac : s) {
        m[carac]++;
    }

    for (char carac : t) {
        n[carac]++;
    }

    if (m == n) {
        return true;
    }

    return false;
}

int main() {
    std::string s = "banana";
    std::string t = "nanabaa";

    std::cout << isAanagram(s, t);

    return 0;
}