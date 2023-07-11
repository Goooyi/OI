#include<cstdio>

using namespace std;

int isPrim(int x) {
    if (x < 2) return 0;
    for (int i = 0; i*i <= x; i++) {
        if (x % i == 0) return 1;
    }
    return 0;
}

int a[25] = {0};

int main () {
    int n,k,res=0;
    scanf("%d%d",&n,&k);
    for (int i = 0; i < n; i++) scanf("%d",&a[i]);
    int all = 1<<n - 1;
    for (int i = 0; i <= all; i++) {
        if(__builtin_popcount(i) == k) {
            int temp = 0, cnt = 0;
            while (i != 0) {
                if (1 & i) {
                    temp += a[cnt];
                }
                cnt += 1;
                i = i >> 1;
            }
            res += isPrim(temp);
        }
    }
    return res;
}