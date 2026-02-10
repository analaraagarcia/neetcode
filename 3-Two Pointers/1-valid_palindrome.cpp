#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s) {
    string frase;
    frase.reserve(s.size());

    for (char& c : s) {
        if (isalnum(c)) {
            frase.push_back(tolower(c));
        }
    }

    int i = 0;
    int j = frase.size() - 1;
    while (i < j) {
        if (frase[i] != frase[j]) {
            return false;
        }
        i++;
        j--;
    }

    return true;
}

int main() {
    string s = "A man, a plan, a canal: Panama";
    cout << isPalindrome(s);

    return 0;
}