#include <iostream>
using namespace std;

#define maxn 25
int a[5][maxn];
int res[5];
int t[6];

void dfs(int s, int t,int curT, int index, int start) {
    if (curT * 2 >= t) {
        if (res[index] != 0) res[index] = min(res[index],curT);
        else res[index] = curT;
        return;
    }
    
    for (int i = start; i <= s; i++) {
        dfs(s, t, curT + a[index][i], index, i+1);
    }
    
}

int main () {
    int s[6];
    
    cin >> s[1] >> s[2] >> s[3] >> s[4];
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= s[i]; j++) {
            cin >> a[i][j];
            t[i] += a[i][j];
        }
    }
    
    for (int i = 1; i <= 4; i++) {
        dfs(s[i], t[i], 0, i, 1);
    }
    int ret = 0;
    for (int i = 1; i <= 4; i++) {
        ret += res[i];
    }
        
    cout << ret << endl;
    return 0;
}