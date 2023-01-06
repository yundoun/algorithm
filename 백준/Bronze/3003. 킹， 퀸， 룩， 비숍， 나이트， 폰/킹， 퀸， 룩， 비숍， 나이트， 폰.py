# 백준 3003번

chess = [1, 1, 2, 2, 2, 8]

array = list(map(int, input().split()))
    
for i in range(0,6):
    print(chess[i]-array[i], end='')
    print(' ', end='')
