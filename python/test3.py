# for i in range(m):
#     for j in range(n):
#         if board[i][j] == word[cur]:
#             memo.append((i,j))

# if not memo:
#     return False
# for pos in memo:
#     if cur == len(word):
#         found = True
#         break
#     x,y = pos[0],pos[1]
#     cur += 1
#     for (dx,dy) in neighbor:
#         x += dx
#         y += dy
#         if x < 0 or y < 0 or x = m or y = n:
#             continue
#         if dx


def dfs(cur,word,board,curPosX,curPosY,found):
    
    if not found:
        if cur == len(word):
            found = True
            return found
        if not memo:
            return False

        for (dx,dy) in neighbor:
            x = curPosX + dx
            y = curPosY + dy
            if x < 0 or y < 0 or x == m or y == n:
                continue
            if board[x][y] == word[cur]:
                memo.append
                dfs(cur + 1, word, board, x, y, found)

board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]]
word = "ABCCED"

neighbor = [
    [-1,-1],
    [1,-1],
    [-1,1],
    [1,1]
]

# initialize
m = len(board)
n = len(board[0])
cur = 0
found = False
memo = []
first = word[0]
for i in range(m):
    for j in range(n):
        if board[i][j] == first:
            memo.append((i,j))

if not memo:
    print(False)
for i in memo:
    dfs(1,word,board,i[0],i[1], found)

print(found)