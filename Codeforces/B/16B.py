from typing import NamedTuple
class item(NamedTuple):
    a: int
    b: int
items, tot = [], 0
 
n, m = map(int, input().split())
for line in range(m):
    a, b = map(int, input().split())
    items.append(item(a, b))
 
items.sort(key=lambda x: x.b-0, reverse=True)
for i in items:
    temp = (n if n<i.a else i.a )
    tot += i.b * temp
    n -= temp
print(tot)