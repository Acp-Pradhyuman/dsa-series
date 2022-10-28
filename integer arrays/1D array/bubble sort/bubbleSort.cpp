#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped)
        {
            // return;
            break;
        }
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

    selectionSort(num, n);

    cout << "sorted array througgh bubbel sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << endl;
    }
}