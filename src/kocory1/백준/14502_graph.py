from itertools import combinations

n, m = map(int, input().split())
graph = [list(map(int, input().split())) for _ in range(n)]
viruses = []
safety = []
for i in range(n):
    for j in range(m):
        if graph[i][j] == 2:
            viruses.append([i, j])
        elif graph[i][j] == 0:
            safety.append([i, j])

total_zeros = len(safety)  # 초기 빈 칸 개수
max_safety = 0
dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]


def dfs(graph, x, y):
    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]
        if -1 < nx < n and -1 < ny < m:
            if graph[nx][ny] == 0:
                graph[nx][ny] = 2
                dfs(graph, nx, ny)


def find_safety(graph):
    cnt = 0
    for i in range(n):
        for j in range(m):
            if graph[i][j] == 0:
                cnt += 1
    return cnt


def three_iter():
    max_safety = 0
    for walls in combinations(safety, 3):
        tmp_graph = [line[:] for line in graph]
        for x, y in walls:
            tmp_graph[x][y] = 1

        for vx, vy in viruses:
            dfs(tmp_graph, vx, vy)

        max_safety = max(max_safety, find_safety(tmp_graph))
    return max_safety


print(three_iter())
