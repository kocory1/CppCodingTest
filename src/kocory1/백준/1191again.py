n = int(input())
words = set()
for i in range(n):
    word = input()
    words.add(word)
words = list(words)
words.sort(key=lambda x: (len(x), x))

for w in words:
    print(w)
