#define Pi 3.141593
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double v = 4*Pi*(pow(4,3) + pow(10,3))/3;
    int res = pow(v,1.0/3);

    cout << res;

    return 0;
}
