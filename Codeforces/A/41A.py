s = input()
t = input()
result_list = []
for i in range(len(s)):
    result_list.append(s[i])
result_list.reverse()
s = ''.join(result_list)
if s == t:
    print('YES')
else:
    print('NO')