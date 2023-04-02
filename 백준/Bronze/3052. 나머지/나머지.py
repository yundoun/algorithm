arr_1 = []


for i in range(10):
    N = int(input())

    cnt = N % 42

    arr_1.append(cnt)


arr_2 = set(arr_1)

print(len(arr_2))