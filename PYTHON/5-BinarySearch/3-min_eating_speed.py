from typing import List
import math

# brute force
# def minEatingSpeed(piles: List[int], h: int) -> int:
#     speed = 1
#     while True:
#         totalTime = 0
#         for pile in piles:
#             totalTime += math.ceil(pile / speed)
#         if totalTime <= h:
#             return speed
#         speed += 1

# binary search
def minEatingSpeed(piles: List[int], h: int) -> int:
    left, right = 1, max(piles)
    res = right

    while left <= right:
        k = (left + right) // 2
        totalTime = 0
        for pile in piles:
            totalTime += math.ceil(float(pile) / k)
        if totalTime <= h:
            res = k
            right = k - 1
        else:
            left = k + 1
    
    return res

if __name__ == "__main__":
    piles = [25,10,23,4]
    h = 4
    print(minEatingSpeed(piles, h))