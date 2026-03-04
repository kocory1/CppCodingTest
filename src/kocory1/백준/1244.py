n = int(input())
switch = list(map(int, input().split()))
student = int(input())
for i in range(student):
    sex, index = map(int, input().split())
    if sex == 1:
        for j in range(n):
            if (j + 1) % index == 0:
                switch[j] = 0 if switch[j] == 1 else 1
    else:
        x = index - 1 - 1
        y = index - 1 + 1
        max_len = 1
        while x >= 0 and y < n:
            if switch[x] == switch[y]:
                max_len += 2
                x -= 1
                y += 1
            else:
                break
        switch[index - 1] = 0 if switch[index - 1] == 1 else 1
        max_len /= 2
        max_len = int(max_len)
        for j in range(1, max_len + 1):
            switch[index - 1 - j] = 0 if switch[index - 1 - j] == 1 else 1
            switch[index - 1 + j] = 0 if switch[index - 1 + j] == 1 else 1

for i in range(0, n, 20):
    # i부터 i+20까지 잘라서 출력
    print(*switch[i : i + 20])
