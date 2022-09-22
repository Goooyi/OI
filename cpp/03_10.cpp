#include<iostream>
using namespace std;
int main(){
    int res, maxhour, counter,school,offschool,temp;
    counter = 1;
    maxhour = -1;
    res = 0;
    while(counter <= 7){
        cin >> school >> offschool;
        temp = school + offschool;
        if(temp > 8 && temp > maxhour){
            maxhour = temp;
            res = counter;
        }
        counter++;
    }
    cout << res << endl;
    return 0;
}