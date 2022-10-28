#include <iostream>
using namespace std;

bool checkSortedAndRotated(int arr[], int size)
{
    int i = 0;
    int pair = 0;

    if (arr[size - 1] > arr[0])
    {
        pair++;
    }

    while (i < size - 1)
    {
        if (arr[i] > arr[i + 1])
        {
            pair++;
        }
        i++;
    }

    // if (pair == 1)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }
    return pair <= 1;
}

int main()
{
    int n;
    cout << "enter the size of array: ";
    cin >> n;

    int num[100];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    bool check = checkSortedAndRotated(num, n);

    if (check)
    {
        cout << "The array is sorted and rotated!" << endl;
    }
    else
    {
        cout << "The array is not sorted and rotated!" << endl;
    }
}