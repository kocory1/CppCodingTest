n = int(input())

s_list = set()
for i in range(n):
    s = input()
    s_list.add(s)
s_list = list(s_list)

s_list.sort(key=lambda x: (len(x), x))


for i in range(len(s_list)):
    print(s_list[i])

# result = [c for c in s_list ]
# for i in range(len(s_list) - 1):
#     for j in range(i + 1, len(s_list)):
#         if len(s_list[i]) > len(s_list[j]):
#             tmp = s_list[i]
#             s_list[i] = s_list[j]
#             s_list[j] = tmp

# for i in range(len(s_list) - 1):
#     for j in range(i + 1, len(s_list)):
#         if len(s_list[i]) == len(s_list[j]):
#             if s_list[i] > s_list[j]:
#                 tmp = s_list[i]
#                 s_list[i] = s_list[j]
#                 s_list[j] = tmp
