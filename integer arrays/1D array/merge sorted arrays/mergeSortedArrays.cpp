#include <iostream>
#include <algorithm>
using namespace std;

void mergeSortedArray(int arr1[], int size1, int arr2[], int size2, int arr3[])
{
    int i = 0, j = 0;
    int k = 0;
    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    // int size3 = max(size1, size2);
    // if (size3 == size1)
    // {
    //     while (i < size1)
    //     {
    //         arr3[k] = arr1[i];
    //         i++;
    //         k++;
    //     }
    // }
    // else
    // {
    //     while (j < size2)
    //     {
    //         arr3[k] = arr2[j];
    //         k++;
    //         j++;
    //     }
    // }

    while (i < size1)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    while (j < size2)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

int main()
{
    int n1, n2;
    cout << "enter size of first array: ";
    cin >> n1;
    cout << "enter size of the second arrray: ";
    cin >> n2;

    int num1[100];
    cout << "enter first array elements: ";
    for (int i = 0; i < n1; i++)
    {
        cin >> num1[i];
    }

    int num2[100];
    cout << "enter second array elements: ";
    for (int i = 0; i < n2; i++)
    {
        cin >> num2[i];
    }

    int num3[100];
    mergeSortedArray(num1, n1, num2, n2, num3);
    cout << "enter merged sorted array: " << endl;
    for (int i = 0; i < (n1 + n2); i++)
    {
        cout << num3[i] << endl;
    }
}