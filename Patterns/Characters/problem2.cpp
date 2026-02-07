#include <iostream>
using namespace std;

int main()
{
    char ch;
    ch = cin.get();
    if (ch >= 'a' and ch <= 'z')
    {
        cout << "lowercase" << endl;
    }
    else if (ch >= 'A' and ch <= 'Z')
    {
        cout << "upercase" << endl;
    }
    else if (ch >= '0' and ch <= '9')
    {
        cout << "Digits" << endl;
    }
    else if (ch == ' ' || ch == '\n' || ch == '\t')
    {
        cout << "Whitespaces" << endl;
    }
    else
    {
        cout << "Special" << endl;
    }
    return 0;
}
/*
Output-->
a
lowercase
J
upercase
*/