#include <iostream>
using namespace std;

int pow(int a, int b)
{
    // a^b = (a^(b/2))^2 for even and ((a^(b/2))^2) * a for odd
    int res = 1;
    while (b != 0)
    {
        if (b & 1)
        {
            res = res * a; // oddd case ((a^(b/2))^2) * a
        }

        a = a * a;
        b = b >> 1;
    }
    return res;
}

int main()
{
    int a, b;
    cout << "enter a : ";
    cin >> a;
    cout << "enter b : ";
    cin >> b;
    cout << "a^b = " << pow(a, b);
}