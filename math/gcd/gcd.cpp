#include <iostream>
using namespace std;

int gcd(int n1, int n2)
{
    if (n1 == 0)
    {
        return n2;
    }

    if (n2 == 0)
    {
        return n1;
    }

    while (n1 != n2)
    {
        if (n1 > n2)
        {
            n1 = n1 - n2;
        }
        else
        {
            n2 = n2 - n1;
        }
    }

    return n2;
}

int main()
{
    int n, m;
    cout << "enter first number : ";
    cin >> n;

    cout << "enter second number : ";
    cin >> m;

    cout << "gcd of both numbers are : " << gcd(n, m);
}