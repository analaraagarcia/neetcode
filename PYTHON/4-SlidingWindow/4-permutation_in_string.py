def checkInclusion(s1: str, s2: str) -> bool:
    if len(s1) > len(s2):
        return False
    
    s1_cont, s2_cont = [0] * 26, [0] * 26
    for i in range(len(s1)):
        s1_cont[ord(s1[i]) - ord('a')] += 1
        s2_cont[ord(s2[i]) - ord('a')] += 1

    match = 0
    for i in range(26):
        match += (1 if s1_cont[i] == s2_cont[i] else 0)

    left = 0
    for right in range(len(s1), len(s2)):
        if match == 26:
            return True

        ind = ord(s2[right]) - ord('a')
        s2_cont[ind] += 1

        if s1_cont[ind] == s2_cont[ind]:
            match += 1
        elif s1_cont[ind] + 1 == s2_cont[ind]:
            match -= 1

        ind = ord(s2[left]) - ord('a')
        s2_cont[ind] -= 1

        if s1_cont[ind] == s2_cont[ind]:
            match += 1
        elif s1_cont[ind] + 1 == s2_cont[ind]:
            match -= 1
        
        left += 1

    return match == 26

if __name__ == "__main__":
    print(checkInclusion(s1="abc", s2="lecabee"))
