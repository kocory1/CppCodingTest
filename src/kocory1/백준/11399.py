n = int(input())
affix = [0]
dep_list = list(map(int, input().split()))
dep_list.sort()
for i in range(1, n + 1):
    affix.append(affix[i - 1] + dep_list[i - 1])
print(sum(affix))
