import sys
from collections import deque

# 시간 초과 방지용 (입력이 많을 땐 필수)
input = sys.stdin.readline

n, m, k, x = map(int, input().split())  # x가 출발 도시

# [수정 1] 인접 리스트 사용 (메모리 절약)
graph = [[] for _ in range(n + 1)]

for _ in range(m):
    a, b = map(int, input().split())
    graph[a].append(b)  # a에서 b로 가는 길이 있다

# [수정 2] 모든 도시의 거리를 -1로 초기화 (방문 안 함 표시)
distance = [-1] * (n + 1)
distance[x] = 0  # 출발 도시는 거리가 0

# [수정 3] BFS 시작
queue = deque([x])  # 출발 도시 번호만 큐에 넣기

while queue:
    now = queue.popleft()  # 현재 도시 꺼내기

    # 현재 도시와 연결된 다음 도시들을 하나씩 확인
    for next_node in graph[now]:
        # 아직 방문하지 않은 도시라면?
        if distance[next_node] == -1:
            # 거리 갱신 (현재 도시 거리 + 1)
            distance[next_node] = distance[now] + 1
            queue.append(next_node)  # 큐에 넣기

# [수정 4] 거리가 딱 K인 도시 출력
check = False
for i in range(1, n + 1):
    if distance[i] == k:
        print(i)
        check = True

# 만약 K인 도시가 하나도 없으면 -1 출력
if not check:
    print(-1)
