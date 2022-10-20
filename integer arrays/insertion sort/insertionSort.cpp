#include <iostream>
using namespace std;

void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        // for (int j = 0; j < i; j++)
        // {
        //     if (arr[j] > arr[i])
        //     {
        //         int temp = arr[i];
        //         arr[i] = arr[j];
        //         arr[j] = temp;
        //     }
        //     else
        //     {
        //         break;
        //     }
        // }
        // for (int j = i - 1; j >= 0; j--)
        // {
        //     if (arr[j] > arr[i])
        //     {
        //         int temp = arr[i];
        //         arr[i] = arr[j];
        //         arr[j] = temp;
        //     }
        //     // else
        //     // {
        //     //     break;
        //     // }
        // }

        int j = i - 1;
        int temp = arr[i];
        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
            j--;
        }
        arr[j + 1] = temp;
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

    insertionSort(num, n);
    cout << "sorted array through insertion sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << endl;
    }
}