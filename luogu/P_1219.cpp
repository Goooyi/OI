#include <iostream>
// #include <cstdio>
#include <cmath>
using namespace std;

#define maxn 30
int row[maxn];
int col[maxn];
int dig[maxn];
int offd[maxn];
int res;

void dfs(int x, int n){
    if (x > n) {
        if(res < 3) {
            for (int i = 1; i <= n; i++) {
                cout << row[i] << " ";
            }
            puts("");
        }
        res += 1;
        return;
    }
    
    for (int i = 1; i <= n; i++) {
        // for ( int j = 1; j <= n; j++) {
            if (col[i] == 0 && dig[i-x+n] == 0 && offd[i+x] == 0) {
                row[x] = i;
                col[i] = 1;
                dig[i-x+n] = 1;
                offd[i+x] = 1;
                dfs(x+1, n);
                col[i] = 0;
                row[x] = 0;
                dig[i-x+n] = 0;
                offd[i+x] = 0;
            // }
        }
    }
    
}

int main () {
    int n;
    cin >> n;
    dfs (1,n);
    cout << res << endl;
}