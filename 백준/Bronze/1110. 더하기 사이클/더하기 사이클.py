# 1110번
'''
# str 으로 푸는 방법
N = input()  # N = 26  값을 입력받을땐 문자열로 입력받는다

Num = N
cnt = 0
while True:
    
    if len(Num) == 1 :  # 문자열 개수가 1개 일때, 즉 1자리 정수 일때
        Num = "0" + Num 

    plus = str(int(Num[0]) + int(Num[-1]))  # plus =  2 + 6   ("8")
    Num = Num[-1] + plus[-1]                # Num의 마지막 값과 plus의 마지막 값이 새로운 숫자 

    cnt += 1
    if Num ==N :
        print(cnt)
        break
'''

N = int(input())

num = N             # N = 26
cnt = 0

while True:
    x = num // 10       # x = 2
    y = num % 10        # y = 6
    z = (x + y) % 10    # z = 8

    num = (y*10) + z    # 68 = 60 + 8
    
    cnt += 1

    if num == N :
        print(cnt)
        break