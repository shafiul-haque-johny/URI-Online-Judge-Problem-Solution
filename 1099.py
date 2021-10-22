# 1099
N = int(input())
for i in range(1, N+1):
    X, Y = list(map(int, input().split()))
    d = 0
    if X == Y:
        print(0)
    else:
        c = 0
        if X > Y:
            c = X
            X = Y
            Y = c
        while X < (Y - 1):
            X += 1
            if X % 2 != 0:
                d += X
        print(d)
