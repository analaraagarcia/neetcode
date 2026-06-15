def isAnagram(s: str, t: str) -> bool:
    return set(s) == set(t)

def main():
    s = "racecar"
    t = "carrace"
    print(isAnagram(s, t))

if __name__ == "__main__":
    main()