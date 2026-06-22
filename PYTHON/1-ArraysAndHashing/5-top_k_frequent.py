from typing import List
from collections import Counter, defaultdict

# O(N log(k))
# def topKFrequent(nums: List[int], k: int) -> List[int]:
#     cont = Counter(nums)
#     top_k = cont.most_common(k)
#     return [num for num, freq in top_k]

# O(N)
def topKFrequent(nums: List[int], k: int) -> List[int]:
    cont = Counter(nums)
    freq = [[] for _ in range(len(nums) + 1)]

    for numero, frequencia in cont.items():
        freq[frequencia].append(numero)

    resp = []

    for i in range(len(freq) - 1, 0, -1):
        for numero in freq[i]:
            resp.append(numero)
            if len(resp) == k:
                return resp

if __name__ == "__main__":
    nums = [1, 2, 2, 3, 3, 3]
    k = 2
    print(topKFrequent(nums, k))


