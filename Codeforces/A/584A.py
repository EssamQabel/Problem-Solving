def make_number(t, n):
    cont = ""
    for i in range(n):
        cont += str(t)
    return cont
def problem(t, n):
    if t == 10:
        if n == 1:
            return -1
        else:
            return 10**(n-1)
    else:
        return str(make_number(t, n))

temp_list = list(map(int, input().split()))
n = temp_list[0]
t = temp_list[1]
print(problem(t, n))