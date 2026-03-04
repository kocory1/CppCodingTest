knight = input()
row = int(knight[1])
column = int(ord(knight[0])) - int(ord("a")) + 1
moves = [(1, 2), (1, -2), (-1, 2), (-1, -2), (2, 1), (2, -1), (-2, 1), (2, -1)]
result = 0
for m in moves:
    dr = row + m[0]
    dc = column + m[1]
    if dr > 8 or dr < 1 or dc > 8 or dc < 1:
        continue
    result += 1
print(result)
