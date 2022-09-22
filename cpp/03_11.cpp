#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,bag,prices,res,temp;
    cin >> n >> bag >> prices;
    res = ceil(1.0 * n/bag) * prices;
    for(int i = 0; i<2; i++){
        cin >> bag >> prices;
        temp = ceil(1.0 * n/bag) * prices;
        if(temp < res)
            res = temp;
    }
    cout << res << endl;
    return 0;
}