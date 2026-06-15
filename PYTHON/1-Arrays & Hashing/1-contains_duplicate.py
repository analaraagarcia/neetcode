from typing import List

# def hasDuplicate(nums: List[int]) -> bool:
#     num_dict = {}
#     for num in nums:
#         if num in num_dict:
#             return True
#         else:
#             num_dict[num] = 1
    
#     return False

# melhor forma
def hasDuplicate(nums: List[int]) -> bool:
    return len(set(nums)) != len(nums)

def main():
    nums = [1, 2, 3, 3]
    print(hasDuplicate(nums))

if __name__ == "__main__":
    main()