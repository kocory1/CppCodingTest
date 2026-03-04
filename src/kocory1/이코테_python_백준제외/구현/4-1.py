n = int(input())

map = [[0] * n for _ in range(n)]

loc_x = 0
loc_y = 0

command = input().split()

for i in command:
    if i == "R":
        if loc_x < n - 1:
            loc_x += 1
    elif i == "L":
        if loc_x > 0:
            loc_x += 1
    elif i == "D":
        if loc_y < n - 1:
            loc_y += 1
    elif i == "U":
        if loc_y > 0:
            loc_y -= 1
print(f"{loc_x + 1} {loc_y + 1}")
