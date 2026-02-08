#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> dailyTemperatures(vector<int>& temperatures) {
    int len = temperatures.size();
    vector<int> days(len, 0);
    stack<int> temps;

    for (int i = 0; i < len; i++) {
        while (!temps.empty() && temperatures[i] > temperatures[temps.top()]) {
            int prev = temps.top();
            temps.pop();
            days[prev] = i - prev;
        }
        temps.push(i);
    }
    return days;
}

int main() {
    
}