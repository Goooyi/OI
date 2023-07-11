from collections import deque

m = int(input())
a = []
d2 = [[1,0],[0,1],[-1,0],[0,-1]]
stepmemo = {}
stepmemo[(0,0)] = 0
grid = [[float("inf")] * 310 for _ in range(310)]

for i in range(m):
    tmp = list(map(int,input().split()))
    grid[tmp[0]][tmp[1]] = min(grid[tmp[0]][tmp[1]], tmp[2]) 
    for directions in d2:
        newx,newy = tmp[0]+directions[0], tmp[1]+directions[1]
        if newx >= 0 and newx <= 305 and newy >= 0 and newy <= 305:
            grid[newx][newy] = min(grid[newx][newy],tmp[2])


q = deque([])
q.append((0,0))
found = False
while q:
    cur = q.popleft()
    if grid[cur[0]][cur[1]] == float("inf"):
        found = True
        print(stepmemo[cur])
        break 
    if grid[cur[0]][cur[1]] <= stepmemo[cur]:
        continue
    for i in d2:
        newx,newy = cur[0]+i[0],cur[1]+i[1]
        if newx >= 0 and newx <= 305 and newy >= 0 and newy <= 305 and (newx,newy) not in stepmemo:
            stepmemo[(newx,newy)] = stepmemo[cur]+1
            q.append((newx,newy))

if not found:
    print(-1)
        
