#include <iostream>
#include <vector>

using namespace std;

// brute force
vector<int> productExceptSelf2(vector<int>& nums) {
    vector<int> res;
    int len = nums.size();
    for (int i = 0; i < len; i++) {
        int prod = 1;
        for (int j = 0; j < len; j++) {
            if (j != i) {
                prod *= nums[j];
            }
        }
        res.push_back(prod);
    }

    return res;
}

// melhor solução
vector<int> productExceptSelf(vector<int>& nums) {
    int len = nums.size();
    vector<int> res(len, 1);
    int leftProd = 1;
    for (int i = 0; i < len; i++) {
        res[i] = leftProd;
        leftProd *= nums[i];
    }

    int rightProd = 1;
    for (int i = len - 1; i >= 0; i--) {
        res[i] *= rightProd;
        rightProd *= nums[i];
    }

    return res;
}

int main() {
    vector<int> nums{1, 2, 3, 4};
    vector<int> res = productExceptSelf(nums);
    int len = nums.size();
    for (int i = 0; i < len; i++) {
        cout << res[i] << '\n';
    }

}