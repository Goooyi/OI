#include <cmath>
#include <string>
#include <iostream>
using namespace std;

int a[5010],b[5010],c[5010];
int main(){
    string A,B;
    cin >> A >> B;
    for(int i = A.length() - 1, j = 1; i >= 0; i--,j++){
        a[j] = A[i] - '0';
    }
    for(int i = B.length() - 1, j = 1; i >= 0; i--,j++){
        b[j] = B[i] - '0';
    }

    for(int i = 1; i <= A.length(); i++){
        for(int j = 1; j <= B.length(); j++){
            c[i+j-1] += (a[i] * b[j]);
        }
    }


    int n = A.length() + B.length() + 1;
    for(int i = 1; i <= n; i++){
        c[i+1] += c[i] / 10;
        c[i] = c[i] % 10;
    }

    for(;!c[n];) n--;

    //临界情况，a = 0时
    for(int i = max(1,n); i>0; i--){
        cout << c[i] ;
    }
    cout << endl;
}