from typing import List

def carFleet(target: int, position: List[int], speed: List[int]) -> int:
    cars = list(zip(position, speed)) # para agrupar a posição e a velocidade
    cars.sort(reverse=True) # ordem decrescente

    fleets = []

    for p, s in cars:
        time = (target - p) / s
        if not fleets or time > fleets[-1]:
            fleets.append(time)

    return len(fleets) 

if __name__ == "__main__":
    position = [4, 1, 0, 7]
    speed = [2, 2, 1, 1]
    target = 10
    print(carFleet(target, position, speed))