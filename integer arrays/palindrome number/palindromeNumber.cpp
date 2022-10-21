#include <iostream>
using namespace std;

bool checkPalindrome(int num)
{
    int n[100];
    int size = 0;
    for (int i = 0; num != 0; i++)
    {
        n[i] = num % 10;
        num = num / 10;
        size++;
    }

    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        if (n[start] == n[end])
        {
            start++;
            end--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "enter a number : ";
    cin >> n;

    if (checkPalindrome(n))
    {
        cout << "The number is a palindrome";
    }
    else
    {
        cout << "The number is not a palindrome";
    }
}