import sys

input = sys.stdin.readline

n = int(input())
num_list = []

for i in range(n):
    num_list.append(int(input()))

num_list.sort()

avg = sum(num_list) / len(num_list)
avg = int(avg + 0.5) if avg > 0 else int(avg - 0.5)

mode_dict = {}
for num in num_list:
    if num in mode_dict:
        mode_dict[num] += 1
    else:
        mode_dict[num] = 1

max_frequency = max(mode_dict.values())

candidates = []
for k, v in mode_dict.items():
    if v == max_frequency:
        candidates.append(k)
candidates.sort()
mode = candidates[1] if len(candidates) > 1 else candidates[0]


print(avg)
print(num_list[len(num_list) // 2])
print(mode)
print(max(num_list) - min(num_list))
