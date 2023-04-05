A = int(input())
B = int(input())
C = int(input())

X = A*B*C

L = list(map(int, str(X)))    # map 함수를 이용하여 A, B, C 의 곱을 하나씩 정수로 변환해준다.
                              
for i in range(10):
    cnt = L.count(i)
    print(cnt)