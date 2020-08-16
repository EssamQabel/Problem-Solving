l = set()
r = set()
m_s = set(['A', 'B', 'C'])

for i in range(3):
    inpt = list(input())
    if inpt[1] == '>':
        inpt[2], inpt[0] = inpt[0], inpt[2]
    l.add(inpt[0])
    r.add(inpt[2])

if len(l) != 2 and len(r) != 2:
    print("Impossible")
else:
    print(str(list(m_s.difference(r))[0]) + str(list(r.intersection(l))[0]) + str(list(m_s.difference(l))[0]))