
def isPalindrome(s:str) -> bool:
    esq, dir = 0, len(s) - 1

    while esq < dir:
        while esq < dir and not s[esq].isalnum():
            esq += 1
        while esq < dir and not s[dir].isalnum():
            dir -= 1
        if s[esq].lower() != s[dir].lower():
            return False
        esq += 1
        dir -= 1
    
    return True

# mais otimizado
# def isPalindrome(s: str) -> bool:
#         r = "".join(c for c in s.lower() if c.isalnum())
#         n = len(r)

#         for i in range(n // 2):
#             if r[i] != r[n - 1 - i]:
#                 return False

#         return True

if __name__ == "__main__":
    s = "Was it a car or a cat I saw?"
    print(isPalindrome(s))