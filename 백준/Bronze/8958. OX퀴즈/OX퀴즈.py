N = int(input())                        # 문제 개수 입력 받기

L = list(input() for _ in range(N))     # ENTER 기준으로 N만큼 입력받아 리스트에 저장

for i in L:
    cnt = 0             # 연속된 'O'의 합을 구하기 위한 변수
    sum_cnt = []        # 'X'로 구분되며, 연속된'0'을 저장하기 위한 리스트
                        # 반복문이 반복 될때마다 새로 초기화

    for j in i :        
        if j == 'O' :   # 문자가 'O'일 경우 cnt변수를 1씩 늘려주면서 리스트에 저장
            cnt +=1
            sum_cnt.append(cnt)
            
        else :          # 문자가 'X'일 경우 0으로 초기화, 다시 1부터 계산 (리스트 저장 X)
            cnt = 0
                        
    print(sum(sum_cnt)) # 'X'로 구분되어 계산된 모든 cnt 변수들을 더한 값 출력