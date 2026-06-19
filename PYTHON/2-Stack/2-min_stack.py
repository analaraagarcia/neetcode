class MinStack():
    def __init__(self):
        self.mainStack = []
        self.minStack = []

    def push(self, val: int) -> None:
        self.mainStack.append(val)
        val = min(val, self.minStack[-1] if self.minStack else val)
        self.minStack.append(val)
    
    # forma bruta:
    # def push(self, val: int) -> None:
    #     self.mainStack.append(val)
        
    #     if not self.minStack:
    #         self.minStack.append(val)
    #     else:
    #         self.minStack.append(min(val, self.minStack[-1]))

    def pop(self) -> None:
        self.mainStack.pop()
        self.minStack.pop()

    def top(self) -> int:
        return self.mainStack[-1]

    def getMin(self) -> int:
        return self.minStack[-1]

if __name__ == "__main__":
    minStack = MinStack()
    print(
        minStack.push(1),
        minStack.push(2),
        minStack.push(0),
        minStack.getMin(),
        minStack.pop(),
        minStack.top(),
        minStack.getMin()
        )