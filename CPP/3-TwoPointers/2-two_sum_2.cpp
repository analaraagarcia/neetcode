#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int index1 = 0;
    int index2 = numbers.size() - 1;

    while (index1 < index2) {
        int sum = numbers[index1] + numbers[index2];

        if (sum == target) {
            return {index1 + 1, index2 + 1};
        }

        if (sum < target) {
            index1++;
        } else {
            index2--;
        }
    }
    return {};
}

int main() {
    vector<int> numbers = {5, 25, 75};
    int target = 100;

    vector<int> resp = twoSum(numbers, target);

    for (int& num : resp) {
        cout << num << " ";
    }

    return 0;
}