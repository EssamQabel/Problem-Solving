dx = [0, 0, 1, -1, 1, -1, 1, -1]
dy = [1, -1, 0, 0, 1, -1, -1, 1]


def valid(r, c):
    return r >= 0 and c >= 0 and r < n and c < n


def dfs(r, c):
  global n
  if visited[r][c]: return
  visited[r][c] = True
  for i in range(8):
      xc = dx[i] + r
      yc = dy[i] + c
      if valid(xc, yc) and not visited[xc][yc] and matrix[xc][yc] == 1:
        dfs(xc, yc)


visited = []
matrix = []
n = 0


def solve():
  global n
  global visited
  global matrix
  n = 0
  tc = 1
  while True:
    visited = []
    matrix = []
    try:
        n = int(input())
    except:
        break
    for line in range(n):
        matrix.append([int(i) for i in input()])
        visited.append([False] * n)
    ans = 0
    for r in range(n):
        for c in range(n):
          if valid(r, c) and not visited[r][c] and matrix[r][c] == 1:
            dfs(r, c)
            ans += 1
    print("Image number " + str(tc) + " contains " + str(ans) + " war eagles.")
    tc+=1


if __name__ == "__main__":
    solve()
