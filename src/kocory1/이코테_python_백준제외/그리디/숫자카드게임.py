n, m = map(int, input().split())
game = []
min_index = 0
for i in range(n):
    line = list(map(int, input().split()))
    game.append(min(line))
print((max(game)))
