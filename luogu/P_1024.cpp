#include <iostream>
#include <cstdio>
using namespace std;

int a[100010];

int main () {
    int n, c;
    cin >> n >> c;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    sort(a,a+n);
    
}
