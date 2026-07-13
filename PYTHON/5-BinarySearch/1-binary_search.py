from typing import List
import bisect

def search(nums: List[int], target: int) -> int:
    lista = enumerate(nums)
    for i, num in lista:
        if num == target:
            return i
    return -1

# # melhor
# def search(nums: List[int], target: int) -> int:
#     left, right = 0, len(nums) - 1
#     while left <= right:
#         mid = left + ((right - left) // 2)
#         if nums[mid] == target:
#             return mid
#         elif nums[mid] < target:
#             left = mid + 1
#         else:
#             right = mid - 1
#     return -1

# # usando bisect
# def search(nums: List[int], target: int) -> int:
#     index = bisect.bisect_left(nums, target)
#     return index if index < len(nums) and nums[index] == target else -1

if __name__ == "__main__":
    nums = [-1, 0, 2, 4, 6, 8]
    target = 4
    print(search(nums, target))