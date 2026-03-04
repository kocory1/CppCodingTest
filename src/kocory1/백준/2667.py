n = int(input())
graph = []

graph = [list(map(int, input())) for _ in range(n)]


def dfs(i, j):
    cnt = 1
    graph[i][j] = 0
    dx = [1, -1, 0, 0]
    dy = [0, 0, 1, -1]
    for k in range(4):
        di = i + dx[k]
        dj = j + dy[k]
        if di > -1 and di < n and dj > -1 and dj < n:
            if graph[di][dj] == 1:
                cnt += dfs(di, dj)
    return cnt


ans = []
bunji = 0
for i in range(n):
    for j in range(n):
        if graph[i][j] == 1:
            ans.append(dfs(i, j))
ans.sort()

print(len(ans))
for out in ans:
    print(out)
