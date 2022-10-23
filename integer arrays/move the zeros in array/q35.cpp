#include <iostream>
#include <algorithm>
using namespace std;

void moveZerosBehind(int arr[], int size)
{
    // int numZeros = 0;
    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i] == 0)
    //     {
    //         numZeros++;
    //         for (int j = i; j < size - 1; j++)
    //         {
    //             arr[j] = arr[j + 1];
    //         }
    //     }
    // }

    // for (int i = (size - numZeros); i < size; i++)
    // {
    //     arr[i] = 0;
    // }

    int i = 0, j = 0;
    while (j < size)
    {
        if (arr[j] != 0)
        {
            swap(arr[i], arr[j]);
            i++;
        }
        j++;
    }
}

void moveZerosAhead(int arr[], int size)
{
    // int numZeros = 0;
    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i] == 0)
    //     {
    //         numZeros++;
    //         for (int j = i; j >= 1; j--)
    //         {
    //             arr[j] = arr[j - 1];
    //         }
    //     }
    // }

    // for (int x = 0; x < numZeros; x++)
    // {
    //     arr[x] = 0;
    // }

    int i = size - 1, j = size - 1;
    while (j >= 0)
    {
        if (arr[j] != 0)
        {
            swap(arr[i], arr[j]);
            i--;
        }
        j--;
    }
}

int main()
{
    int n;
    cout << "enter the size of the array: ";
    cin >> n;

    int num[100];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    // moveZerosBehind(num, n);
    moveZerosAhead(num, n);
    cout << "moved the zeros in the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << endl;
    }
}