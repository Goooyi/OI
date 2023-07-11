#include<iostream>
#include<cstdio>
using namespace std;
int main() {
    int temp[12],q,index,len;
    char c;
    cin >> q;
    while(q--) {

        len = 0;
        index = -1;

        while(cin >> c) {
            temp[len] = c - '0';
			cout << temp[len];
            if( temp[len] % 2 == 0 ) {
                index = len;
            }
            len++;
            if(cin.get() == '\n') {
                if(index != -1) {
                    int t = temp[len-1];
                    temp[len-1] = temp[index];
                    temp[index] = t;
                    for(int i = 0; i < len; i++) {
                        cout << temp[i];
                    }
                    cout << endl;
                } else {
                    cout << -1 << endl;
                }
                break;
            }
        }


    }


}