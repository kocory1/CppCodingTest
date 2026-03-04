# 1. 생성자 구하는 함수 (각 자리수 더하기)
def d(n):
    # n + (n을 문자열로 바꿔서 한 글자씩 숫자로 변환해 더함)
    # 예: 123 -> 123 + 1 + 2 + 3
    return n + sum(map(int, str(n)))


# 2. 1부터 10000까지 생성자가 있는 숫자들(Not 셀프 넘버) 다 구하기
generated_nums = set()
for i in range(1, 10001):
    generated_nums.add(d(i))

# 3. 전체 숫자(1~10000)에서 생성된 숫자 빼기 (차집합)
for i in range(1, 10001):
    if i not in generated_nums:  # 생성된 적 없는 숫자면?
        print(i)  # 그게 바로 셀프 넘버!
