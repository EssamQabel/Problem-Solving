dr = [-1, 0, 0]
dc = [0, -1, 1]
dirs = {0: "forth", -1: "left", 1: "right"}


def valid(r, c):
    return r >= 0 and c >= 0 and r < m and c < n


visited = []
matrix = []
n = 0
m = 0
key = 'IEHOVA#'


def check(r, c):
    global key
    for i in range(3):
        nr = dr[i] + r
        nc = dc[i] + c
        if valid(nr, nc) and key and matrix[nr][nc] == key[0]:
            key = key[1:]
            return dirs[nc - c] + " " + check(nr, nc)
        elif not key:
            return ""


def solve():
    global n
    global m
    global key
    global visited
    global matrix
    t = int(input())
    while t:
        visited = []
        matrix = []
        key = 'IEHOVA#'
        t -= 1
        m, n = [int(i) for i in input().split()]
        for line in range(m):
            matrix.append([i for i in input()])
            visited.append([False] * n)
        r, c = 0, 0
        for i in range(m):
            for j in range(n):
                if matrix[i][j] == '@':
                    r = i
                    c = j
                    break
        result = check(r, c)
        print(result)


if __name__ == "__main__":
    solve()
