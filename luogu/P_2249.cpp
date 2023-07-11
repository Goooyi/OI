#include<iostream>
#include<cstdio>
using namespace std;

int a[1000010];
int bs (int a[],int target,int n) {
    int l = 0, h = n-1;
    while (l <= h) {
        int mid = l + (h-l) / 2;
        if (a[mid] >= target) {
            h = mid - 1;
        }else {
            l = mid+1;
        }
    }
    if (a[++h] == target) {
        return h+1;
    }
    return -1;
}

int main(){
    int n,m;
    scanf("%d%d", &n,&m);
    for (int i = 0; i < n;i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < m; i++) {
        int target;
        scanf("%d", &target);
        printf("%d ", bs(a,target,n));
    }
    return 0;
}
