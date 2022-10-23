#include <iostream>
#include <algorithm>
using namespace std;

void merge(int arr1[], int size1, int arr2[], int size2)
{
    for (int i = 0; i < size1; i++)
    {
        if (arr1[i] > arr2[0])
        {
            swap(arr1[i], arr2[0]);
            sort(arr2, arr2 + size2);
        }
    }

    int k = 0;
    for (int i = size1; i < (size1 + size2); i++)
    {
        arr1[i] = arr2[k++];
    }
}

int main()
{
    int n, m;
    cout << "enter size of first array: ";
    cin >> n;

    int num1[100];
    for (int i = 0; i < n; i++)
    {
        cin >> num1[i];
    }

    cout << "enter size of second array: ";
    cin >> m;
    int num2[100];
    for (int i = 0; i < m; i++)
    {
        cin >> num2[i];
    }

    merge(num1, n, num2, m);

    cout << "after merge the new array: " << endl;
    cout << "first array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << num1[i] << endl;
    }

    cout << "second array: " << endl;
    for (int i = 0; i < m; i++)
    {
        cout << num2[i] << endl;
    }

    cout << "first array: " << endl;
    for (int i = 0; i < n + m; i++)
    {
        cout << num1[i] << endl;
    }
}