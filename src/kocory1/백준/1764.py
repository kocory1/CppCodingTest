import sys

input = sys.stdin.readline
n, m = map(int, input().split())
listen = set()
hear = set()
count = 0
for i in range(n):
    hear.add(input().strip())
for i in range(m):
    listen.add(input().strip())

final = list(hear & listen)
final.sort()

print(len(final))
for f in final:
    print(f)
