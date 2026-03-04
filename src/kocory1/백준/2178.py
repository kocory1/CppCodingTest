from collections import deque

n, m = map(int, input().split())
graph = [list(map(int, input())) for _ in range(n)]

i, j = 0, 0
queue = deque()
queue.append([i, j])
while queue:
    i, j = queue.popleft()
    dx = [1, -1, 0, 0]
    dy = [0, 0, 1, -1]
    for k in range(4):
        if -1 < i + dx[k] < n and -1 < j + dy[k] < m:
            if graph[i + dx[k]][j + dy[k]] == 1:
                graph[i + dx[k]][j + dy[k]] = 1 + graph[i][j]
                queue.append([i + dx[k], j + dy[k]])

print(graph[n - 1][m - 1])
