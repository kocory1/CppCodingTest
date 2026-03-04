n = int(input())

count = 0

for i in range(n):
    f = 0
    s = input()
    group = []
    for c in s:
        if c not in group:
            group.append(c)
        elif c != group[-1]:
            f = 1
            break
    if not f:
        count += 1
print(count)
