H, M = map(int, input().split())

T = int(input())

H = H + T // 60 # //연산자 = 정수부분 값만 가져오기 
M = M + T % 60  # %연산자 = 나머지 값 가져오기

if M >= 60:
    H = H +1
    M = M - 60
if H >= 24:
    H = H - 24

print(H, M)