#include <iostream>
#include <vector>

using namespace std;

// melhor
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    
    int left = 0;
    int right = rows * cols - 1;

    while (left <= right) {
        int mid = (right + left) / 2;
        int row = mid / cols;
        int col = mid % cols;
        if (target > matrix[row][col]) {
            left = mid + 1;
        } else if (target < matrix[row][col]) {
            right = mid - 1;
        } else {
            return true;
        }
    }

    return false;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 4, 8}, 
        {10, 11, 12, 13},  
        {14, 20, 30, 40}
    };
    int target = 10;
    
    cout << searchMatrix(matrix, target);
}