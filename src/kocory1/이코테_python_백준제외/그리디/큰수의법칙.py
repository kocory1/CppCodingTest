n, m, k = map(int, input().split())
n_list = list(map(int, input().split()))
n_list.sort(reverse=True)

result = n_list[0] * (m // (k + 1) * k + m % (k + 1)) + n_list[1] * m // (k + 1)
print(result)
