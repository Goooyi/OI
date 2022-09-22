#include <iostream>
#include <cstdio>
#include <unordered_set>
using namespace std;

void qs(int a[], int i, int j) {
    int l = i, r = j;
    int pivot = a[(l+r)/2];
    do {
        while(a[l] < pivot) l++;
        while(a[r] > pivot) r--;

        if (l <= r) {
            int temp = a[l];
            a[l] = a[r];
            a[r] = temp;
            l++;r--;
        }

    }while(l<=r);

    if (l < j) qs(a,l,j);
    if (r > i) qs(a, i,r);
}

int main() { 
    unordered_set<int> memo;
    int n,a[110] = {0},temp;
    int index = 0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);

        if (memo.find(temp) != memo.end()) continue;
		memo.emplace(temp);
        a[index] = temp;
        index ++;
    }
    qs(a,0,index-1);
    printf("%d\n",index);
    for (int i = 0; i < index; i++) {
        printf("%d",a[i]);
        if (i == index-1) printf(" ");
        else printf("\n");
    }
}