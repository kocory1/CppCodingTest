n = int(input())
h_list = []
w_list = []
cnt_list = []
for i in range(n):
    w, h = map(int, input().split())
    w_list.append(w)
    h_list.append(h)

for i in range(n):
    cnt = 1
    for j in range(n):
        if h_list[i] < h_list[j] and w_list[i] < w_list[j]:
            cnt += 1
    cnt_list.append(cnt)

for i in range(n):
    print(cnt_list[i], end=" ")
