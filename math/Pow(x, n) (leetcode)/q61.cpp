#include <iostream>
using namespace std;

double myPow(double a, int b)
{
    // a^b = (a^(b/2))^2 for even and ((a^(b/2))^2) * a for odd
    double res = 1;
    if (b >= 0)
    {
        while (b != 0)
        {
            if (b & 1)
            {
                res = res * a; // oddd case ((a^(b/2))^2) * a
            }

            a = a * a;
            b = b >> 1;
        }
    }
    else
    {
        long long int exp = 1LL * (-1) * b;
        while (exp != 0)
        {
            if (exp & 1)
            {
                res = res / a; // oddd case ((a^(b/2))^2) * a
            }

            a = a * a;
            exp = exp >> 1;
        }
    }
    return res;
}

int main()
{
    double a;
    int b;
    cout << "enter a : ";
    cin >> a;
    cout << "enter b : ";
    cin >> b;
    cout << "a^b = " << myPow(a, b);
}