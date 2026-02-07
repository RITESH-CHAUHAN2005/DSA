#include <iostream>
using namespace std;
int main()
{
    int cnt = 0;
    char ch;
    while (true)
    {
        cin >> ch;
        if (ch == '$')
        {
            break;
        }
        cnt++;
    }

    cout << "cnt = " << cnt << endl;
    return 0;
}
/*
Output -->
caca$acswcacascac
cnt = 4
*/