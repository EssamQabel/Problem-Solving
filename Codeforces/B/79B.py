n, m, k, t = map(int, input().split())
def index(l, r):
    return ((l)*m)+(r)
k_list = []
d = {0:'Carrots', 1:'Kiwis', 2:'Grapes'}
for i in range(k):
    l, r = map(int, input().split())
    k_list.append((l-1, r-1))
k_list.sort()
for i in range(t):
    cnt = 0
    l, r = map(int, input().split())
    l-=1; r-=1; v=False
    for j in k_list:
        if j[0] < l: cnt += 1
        elif j[0] == l:
            if j[1] < r: cnt += 1
            elif j[1] == r: print("Waste"); v = True
        else: break
    if not v: print(d[(index(l, r)-cnt)%3])