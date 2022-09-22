#include <iostream>
#include <cstring>
using namespace std;

struct Bigint{
    int len, a[22];
    Bigint(int x = 0){
        memset(a,0,sizeof(a));
        for (len = 1; x; len++) a[len] = x%10,x/=10;
        len--;
    }

    int &operator[] (int i){
        return a;
    }
};

int main() {
    Bigint a(123456);
    cout << a << endl;
}
