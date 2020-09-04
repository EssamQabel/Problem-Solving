def solve():
    n, k = map(int, input().split())
    w_list, l_list= [0]*(n+9), [0]*(n+9)
    while n != 0:
        for line in range(k*n*(n-1)//2):
            l, l_a, r, r_a = input().split()
            l = int(l); r = int(r)
            if l_a == 'paper':
                if r_a=='paper': pass
                elif r_a=='rock':
                    w_list[l] += 1
                    l_list[r] += 1
                else:
                    w_list[r] += 1
                    l_list[l] += 1
            elif l_a == 'rock':
                if r_a=='paper':
                    w_list[r] += 1
                    l_list[l] += 1
                elif r_a=='rock': pass
                else:
                    w_list[l] += 1
                    l_list[r] += 1
            else:
                if r_a=='paper':
                    w_list[l] += 1
                    l_list[r] += 1
                elif r_a=='rock': 
                    w_list[r] += 1
                    l_list[l] += 1
                else: pass
        for i in range(1, n+1):
            if w_list[i] == l_list[i]:
                print('-')
            else:
                print("{:0.3f}".format(round(w_list[i]/(w_list[i] + l_list[i]), 3)))
        try:
            n, k = map(int, input().split())
            w_list, l_list= [0]*(n+9), [0]*(n+9)
            print()
        except: return
        
    
solve()
