n, m = map(int, input().split())
x, y, dir = map(int, input().split())
d = [[0] * m for _ in range(n)]
d[x][y] = 1

array = []
for i in range(n):
    array.append(list(map(int, input().split())))

dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]

visited = 1
turn_time = 0

while True:
    # 대가리 회전
    dir = dir - 1
    if dir == -1:
        dir = 3

    # 대가리 앞 좌표
    nx = x + dx[dir]
    ny = y + dy[dir]
    # 안가본 곳이고 갈 수 있다면
    if d[nx][ny] == 0 and array[nx][ny] == 0:
        visited += 1
        turn_time = 0
        x = nx
        y = ny
        d[x][y] = 1
    else:
        turn_time += 1
        if turn_time == 4:
            nx = x - dx[dir]
            ny = y - dy[dir]
            if array[nx][ny] == 0:
                x = nx
                y = ny
                turn_time = 0
            else:
                break
print(visited)
