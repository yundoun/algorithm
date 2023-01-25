# 1546번


N = int(input())


L = list(map(float, input().split()))  # 리스트에 N의 개수만큼 입력받고 저장

M = max(L)  # 시험점수의 최대값

New_L = []  # 새로운 시험점수를 저장할 리스트

for i in L :
    New_L.append(i/M*100)   # 반복하여 성적 조작

print(sum(New_L)/N)         # 평균은 점수의 총합/개수