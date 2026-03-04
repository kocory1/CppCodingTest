import sys

input = sys.stdin.readline

N, M = map(int, input().split())

board = [list(input().strip()) for _ in range(N)]
print(board)
min_repaints = 64


# for i in range(N - 7):
#     for j in range(M - 7):
#         count_W = 0
#         count_B = 0
#         for x in range(i, i + 8):
#             for y in range(j, j + 8):
#                 current = board[x][y]
#                 if (x + y) % 2 == 0:
#                     if current != "W":
#                         count_W += 1
#                     else:
#                         count_B += 1
#                 else:
#                     if current != "B":
#                         count_W += 1
#                     else:
#                         count_B += 1
#         local_min = min(count_W, count_B)
#         min_repaints = min(min_repaints, local_min)
# print(min_repaints)
