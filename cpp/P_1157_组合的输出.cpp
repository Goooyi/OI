#include <cstdio>
#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int n,r;
    scanf ("%d%d",&n,&r);
    int U = (1 << n);
    for (int i = U-1 ; i >= 0 ;i--) {
        if (__builtin_popcount(i) == r) {
            // for (int j = n-1; j >= 0; j--)
            for (int j = n-1; j >= 0; j--) {
                if (i & (1 << j)) cout << n -j <<setw(3);
                // if (i & (1 << j)) cout << n-(j+1)+1 <<setw(3);
            }
            puts("");
        }
    }
}