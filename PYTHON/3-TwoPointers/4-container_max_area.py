from typing import List

def maxArea(heights: List[int]) -> int:
    left, right = 0, len(heights) - 1
    max_area = 0

    while left < right:
        area = min(heights[left], heights[right]) * (right - left)
        if area > max_area:
            max_area = area
        
        if heights[left] < heights[right]:
            left += 1
        else:
            right -= 1
    
    return max_area


if __name__ == "__main__":
    heights = [1, 7, 2, 5, 4, 7, 3, 6]
    print(maxArea(heights))
        
