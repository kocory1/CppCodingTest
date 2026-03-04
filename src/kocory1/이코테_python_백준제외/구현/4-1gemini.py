n = int(input())
x, y = 1, 1
plans = input().split()

# 방향 정의 (딕셔너리 활용)
# key: 명령어, value: (dx, dy)
moves = {"L": (0, -1), "R": (0, 1), "U": (-1, 0), "D": (1, 0)}

for plan in plans:
    # 딕셔너리에서 이동할 좌표 꺼내기
    dx, dy = moves[plan]

    nx = x + dx
    ny = y + dy

    # 공간을 벗어나는 경우 무시
    if nx < 1 or ny < 1 or nx > n or ny > n:
        continue

    # 이동 수행
    x, y = nx, ny

print(x, y)
