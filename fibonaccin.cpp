#include <iostream>
using namespace std;

bool isFibonacci(int n)
{
    if (n == 0 || n == 1)
        return true;

    int a = 0, b = 1, c = a + b;

    while (c <= n)
    {
        if (c == n)
            return true;
        a = b;
        b = c;
        c = a + b;
    }
    return false;
}

int main()
{
    int N;
    cin >> N;

    if (isFibonacci(N))
        cout << "true";
    else
        cout << "false";

    return 0;
}
