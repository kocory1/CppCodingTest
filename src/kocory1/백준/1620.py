n, m = map(int, input().split())
pm = dict()
for i in range(1, n + 1):
    p = input()
    pm[p] = i
mp = dict()
for k, v in pm.items():
    mp[v] = k
for i in range(m):
    p = input()
    if p in pm:
        print(pm[p])
    else:
        p = int(p)
        print(mp[p])
