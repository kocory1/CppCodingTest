n = int(input())
coins = list(map(int, input().split()))
coins.sort()

target = 1

for coin in coins:
    # 만들 수 없는 금액을 찾았을 때
    if target < coin:
        break

    # 만들 수 있다면, target을 업데이트 (현재까지 만들 수 있는 최대 금액 + 1)
    target += coin

print(target)
