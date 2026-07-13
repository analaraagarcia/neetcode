from typing import List
import bisect

def search(nums: List[int], target: int) -> int:
    lista = enumerate(nums)
    for i, num in lista:
        if num == target:
            return i
    return -1

if __name__ == "__main__":
    nums = [-1, 0, 2, 4, 6, 8]
    target = 4
    print(search(nums, target))