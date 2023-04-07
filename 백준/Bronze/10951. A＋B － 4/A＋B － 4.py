L = []

while True:
    try:
        A, B = map(int, input().split())
        result = A + B
        L.append(result)
    except:
        for i in L :
            print(i)
        break