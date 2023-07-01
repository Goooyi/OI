#include<cstdio>
#include<vector>
using namespace std;

int main () {
    int n,m;
    scanf("%d%d", &n, &m);
    vector<int> mem(n,0);
    for (int i = 0; i < n; i++) {
        scanf("%d", &mem[i]);
    }
    for (int i = 0; i < m; i++) {
        int tmp;
        scanf("%d", &tmp);
        printf("%d\n", mem[tmp-1]);
    }
}