s = [int(i) for i in list(input())]


result = s[0]

for i in range(1, len(s)):
    b = s[i]
    if b <= 1 or result <= 1:
        result += b
    else:
        result *= b
print(result)
