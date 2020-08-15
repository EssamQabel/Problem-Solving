res = True
prev = 'A'
n, m = map(int, input().split())
for _ in range(n):
    row = input()
    if any(c != row[0] for c in row): res = False
    res = res and (row[0] != prev)
    prev = row[0]
print("YES" if res else "NO")