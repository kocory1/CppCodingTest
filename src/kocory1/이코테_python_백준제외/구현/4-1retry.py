n = int(input())
x, y = 1, 1
plans = input().split()
moves = {"L": (0, -1), "R": (0, 1), "U": (-1, 0), "D": (1, 0)}

for p in plans:
    dx, dy = moves[p]
    dx += x
    dy += y
    if dx < 1 or dx > n or dy < 1 or dy > n:
        continue
    x, y = dx, dy
print(x, y)
