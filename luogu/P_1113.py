from collections import defaultdict,deque
import sys

mem = defaultdict(list)
time = {}
vis = defaultdict(int)
res = 0
n = int(input())
for _ in range(n):
    tmp = list(map(int,input().strip().split()))
    time[tmp[0]] = tmp[1]
    for i in range(2, len(tmp)-1):
        mem[tmp[0]].append(tmp[i])

def dfs(cur):
    if cur in vis:
        return vis[cur]

    for i in mem[cur]:
        vis[cur] = max(vis[cur], dfs(i))
    vis[cur] += time[cur]
    return vis[cur]

res = 0
for i in range(1,n+1):
    res = max(res,dfs(i))
print(res)
