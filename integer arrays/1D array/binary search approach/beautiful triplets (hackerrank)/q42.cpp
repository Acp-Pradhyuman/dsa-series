#include <iostream>
#include <algorithm>
using namespace std;

bool isNumberAvailable(int arr[], int size, int number)
{
    int start = 0;
    int end = size;
    int mid = start + ((end - start) / 2);

    while (start <= end)
    {
        if (arr[mid] == number)
        {
            return true;
        }
        else if (arr[mid] > number)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + ((end - start) / 2);
    }

    return false;
}

int tripletCount(int arr[], int size, int d)
{
    int count = 0;
    for (int i = 0; i < size - 2; i++)
    {
        int x = arr[i];
        int y = d + x;
        int z = 2 * d + x;
        if (isNumberAvailable(arr, size, y) && isNumberAvailable(arr, size, z))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n, m;
    cout << "enter the triplet sum : ";
    cin >> m;

    cout << "enter the size of the array to find the triplet : ";
    cin >> n;

    int num[100];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    sort(num, num + n);
    cout << "number of triplets : " << tripletCount(num, n, m);
}