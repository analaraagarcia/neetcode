# def isValid(s: str) -> bool:
#     pilha = []

#     for i in s:
#         if i == '(' or i == '[' or i == '{':
#             pilha.append(i)
#         else:
#             if not pilha:
#                 return False
#             else:
#                 t = pilha.pop()
#                 if i == ')' and t != '(' or i == ']' and t != '[' or i == '}' and t != '{':
#                     return False
    
#     return not pilha

# outra forma:
def isValid(s: str) -> bool:
    pilha = []
    pares = {')': '(', ']': '[', '}': '{'}

    for c in s:
        if c in pares:
            topo = pilha.pop() if pilha else '#'
            if pares[c] != topo:
                return False
        else:
            pilha.append(c)
    return not pilha

def main():
    s = "[]"
    print(isValid(s))

if __name__ == "__main__":
    main()