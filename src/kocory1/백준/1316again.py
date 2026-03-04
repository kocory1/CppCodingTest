n = int(input())
cnt = 0
for i in range(n):
    word = list(input())
    stack = []
    f = 0
    for w in word:
        if w not in stack:
            stack.append(w)
        else:
            if stack.pop() == w:
                stack.append(w)
            else:
                f = 1
                break
    if f == 0:
        cnt += 1
print(cnt)
