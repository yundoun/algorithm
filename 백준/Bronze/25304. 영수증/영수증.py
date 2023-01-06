total = int(input())

itemCount = int(input())

add = 0

for i in range(0, itemCount):
    a, b = map(int, input().split())
    add += a*b

if (total == add):
    print('Yes')
else:
    print('No')