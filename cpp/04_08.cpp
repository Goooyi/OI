#include<iostream>
using namespace std;
int main(){
    long n,t,res=0,temp;
    cin >> n >> t;
    while(n>0){
        temp = n/10;
        if((n-temp * 10) == t)
            res++;
        n /= 10;
    }
    cout << res << endl;
    return 0;
}
