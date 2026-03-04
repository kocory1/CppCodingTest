n = int(input())
paper = [[0] * 100 for _ in range(100)]
for i in range(n):
    x, y = map(int, input().split())
    for dx in range(x, x + 10):
        for dy in range(y, y + 10):
            paper[dx][dy] = 1
answer = 0
for i in range(100):
    for j in range(100):
        if paper[i][j] == 1:
            answer += 1
print(answer)
