#include <iostream>
using namespace std;

// This is for the integer values
//  int main()
//  {
//      int n;
//      cin >> n;

//     int ans = 0;
//     while (ans * ans <= n)
//     {
//         ans = ans + 1;
//     }
//     ans = ans - 1;
//     cout << ans << endl;
//     return 0;
// }

// And for the decimal places
int main()
{
    int n;
    cin >> n;

    int p;
    cin >> p;

    double ans = 0;
    while (ans * ans <= n)
    {
        ans = ans + 1;
    }
    ans = ans - 1;

    double incFac = 0.1;

    for (int i = 1; i <= p; i++)
    {
        while (ans * ans <= n)
        {
            ans = ans + incFac;
        }
        ans = ans - incFac;
        incFac = incFac / 10;
    }
    cout << ans << endl;

    return 0;
}