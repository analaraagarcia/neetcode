from typing import List

def twoSum(nums: List[int], target: int) -> List[int]:
    idx_map = {}
    for i, num in enumerate(nums):
        complement = target - num
        if complement in idx_map:
            return [idx_map[complement], i]
        idx_map[num] = i

def main():
    nums = [3, 4, 5, 6]
    target = 7
    print(twoSum(nums, target))

if __name__ == "__main__":
    main()