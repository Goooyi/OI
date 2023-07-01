from pickle import FALSE


MOD = 1e9+7
n = int(input())
a = []

a = list(map(int,input().split()))

a.sort()

res = 1
poss = True
for i in range(n):
    if a[i]-i <= 0:
        poss = False
        break
    res *= (a[i]-i)
    res %= MOD

if poss:
    print(int(res))
else:
    print(0)    