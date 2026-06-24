from typing import List

def encode(strs: List[str]) -> str:
    geral = ""
    for s in strs:
        geral = geral + str(len(s)) + "#" + s
    return geral

def decode(s: str) -> List[str]:
    parts = []
    i = 0
    while i < len(s):
        j = s.find("#", i)
        length = int(s[i : j])
        parts.append(s[j + 1 : j + 1 + length])
        i = j + 1 + length
    return parts
    

if __name__ == "__main__":
    strs = ["Hello","World"]
    frase = encode(strs)
    print(decode(frase))