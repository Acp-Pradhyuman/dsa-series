#include <iostream>
using namespace std;

int modularExponentiation(int a, int b, int m)
{
    // a^b = (a^(b/2))^2 for even and ((a^(b/2))^2) * a for odd
    int res = 1;
    while (b != 0)
    {
        if (b & 1)
        {
            res = (1LL * (res * (a % m))) % m; // odd case ((a^(b/2))^2) * a
        }

        a = (1LL * ((a % m) * (a % m))) % m;
        b = b >> 1;
    }
    return res;
}

int main()
{
    int a, b, m;
    cout << "enter a : ";
    cin >> a;

    cout << "enter b : ";
    cin >> b;

    cout << "enter m : ";
    cin >> m;

    cout << "a^b%m = " << modularExponentiation(a, b, m);
}