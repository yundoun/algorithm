T = int(input())

L = []

for i in range(1,T+1):
    A, B = map(int, input().split())
    L.append(A+B)

for i in L :
    print(i)