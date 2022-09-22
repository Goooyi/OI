#include<iostream>
using namespace std;
int main(){
    int v_a = 5, v_yao = 8, distance = 100;
    double delta, ans;
    delta = v_yao - v_a;
    ans = 1.0 * distance / delta;
    cout << ans;

    return 0;
}
