
def characterReplacement(s: str, k: int) -> int:
    res = 0
    char_set = set(s)

    for c in char_set:
        cont = left = 0
        for right in range(len(s)):
            if s[right] == c:
                cont += 1
            
            while (right - left + 1) - cont > k:
                if s[left] == c:
                    cont -= 1
                
                left += 1
            
            res = max(res, right - left + 1)
        
    return res

if __name__ == "__main__":
    print(characterReplacement(s="XYYX", k=2))