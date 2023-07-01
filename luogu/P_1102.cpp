#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long LL;
 
LL a[200010];

LL findL(LL a[], LL l, LL h, LL target, LL n) {
    while (l <= h) {
        int mid = l + (h-l) / 2;
        if (a[mid] >= target) h = mid-1;
        else l = mid+1;
    }
    if (a[l] == target) {
        return l;
    }
    return -1l;
}

LL findR(LL a[], LL l, LL h, LL target, LL n) {
    while (l <= h) {
        int mid = l + (h-l) / 2;
        if (a[mid] <= target) l = mid+1;
        else h = mid-1;
    }
    if (a[h] == target) {
        return h;
    }
    return -1l;
}

int main () {
    LL n, c;
    LL res = 0l;
    scanf ("%lld%lld",&n,&c);
    for (int i = 0; i < n; i++) {
        scanf("%lld",&a[i]);
    }
    sort(a,a+n);
    for (int i = 0; i < n; i++) {
        LL target = a[i] + c;
        LL l = findL(a,i+1,n-1,target,n);
        if (l != -1) {
            LL r = findR(a,l,n-1,target,n);

            res += (r-l+1l);
        }
    }
    printf("%lld",res);
}