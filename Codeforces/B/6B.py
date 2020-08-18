m_set = set()
inp = input().split()
n, m = list(map(int, inp[:2]))
p = inp[2]
grid = [0]*n
def check(r, c):
    if r < n and c < m and r >= 0 and c >= 0:
        if grid[r][c] != p and grid[r][c] != '.' :
            m_set.add(grid[r][c])
for r in range(n):
    grid[r] = ''.join(input().split())
for r in range(n):
    for c in range(m):
        if grid[r][c] == p:
            check(r-1, c)
            check(r+1, c)
            check(r, c-1)
            check(r, c+1)
try: m_set.remove('.')
except: pass
print(len(m_set))
