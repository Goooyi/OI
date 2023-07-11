#include <iostream>
// #include <utility>
#include <cstdio>
#include <cstring>
#include <deque>
#include <unordered_set>
using namespace std;

int d[8][2] = {{1,2},{1,-2},{2,1},{2,-1},{-1,2},{-1,-2},{-2,1},{-2,-1}};
int res = -1;
int a[410][410];
int memo[410][410];

void bfs(int x, int y, int n, int m) {
    // 初始化？ 是否需要include pair ?
    deque<pair<int,int>> st;
    pair<int,int> tmp(x,y);
    st.emplace_back(tmp);
    int step = 0;
    deque<pair<int,int>> temp; 
    while (true) {
        temp.clear(); 
        while (!st.empty()) {
            pair<int,int> cur = st.back();
            st.pop_back();
            a[cur.first][cur.second]  = step;
            int newx, newy;
            for (auto i : d) {
                newx = cur.first + i[0];
                newy = cur.second + i[1];
                if (newx >= 1 && newx <=n && newy >= 1 && newy <= m && memo[newx][newy] == 0) {
                    pair<int,int> tmp(newx,newy);
                    temp.emplace_back(tmp);
                    memo[newx][newy] = 1;
                }
            }
        }
        step++;
        if (temp.empty()) break;
        else st = temp;
    }
}

int main () {
    memset(a,-1,410*410);
    int n,m,x,y;
    cin >> n >> m >> x >> y;
    memo[x][y] = 1;
    bfs(x,y,n,m);
    for ( int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            printf("%-5d ", a[i][j]);
        }
        puts("");
    }
}