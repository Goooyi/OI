#include<iostream>
using namespace std;
int main(){
    int n,curr=1;
    cin >> n;
    for(int i = n; i > 0; i--){
        for(int j = i; j > 0; j--){
            if(curr<10)
                cout << 0 << curr;
            else
                cout << curr;
            curr ++;
        }
        cout << endl;
    }
    return 0;
}
