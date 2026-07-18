from typing import List
import bisect

def searchMatrix(matrix: List[List[int]], target: int) -> bool:
    firstColumn = [line[0] for line in matrix]
    idxLine = bisect.bisect_right(firstColumn, target) - 1

    if idxLine < 0:
        return False
    
    lineTarg = matrix[idxLine]
    idxCol = bisect.bisect_left(lineTarg, target)

    return idxCol < len(lineTarg) and lineTarg[idxCol] == target

# # brute force -> time complexity: O(m * n), space complexity: O(1)
# def searchMatrix(matrix: List[List[int]], target: int) -> bool:
#     for i in range(len(matrix)):
#         for j in range(len(matrix[0])):
#             if matrix[i][j] == target:
#                 return True
#     return False

# # binary search one pass
# def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
#     ROWS, COLS = len(matrix), len(matrix[0])

#     l, r = 0, ROWS * COLS - 1
#     while l <= r:
#         m = l + (r - l) // 2
#         row, col = m // COLS, m % COLS
#
#         if target > matrix[row][col]:
#             l = m + 1
#         elif target < matrix[row][col]:
#             r = m - 1
#         else:
#             return True
#     return False

if __name__ == "__main__":
    matrix = [[1,2,4,8],[10,11,12,13],[14,20,30,40]]
    target = 10
    print(searchMatrix(matrix, target))