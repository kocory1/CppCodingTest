from collections import deque

n, m, v = map(int, input().split())
graph = [[0] * (n + 1) for _ in range(n + 1)]

for i in range(m):
    s, e = map(int, input().split())
    graph[s][e] = 1
    graph[e][s] = 1
visited = [0] * (n + 1)


def dfs(s):
    visited[s] = 1
    print(s, end=" ")
    for i in range(1, n + 1):
        if graph[s][i] and not visited[i]:
            dfs(i)


dfs(v)
print()

visited = [0] * (n + 1)
queue = deque()
queue.append(v)
visited[v] = 1
print(v, end=" ")
while queue:
    vertex = queue.popleft()
    for i in range(1, n + 1):
        if graph[vertex][i] == 1 and visited[i] == 0:  # 경로가 있고 방문하지 않았다면
            queue.append(i)  # queue에 추가
            visited[i] = 1  # 방문 처리
            print(i, end=" ")  # 방문 노드 출력
