from typing import List

def maxProfit(prices: List[int]) -> int:
    left, right = 0, 1
    max_prof = 0

    while right < len(prices):
        if prices[left] < prices[right]:
            profit = prices[right] - prices[left]
            max_prof = max(profit, max_prof)
        else:
            left = right
        right += 1

    return max_prof

if __name__ == "__main__":
    prices = [10, 1, 5, 6, 7, 1]
    print(maxProfit(prices))