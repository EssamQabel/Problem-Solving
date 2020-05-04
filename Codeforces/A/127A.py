from math import sqrt
d = 0
n, k = [int(i) for i in input().split()]
x1, y1 = [int(i) for i in input().split()]
for i in range(n-1):
  x2, y2 = [int(i) for i in input().split()]
  d += sqrt( ((x2 - x1)**2) + ((y2 - y1)**2) )
  x1 = x2
  y1 = y2
print( "{:0.9f}".format((d/50)*k) )