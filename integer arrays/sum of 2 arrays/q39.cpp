#include <iostream>
#include <algorithm>
using namespace std;

bool sumOf2Arrays(int arr1[], int size1, int arr2[], int size2, int arr3[])
{
    int i = size1 - 1, j = size2 - 1;
    int k = max(i, j);
    int size = max(size1, size2);
    int carry = 0;
    while (i >= 0 && j >= 0)
    {
        arr3[k] = (arr1[i] + arr2[j] + carry) % 10;
        carry = (arr1[i] + arr2[j] + carry) / 10;
        i--;
        j--;
        k--;
    }

    while (i >= 0)
    {
        arr3[i] = (arr1[i] + carry) % 10;
        carry = (arr1[i] + carry) / 10;
        i--;
    }

    while (j >= 0)
    {
        arr3[j] = (arr2[j] + carry) % 10;
        carry = (arr2[j] + carry) / 10;
        j--;
    }

    if (carry != 0)
    {
        for (int i = size; i >= 1; i--)
        {
            arr3[i] = arr3[i - 1];
        }
        arr3[0] = carry;
    }

    return carry != 0;
    // return false;
}

int main()
{
    int n1, n2;
    cout << "enter size of the first array: ";
    cin >> n1;

    int num1[100];
    for (int i = 0; i < n1; i++)
    {
        cin >> num1[i];
    }

    cout << "enter size of the second array: ";
    cin >> n2;

    int num2[100];
    for (int i = 0; i < n2; i++)
    {
        cin >> num2[i];
    }

    int num3[100];
    bool carry = sumOf2Arrays(num1, n1, num2, n2, num3);

    cout << "the sum of arrays is : " << endl;

    if (!carry)
    {
        for (int i = 0; i < max(n2, n1); i++)
        {
            cout << num3[i] << endl;
        }
    }
    else
    {
        for (int i = 0; i < (max(n2, n1) + 1); i++)
        {
            cout << num3[i] << endl;
        }
    }
}