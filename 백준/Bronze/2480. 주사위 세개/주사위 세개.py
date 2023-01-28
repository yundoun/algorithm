A, B, C = map(int, input().split())

# 조건 1 같은 눈이 3개가 나올 경우
if A == B ==C :
    Money = 10000+A*1000
# 조건 2 같은 눈이 2개만 나오는 경우
elif A == B or A == C :
    Money = 1000 + A*100
elif B == C :
    Money = 1000 + B*100
# 조건 3 모든 다른 눈이 나오는 경우
else :
    dice = [ A, B, C]
    Money = max(dice)*100
    
print(Money)