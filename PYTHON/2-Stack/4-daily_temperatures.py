from typing import List

def dailyTemperatures(temperatures: List[int]) -> List[int]:
    days = [0] * len(temperatures)
    temps = []

    for i in range(len(temperatures)):
        while temps and temperatures[i] > temperatures[temps[-1]]:
            prev = temps.pop()
            days[prev] = i - prev
        temps.append(i)
    
    return days

if __name__ == "__main__":
    temperatures = [30, 38, 30, 36, 35, 40, 28]
    print(dailyTemperatures(temperatures))