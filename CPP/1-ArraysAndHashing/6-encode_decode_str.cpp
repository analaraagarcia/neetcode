#include <iostream>
#include <string>
#include <vector>

using namespace std;

string encode(vector<string>& strs) {
    // vector<int> tamanhos;
    string geral;
    for (auto& s : strs) {
        // int len = s.size();
        // tamanhos.push_back(len);
        geral.append(s);
        geral.append("#");
    }

    return geral;

}

vector<string> decode(string s) {
    int len = s.size();
    vector<string> strs;

    for (int i = 0; i < len; i++) {
        char carac = s.front();
    }
}

int main() {

    vector<string> strs = {"neet", "code", "love", "you"};

    string result = encode(strs);

    cout << result;
}