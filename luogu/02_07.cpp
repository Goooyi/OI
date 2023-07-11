#include<iostream>
using namespace std;
int main(){
    float in;
    cin >> in;

    int temp = int(in)* 10;
    int tin = in*10;
    int res = 0;
    while(temp > 0){
        res = res * 10 + (tin-temp);
        tin = tin/10;
        temp = temp/100*10;
        cout << res << "  " <<tin << endl;
    }
    cout << (res*10.0 + tin)/1000 <<endl;
}
