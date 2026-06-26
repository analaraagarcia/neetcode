from typing import List

def twoSum(numbers: List[int], target: int) -> List[int]:
    esq, dir = 0, len(numbers) - 1

    while esq < dir:
        soma = numbers[esq] + numbers[dir]
        if soma == target:
            return [esq + 1, dir + 1]
        
        if soma < target:
            esq += 1
        else:
            dir -= 1
    
    return []

if __name__ == "__main__":
    numbers = [1, 3, 5, 7]
    target = 4
    print(twoSum(numbers, target))