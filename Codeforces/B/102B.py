inp = input()
c = 0
while len(inp) > 1:
    inp = str(sum(list(map(int, list(inp)))))
    c += 1
print(c)