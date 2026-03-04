n = input()
m = [ord(i) for i in n if ord(i) >= ord("A") and ord(i) <= ord("Z")]
k = [int(i) for i in n if ord(i) >= ord("0") and ord(i) <= ord("9")]
m.sort()

for i in m:
    print(chr(i), end="")
print(sum(k))
