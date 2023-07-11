from collections import defaultdict


MOD = 80112002
n,m = map(int, input().split())
adj = defaultdict(list)
mem = defaultdict(int)
inmem = set()
for _ in range(m):
    a,b = map(int,input().split())
    adj[a].append(b)


def dfs(cur):
    if cur in mem:
        return mem[cur]
    if cur not in adj:
        return 1

    for i in adj[cur]:
        mem[cur] = max(mem[cur], dfs(i))
    mem[cur] = int(mem[cur] % MOD)
    mem[cur] += 1

    return mem[cur]

res = 0
for i in adj.keys():
    res = max(res, dfs(i))

print(res)