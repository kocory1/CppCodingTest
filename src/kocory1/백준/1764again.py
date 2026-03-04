import sys

input = sys.stdin.readline
n, m = map(int, input().rstrip().split())
li_set = set()
se_set = set()
for i in range(n):
    li_set.add(input().rstrip())
for i in range(m):
    se_set.add(input().rstrip())

final = list(li_set & se_set)
final.sort()
print(len(final))
for f in final:
    print(f)
