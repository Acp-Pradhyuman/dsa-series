#include <iostream>
using namespace std;

void rotateForward(int arr[], int size, int key)
{
    for (int i = 0; i < key; i++)
    {
        int temp = arr[size - 1];
        for (int j = size - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
}

void rotateForwardWithSpace(int arr[], int size, int key)
{
    int temp[100];
    for (int i = 0; i < size; i++)
    {
        temp[(i + key) % size] = arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        arr[i] = temp[i];
    }
}

void rotateBackwardWithSpace(int arr[], int size, int key)
{
    int temp[100];
    for (int i = 0; i < size; i++)
    {
        if ((i - key) < 0)
        {
            temp[size - key + i] = arr[i];
        }
        else
        {
            temp[i - key] = arr[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        arr[i] = temp[i];
    }
}

void rotateBackward(int arr[], int size, int key)
{
    for (int i = 0; i < key; i++)
    {
        int temp = arr[0];
        for (int j = 0; j < size - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[size - 1] = temp;
    }
}

int main()
{
    int n, k;
    cout << "enter the size of the array : ";
    cin >> n;
    cout << "enter the number of rotations : ";
    cin >> k;

    int num[100];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    rotateBackwardWithSpace(num, n, k);
    // rotateForwardWithSpace(num, n, k);
    // rotateForward(num, n, k);
    // rotateBackward(num, n, k);

    cout << "rotated array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << endl;
    }
}