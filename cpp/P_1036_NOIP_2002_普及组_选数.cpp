#include<cstdio>
#include<iostream>
using namespace std;

int isPrim(int x) {
    if (x < 2) return 0;
    for (int i = 2; i*i <= x; i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}

int a[25] = {0};

int main () {
    int n,k,res=0;
    scanf("%d%d",&n,&k);
    for (int i = 0; i < n; i++) scanf("%d",&a[i]);
    // cout << a[1] << " " << a[2] << endl;
    // 这里必须是(1<<n) - 1 而不是 (1<<n - 1)
    int all = (1<<n) - 1;
    for (int i = 0; i <= all; i++) {
        if(__builtin_popcount(i) == k) {
            int temp = 0;
            for (int j = 0; j < n; j++) {

                if ((i&(1<<j))) temp += a[j];
            }
            res += isPrim(temp);
        }
    }
    // printf("%d\n",res);
    cout << res << endl;
    return 0;
}