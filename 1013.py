a, b, c = map(int, input().split())
Maxab = ((a + b + abs(a - b)) / 2)
Max = ((Maxab + c + abs(Maxab - c)) / 2)
print("%d eh o maior" % Max)