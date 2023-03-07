N = int(input())

for i in range(1,N+1):
    a = '*'
    a = a*i
    # 오른쪽 정렬
    print(str(a).rjust(N))