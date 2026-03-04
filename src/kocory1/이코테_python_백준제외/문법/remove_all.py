a = [1, 2, 3, 4, 5, 6, 5, 2, 3, 5]
remove_set = [2, 3, 5]
b = [i for i in a if i not in remove_set]
print(b)
