n = int(input())
fear_list = list(map(int, input().split()))
fear_list.sort()

result = 0  # 그룹 수
count = 0  # 현재 그룹에 포함된 모험가 수

for i in fear_list:  # 공포도 낮은 놈부터
    count += 1  # 현재 그룹에 해당 모험가 포함
    if count >= i:  # 현재 그룹에 포함된 모험가의 수가 현재 공포도 이상이라면, 그룹 결성
        result += 1  # 그룹 수 증가
        count = 0  # 그룹 초기화
print(result)
