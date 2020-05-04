t = int(input())
while t:
  x = int(input())
  print("YES" if (-360 % (x-180)) == 0 else "NO")
  t -= 1