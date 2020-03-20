def calculate(n, k):
    half = (n+1) // 2
    if k <= half:
        return int((2 * k) - 1)
    else:
        return int(2 * (k - half)) 

n,k = map(int,input().split(" "))
print(calculate(n, k))