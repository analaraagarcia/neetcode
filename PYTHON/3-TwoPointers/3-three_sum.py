from typing import List

def threeSum(nums: List[int]) -> List[List[int]]:
    nums.sort()

    res = []

    for i, n in enumerate(nums):
        if n > 0: # se o primeiro for maior que zero então todos os próximos vão ser também
            break
        
        if i > 0 and n == nums[i - 1]: # pulando as duplicatas
            continue

        left, right = i + 1, len(nums) - 1 # o da esquerda vai estar logo após o número fixado e o da direita na última posição
        while left < right:
            three_sum = n + nums[left] + nums[right]
            if three_sum > 0:
                right -= 1
            elif three_sum < 0:
                left += 1
            else:
                res.append([n, nums[left], nums[right]])
                left += 1
                right -= 1
                while nums[left] == nums[left - 1] and left < right:
                    left += 1
        
        return res