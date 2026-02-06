#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int lsf = INT_MIN; // To Track the Largest so far
    int ssf = INT_MAX; // To Track the smallest so far

    int i = 1;
    while (i <= n)
    {
        int x;
        cin >> x;

        if (x > lsf)
        {
            lsf = x;
        }

        if (x < ssf)
        {
            ssf = x;
        }

        i = i + 1;
    }

    cout << lsf << " " << ssf << endl;
    return 0;
}