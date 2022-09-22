#include <iostream>
#include <cstdio>
using namespace std;

int n,k,arr[5000005],ans=0;

void findkth(int l , int r) {
	if (l==r) {
		ans = arr[l];
        return;
	}
	int pivot = arr[(l+r)/2];
    // int pivot = (l+r)/2;
	int i = l, j = r, temp;
	do {
		// while(arr[i] < arr[pivot]) i++;
		// while(arr[j] > arr[pivot]) j--;
        while(arr[i] < pivot) i++;
		while(arr[j] > pivot) j--;
		if (i <= j) {
			temp = arr[i]; arr[i] = arr[j]; arr[j] = temp;
			i++;j--;
		}
	} while (i <= j);
	
    if (k <= j )  findkth(l,j);
    else if(k >= i) findkth(i,r);
    else {
        ans = arr[j+1];
		return;
	}
}
	
int main () {
	
	// scanf("%d%d",&n,&k);
    // k++;
	// for (int i = 1; i< n+1; i++) {
		// cin >> arr[i];
        // scanf("%d",&arr[i]);
	// }
	// findkth(1,n);
	// cout << ans ;
	// return 0;
	

	
}