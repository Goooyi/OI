#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int res,i=1;
    cin >> res;
    while(res != 1){
        res = floor(res/2);
        i+=1;
    }
    cout <<  i << endl;
    return 0;
}
