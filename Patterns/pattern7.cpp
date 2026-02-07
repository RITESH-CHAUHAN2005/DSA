#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // numbers
        int num = i;
        for (int j = 1; j <= i; j++)
        {
            cout << num;
            num++;
        }

        num = 2 * i - 2;
        for (int j = 1; j <= i - 1; j++)
        {
            cout << num;
            num--;
        }

        cout << endl;
    }
    return 0;
}
/*
Output -->
5
    1
   232
  34543
 4567654
567898765
*/