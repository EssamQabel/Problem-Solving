n = int(input())
res = [0]*n
v = ['R', 'O', 'Y', 'G', 'B', 'I', 'V']
res[:7] = "".join(v)
for i in range(7, n):
    res[i]=res[i-4]
print("".join(res))