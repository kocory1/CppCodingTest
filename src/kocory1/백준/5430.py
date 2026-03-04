import sys
from collections import deque  # 덱 가져오기

input = sys.stdin.readline

t = int(input())

for i in range(t):
    p = input().strip()  # 명령어 (RDD...)
    n = int(input())  # 배열 크기
    arr_input = input().strip()  # [1,2,3,4]

    # 1. 파싱 (빈 배열 [] 처리 주의!)
    if n == 0:
        q = deque()  # 빈 덱
    else:
        # 대괄호 떼고 쉼표로 나눠서 덱으로 만듦
        q = deque(arr_input[1:-1].split(","))

    rev = False  # "뒤집혔니?" 상태 체크용 변수
    flag = False  # 에러 발생 여부 체크

    # 2. 명령어 처리
    for cmd in p:
        if cmd == "R":
            # 진짜 뒤집지 말고 상태만 토글!
            rev = not rev

        elif cmd == "D":
            if not q:  # 비어있는데 끄집어내려고 하면?
                print("error")
                flag = True
                break

            if rev == True:  # 뒤집힌 상태라면?
                q.pop()  # 뒤에서 뺌
            else:  # 안 뒤집힌 상태라면?
                q.popleft()  # 앞에서 뺌 (덱이라서 가능!)

    # 3. 출력 (여기도 중요!)
    if not flag:
        if rev:  # 다 끝났는데 뒤집힌 상태면, 마지막에 한 번 진짜로 뒤집어줌
            q.reverse()

        # join 쓰면 for문 안 돌려도 예쁘게 [1,2,3] 출력됨
        print("[" + ",".join(q) + "]")
