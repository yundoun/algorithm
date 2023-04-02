a = []
b = []
cnt = 0

for i in range(9): # 반복문을 사용해서 9번의 값을 받아준다 (a 리스트)
    N = int(input())
    a.append(N)
    cnt += 1       # 반복횟수를 세기 위해서 cnt변수를 1씩 더해가면서 리스트에 저장 (b 리스트)
    b.append(cnt)

print(max(a))

loc = a.index(max(a)) # loc변수는 a 리스트에서 최댓값의 위치

print(b[loc])   # 최댓값을 입력받았을 때의 cnt 변수의 값을 b 리스트에서 불러온다
