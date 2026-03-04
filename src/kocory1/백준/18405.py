from collections import deque

n, k = map(int, input().split())
graph = [list(map(int, input().split())) for _ in range(n)]
s, x_, y_ = map(int, input().split())

queue = deque()
c = 0
viruses = []
# print(graph)
for i in range(n):
    for j in range(n):
        if graph[i][j] != 0:
            viruses.append((i, j, graph[i][j]))

viruses.sort(key=lambda x: x[2])
for x, y, _ in viruses:
    queue.append((x, y, 0))

dx = [-1, 1, 0, 0]
dy = [0, 0, 1, -1]


# def print_graph(graph):
#     for i in range(n):
#         for j in range(k):
#             print(graph[i][j], end=" ")
#         print()


while queue:
    # print_graph(graph)
    x, y, cnt = queue.popleft()  # 드가자
    if cnt > s:  # 근데 s보다 이후면
        break  # 브레이크
    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]
        if -1 < nx < n and -1 < ny < n:
            if graph[nx][ny] == 0 and cnt < s:  # 미방문 지역이고 시간 초과 ㄴㄴ면 감염
                graph[nx][ny] = graph[x][y]  # 감염
                queue.append((nx, ny, cnt + 1))
print(graph[x_ - 1][y_ - 1])
