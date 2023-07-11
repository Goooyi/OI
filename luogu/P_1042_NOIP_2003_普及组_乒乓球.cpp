#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    string s, temp;
    cin >> s;
    while (cin >> temp)
    {
        s += temp;
    }

    int a= 0, b= 0,  x= 0, y = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'E'){
            cout << a << ':' << b << endl;
            break;
        }

        if (s[i] == 'W')
            a++;

        else
            b++;

        if(max(a,b) >= 11 && abs(a-b) >= 2){
            cout << a << ':' << b << endl;
            a = 0,b = 0;
        }
        
    }

    cout << endl;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'E'){
            cout << x << ':' << y << endl;
            break;
        }
            

        if (s[i] == 'W')
            x++;

        else
            y++;

        if(max(x,y) >= 21 && abs(x-y) >= 2){
            cout << x << ':' << y << endl;
            x = 0,y = 0;
        }

        
    }
    cout << endl;

    return 0;
}