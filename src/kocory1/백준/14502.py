import copy

n, m = map(int, input().split())

lab = []
for _ in range(n):
    lab.append(list(map(int, input().split())))


def spread(lab, n, m):
    dx = [1, -1, 0, 0]
    dy = [0, 0, 1, -1]
    infect = True
    while infect:
        infect = False
        for i in range(n):
            for j in range(m):
                if lab[i][j] == 2:
                    for k in range(4):
                        if (
                            i + dx[k] < 0
                            or i + dx[k] > n - 1
                            or j + dy[k] < 0
                            or j + dy[k] > m - 1
                        ):
                            continue
                        if lab[i + dx[k]][j + dy[k]] == 0:
                            lab[i + dx[k]][j + dy[k]] = 2
                            infect = True
    safty = 0
    for i in range(n):
        for j in range(m):
            if lab[i][j] == 0:
                safty += 1
    return safty


can_x = []
can_y = []
for i in range(n):
    for j in range(m):
        if lab[i][j] == 0:
            can_x.append(i)
            can_y.append(j)


result = 0
for i in range(len(can_x) - 2):
    for j in range(i + 1, len(can_x) - 1):
        for k in range(j + 1, len(can_x)):
            lab_copy = copy.deepcopy(lab)
            lab_copy[can_x[i]][can_y[i]] = 1
            lab_copy[can_x[j]][can_y[j]] = 1
            lab_copy[can_x[k]][can_y[k]] = 1
            result = max(result, spread(lab_copy, n, m))
print(result)
