#include <iostream>
#include <string>
#include <vector>

std::string encode(std::vector<std::string>& strs) {
    // std::vector<int> tamanhos;
    std::string geral;
    for (auto& s : strs) {
        // int len = s.size();
        // tamanhos.push_back(len);
        geral.append(s);
        geral.append("#");
    }

    return geral;

}

std::vector<std::string> decode(std::string s) {
    int len = s.size();
    std::vector<std::string> strs;

    for (int i = 0; i < len; i++) {
        char carac = s.front();
    }
}

int main() {

    std::vector<std::string> strs = {"neet", "code", "love", "you"};

    std::string result = encode(strs);

    std::cout << result;
}