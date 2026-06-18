from typing import List
# from collections import defaultdict

def groupAnagrams(strs: List[str]) -> List[List[str]]:
    mp = {} # também daria para usar o defaultdict, assim não teria que fazer a verificação se a chave já existe

    for s in strs:
        key = "".join(sorted(s))
        
        if key not in mp:
            mp[key] = []
        
        mp[key].append(s) # default dict: mp.setdefault(key, []).append(s)
    
    return list(mp.values())


if __name__ == "__main__":
    strs = ["act","pots","tops","cat","stop","hat"]
    print(groupAnagrams(strs))