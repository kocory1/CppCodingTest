n = int(input())
le = len(str(n)) / 2
left = n // (10**le)
right = n % (10**le)

lsum = 0
rsum = 0

while left > 0:
    lsum += left % 10
    left /= 10
while right > 0:
    rsum += right % 10
    right /= 10

if int(lsum) == int(rsum):
    print("LUCKY")
else:
    print("READY")
