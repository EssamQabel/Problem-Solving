cnt = 0
matrix = []
visited = []

dr = [-1, 0, 1, 0]
dc = [0, 1, 0, -1]


def valid(r, c, n):
    return r >= 0 and c >= 0 and r < n and c < n


def dfs(r, c, n, got_x=False):
    global matrix
    global visited
    if valid(r, c,
             n) and not visited[r][c] and (matrix[r][c] == 'x' or
                                           (got_x and matrix[r][c] == '@')):
        visited[r][c] = True
        for i in range(4):
            nr = dr[i] + r
            nc = dc[i] + c
            dfs(nr, nc, n, True)


t = int(input())
case = 1
while t:
    t -= 1
    cnt = 0
    matrix = []
    visited = []
    n = int(input())
    for line in range(n):
        matrix.append([i for i in input()])
        visited.append([False] * n)
    for r in range(n):
        for c in range(n):
            if not visited[r][c] and matrix[r][c] == 'x':
                cnt += 1
                dfs(r, c, n)
    print("Case " + str(case) + ": " + str(cnt))
    case += 1
