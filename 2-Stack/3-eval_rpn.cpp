#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int evalRPN(vector<string>& tokens) {
        stack<int> nums;

        for (string& t : tokens) {
            if (t == "+" || t == "-" || t == "*" || t == "/") {
                int val2 = nums.top(); 
                nums.pop();

                int val1 = nums.top(); 
                nums.pop();

                if (t == "+") {
                    nums.push(val1 + val2);
                } else if (t == "-") {
                    nums.push(val1 - val2);
                } else if (t == "*") {
                    nums.push(val1 * val2);
                } else if (t == "/") {
                    nums.push(val1 / val2);
                }
            } else {
                nums.push(stoi(t));
            }
        }
        return nums.top();
}

int main() {
    
}