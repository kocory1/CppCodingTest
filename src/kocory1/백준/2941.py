s = input()

stack = []
for c in s:
    if len(stack) == 0:
        stack.append(c)
    elif c == "=":
        if stack[-1] == "z":
            if len(stack) > 1 and stack[-2] == "d":
                # print("dz=")
                stack.pop()
                stack.pop()
                stack.append("*")
        elif stack[-1] in ("c", "s"):
            # print(stack[-1] + c)
            stack.pop()
            stack.append("*")
        else:
            stack.append(c)
    elif c == "-":
        if stack[-1] in ("c", "d"):
            # print(stack[-1] + c)
            stack.pop()
            stack.append("*")
        else:
            stack.append(c)
    elif c == "j":
        if stack[-1] in ("l", "n"):
            # print(stack[-1] + c)
            stack.pop()
            stack.append("*")
        else:
            stack.append(c)
    else:
        stack.append(c)
# print(stack)
count = len(stack)
print(count)
