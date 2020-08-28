n = 4
grid = []
def is_valid(r, c):
    return r >= 0 and c >= 0 and r < 4 and c < 4
def test(r, c):
    if is_valid(r+1, c) and is_valid(r, c+1) and is_valid(r+1, c+1) and grid[r+1][c] == grid[r][c+1] == grid[r+1][c+1]:
        return True
    if is_valid(r, c-1) and is_valid(r+1, c) and is_valid(r+1, c-1) and grid[r][c-1] == grid[r+1][c] == grid[r+1][c-1]:
        return True
    if is_valid(r-1, c) and is_valid(r, c+1) and is_valid(r-1, c+1) and grid[r-1][c] == grid[r][c+1] == grid[r-1][c+1]:
        return True
    if is_valid(r, c-1) and is_valid(r-1, c) and is_valid(r-1, c-1) and grid[r][c-1] == grid[r-1][c] == grid[r-1][c-1]:
        return True
def solve():
    for i in range(n):
        grid.append(input())
    for i in range(n):
        for j in range(n):
            if test(i, j):
                print("YES")
                return
    print("NO")

solve()