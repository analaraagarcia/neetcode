#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

bool isValid(string s) {
    stack<char> p;

    for (char i : s) {
        if (i == '(' || i == '[' || i == '{') {
            p.push(i);
        } else {
            if (p.empty()) {
                return false;
            }
            char t = p.top();
            p.pop();
            if ((i == ')' && t != '(') ||
                (i == ']' && t != '[') ||
                (i == '}' && t != '{')) {
                return false;
            }
        }
    }

    return p.empty();
}

int main() {
    string s = "([])";

    cout << isValid(s);

    return 0;
}