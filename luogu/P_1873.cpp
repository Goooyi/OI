#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int a[1000010];

int main (){
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++ ) {
        scanf("%d", &a[i]);
    }
    sort(a,a+n,greater<int>());
    long long sum = 0l;
    int i = 1;
    while (sum < m) {
        sum += ( i * (a[i-1] - a[i]));
        i+=1;
    }
    i--;
    int increase = (sum - m) / i;
    
    printf("%d",a[i]+increase);
}