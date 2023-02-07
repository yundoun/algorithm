N, X = map(int, input().split())

L = list(map(int, input().split()))

K = []

for i in L:
    if i < X :
        K.append(i)
        
for i in range(len(K)):
    print(K[i], end =' ')
