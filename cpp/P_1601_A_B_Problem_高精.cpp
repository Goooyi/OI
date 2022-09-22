#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
using namespace std;

int x[520],y[520],c[520];

int main(){
    string a, b;
    cin >> a >> b;
    for(int i = a.length()-1,j=0; i>= 0; i--, j++){
        x[j] = a[i] - '0';
    }
    for(int i = b.length()-1,j=0; i>= 0; i--, j++){
        y[j] = b[i] - '0';
    }
    int n = max(a.length(),b.length());
    for(int i = 0; i < n; i++){
        c[i+1] = (c[i] + x[i] + y[i]) / 10;
        c[i] = (c[i] + x[i] + y[i]) % 10;
    }
    for(int i = (c[n] != 0 ? n : n-1); i >= 0; i--)
        cout << c[i];
    cout << endl;
}