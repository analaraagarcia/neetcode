#include <iostream>
#include <vector>

using namespace std;

// brute force
bool isValidSudoku2(vector<vector<char>> &board) {    
    int seenRows[9][10] = {0};
    int seenCols[9][10] = {0};
    int seenBoxes[9][10] = {0};

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            char current = board[i][j];

            if (current == '.') {
                continue;
            }

            int num = current - '0';

            int boxIndex = (i / 3) * 3 + (j / 3);

            if (seenRows[i][num] || seenCols[j][num] || seenBoxes[boxIndex][num]) {
                return false;
            }

            seenRows[i][num] = 1;
            seenCols[j][num] = 1;
            seenBoxes[boxIndex][num] = 1;
        }
    }

    return true;
}

int main() {
    vector<vector<char>> board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };

    cout << isValidSudoku2(board);
}