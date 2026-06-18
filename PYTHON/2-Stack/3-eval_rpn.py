from typing import List

def evalRPN(tokens: List[int]) -> int:
    while len(tokens) > 1:
        for i in range(len(tokens)):
            if tokens[i] in "+-*/":
                a = int(tokens[i - 2])
                b = int(tokens[i - 1])
                if tokens[i] == '+':
                    result = a + b
                elif tokens[i] == '-':
                    result = a - b
                elif tokens[i] == '*':
                    result = a * b
                elif tokens[i] == '/':
                    result = int(a / b)
                tokens = tokens[: i - 2] + [str(result)] + tokens[i + 1 :]
                break
    return int(tokens[0])

if __name__ == "__main__":
    tokens = ["1","2","+","3","*","4","-"]
    print(evalRPN(tokens))