n = int(input())
n_list = list(map(int, input().split()))
m = int(input())
m_list = list(map(int, input().split()))

a_sum, b_sum = 0, 0
a_freq, b_freq = [0]*(n+1), [0]*(n+1)

comb = 1
for n_i in range(1, n+1):
    a_freq[n_list[n_i-1]] = comb
    b_freq[n_list[n_i-1]] = (n+1)-comb
    comb+=1

for m_i in range(m):
    a_sum += a_freq[m_list[m_i]]
    b_sum += b_freq[m_list[m_i]]

print(str(a_sum) + ' ' + str(b_sum))