inp = input()
prev, cur, cnt = inp[0], inp[1], 0
# Always up
if prev=='U':
    if cur=='U': cnt += 0
    else: cnt += 2
else:
    if cur=='U': cnt += 1
    else: cnt += 1
print(inp[2:].count('D')*2 + cnt)

cnt = 0
# Always Down
if prev=='U':
    if cur=='U': cnt += 1
    else: cnt += 1
else:
    if cur=='U': cnt += 2
    else: cnt += 0
print(inp[2:].count('U')*2 + cnt)

cnt = 0
for i in range(1, len(inp)):
    cur = inp[i]
    if prev=='U':
        if cur=='U': cnt += 0
        else: cnt += 1
    else:
        if cur=='U': cnt += 1
        else: cnt += 0
    prev=cur
print(cnt)
