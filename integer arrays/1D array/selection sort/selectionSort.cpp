#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout << "enter size of the array: ";
    cin >> n;

    int num[100];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    selectionSort(num, n);

    cout << "after selection sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << endl;
    }
}