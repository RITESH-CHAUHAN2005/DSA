#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 0 || n == 1)
    {
        cout << n << endl;
    }
    else
    {
        // n>=2

        int a = 0; //0th Fibonacci number
        int b = 1; //1st Fibonacci number
        int i = 1;
        int c;
        while (i <= n - 1) //we want to run this loopn-1 times to find the nth fibonacci number.
        {
            c = a + b;
            a = b;
            b = c;
            i = i + 1;
        }
        cout << c << endl;
    }
    return 0;
}