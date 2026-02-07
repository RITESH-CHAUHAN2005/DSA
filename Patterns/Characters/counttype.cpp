#include <iostream>
using namespace std;

int main()
{
    int lCount = 0; // To Track the number of lowercase letters
    int uCount = 0; // To Track the number of upercase letters
    int dCount = 0; // To Track the number of Digits
    int sCount = 0; // To Track the number of Special Symbols
    int wCount = 0; // To Track the number of Whitespaces

    char ch;
    while (true)
    {
        ch = cin.get();
        if (ch == '$')
        {
            break;
        }

        if (ch >= 'a' and ch <= 'z')
        {
            lCount++;
        }
        else if (ch >= 'A' and ch <= 'Z')
        {
            uCount++;
        }
        else if (ch >= '0' and ch <= '9')
        {
            dCount++;
        }
        else if (ch == ' ' || ch == '\n' || ch == '\t')
        {
            wCount++;
        }
        else
        {
            sCount++;
        }
    }

    cout << lCount << endl
         << uCount << endl
         << dCount << endl
         << wCount << endl
         << sCount << endl;
    return 0;
}
/*
Output-->
aBC2#
0De*1
%3&4 $
2
3
5
3
4
*/