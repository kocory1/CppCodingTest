n, m = map(int, input().split())
s = [list(input()) for _ in range(n)]

max_len = min(n, m)
max_ = 1
for len in range(max_len):  # 변 길이
    for i in range(n - len):  # row에서 몇번 가능
        for j in range(m - len):  # column에서 몇번 가능?
            if (
                s[i][j] == s[i + len][j]
                and s[i][j + len] == s[i + len][j + len]
                and s[i + len][j + len] == s[i][j]
            ):  # 네 꼭짓점이 같다면
                max_ = len + 1

print(max_**2)
