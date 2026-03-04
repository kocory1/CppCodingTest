n, m = map(int, input().split())
r, c, d = map(int, input().split())
dx = [-1, 0, 1, 0]  # 북, 동, 남, 서
dy = [0, 1, 0, -1]

room = []
for i in range(n):
    line = list(input().split())
    room.append(line)


f = True
count = 0
while f:
    if room[r][c] == "0":
        room[r][c] = "2"
        count += 1
    elif (
        "0" in room[r + 1][c] + room[r - 1][c] + room[r][c + 1] + room[r][c - 1]
    ):  # 상하좌우중 빈칸 있으면
        # 첫 방향회전
        d = (d + 3) % 4
        dr = r + dx[d]
        dc = c + dy[d]

        while room[dr][dc] != "0":
            d = (d + 3) % 4
            dr = r + dx[d]
            dc = c + dy[d]

        r = dr
        c = dc  # 그럼 이동

    else:
        dr = r - dx[d]
        dc = c - dy[d]
        if room[dr][dc] == "1":
            break
        else:
            r = dr
            c = dc
print(count)
