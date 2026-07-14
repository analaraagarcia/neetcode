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

if __name__ == "__main__":
    matrix = [[1,2,4,8],[10,11,12,13],[14,20,30,40]]
    target = 10
    print(searchMatrix(matrix, target))