#include <iostream>
using namespace std;

int main()
{
    char ch1 = 'A';
    cout << ch1 << endl;
    cout << (int)ch1 << endl;

    char ch2 = 'D';
    cout << ch2 << endl;
    cout << (int)ch2 << endl;

    char ch3 = 'x';
    cout << ch3 << endl;
    cout << (int)ch3 << endl;
    ch3--;
    cout << ch3 << endl;
    cout << (int)ch3 << endl;
    return 0;
}
/*
Output-->
A
65
D
68
x
120
w
119
*/
