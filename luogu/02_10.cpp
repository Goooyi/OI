#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,res1,res2;
    cin >> a >> b >> c >> d;
    res1 = c-a;
    res2 = d-b;
    if(res2 < 0){
        res1--;
        res2 += 60;
    }

    cout << res1 << " " << res2;

    return 0;
}
