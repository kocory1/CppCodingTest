n, m = map(int, input().split())
weights = list(map(int, input().split()))

counts = [0] * 11
result = 0

for x in weights:
    counts[x] += 1

for i in range(1, m + 1):
    n -= counts[i]  # B가 고를 수 있는 공 개수
    result += n * counts[i]

print(result)
    