n = input()
n_dict = {
    "0": 0,
    "1": 0,
    "2": 0,
    "3": 0,
    "4": 0,
    "5": 0,
    "6": 0,
    "7": 0,
    "8": 0,
    "9": 0,
}

for m in n:
    n_dict[m] += 1

set_list = []
for k, v in n_dict.items():
    set_list.append(v)
set_list[6] = (set_list[6] + set_list[9]) // 2
set_list[9] = 0
print(int(max(set_list) + 0.5))
