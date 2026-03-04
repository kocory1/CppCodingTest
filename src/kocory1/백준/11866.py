n, k = map(int, input().split())

n = [i for i in range(1, n + 1)]

index = k - 1
print("<", end="")
while True:
    print(f"{n[index]}", end="")
    n.remove(n[index])
    if len(n) == 0:
        break
    print(", ", end="")
    index = (index + k - 1) % len(n)
print(">")
