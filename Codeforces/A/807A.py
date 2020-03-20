def is_rated(arr_before, arr_after):
    for line in range(n):
        if arr_before[line] != arr_after[line]:
            print('rated')
            return

    for i in range(n):
        for j in range(i, n):
            if arr_after[i] < arr_after[j]:
                print('unrated')
                return
    print('maybe')
    return

n = int(input())
arr_before, arr_after = [], []
for i in range(n):
    temp_list = list(map(int, input().split()))
    arr_before.append(temp_list[0])
    arr_after.append(temp_list[1])

is_rated(arr_after, arr_before)