#include <iostream>
#include <cstring>

using namespace std;

void size_of(char arr[])
{
    cout << "sizeof() function: "<< sizeof(arr) << endl; // warning: 'sizeof' on array function parameter 'arr' will return size of 'char*' .
    cout << "strlen() function: " << strlen(arr) << endl;
}

int main()
{
    char arr[20] = "hello";
    size_of(arr);
    return 0;
}
