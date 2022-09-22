#include<iostream>
using namespace std;
int main(){
    int n, in, res=1001;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> in;
        if(in<res){
            res = in;
        }
    }
    cout << res << endl;
    return 0;
}
