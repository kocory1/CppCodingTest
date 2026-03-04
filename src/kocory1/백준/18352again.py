from collections import deque

n, m, k, x = map(int, input().split())

graph = [[] for _ in range(n + 1)]  # 문제는 1번부터니까
for _ in range(m):
    s, e = map(int, input().split())
    graph[s].append(e)

distance = [-1] * (n + 1)

queue = deque([x])
distance[x] = 0

result = list()
while queue:
    now = queue.popleft()
    for vertex in graph[now]:
        if distance[vertex] == -1:  # 미방문 노드
            queue.append(vertex)
            distance[vertex] = distance[now] + 1
            if distance[vertex] == k:
                result.append(vertex)

if len(result) == 0:
    print(-1)
else:
    result.sort()
    for r in result:
        print(r)
