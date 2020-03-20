is_finished = False
n = int(input())
list_p = list((map(int, input().split())))
list_p.remove(list_p[0])
list_q = list(map(int, input().split()))
list_q.remove(list_q[0])
for i in range(len(list_q)):
    list_p.append(list_q[i])
list_p.sort()
set_answer = set(list_p)
if len(set_answer) < n:
    print('Oh, my keyboard!')
else:
    print('I become the guy.')