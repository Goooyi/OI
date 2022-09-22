#include<iostream>
using namespace std;
int main(){
    long n,res=1,last =1;
    cin >> n;
    for(int i=2;i<=n;i++){
        res = i* last + res;
        last = last * i;
    }
    cout << res << endl;
    return 0;
}
