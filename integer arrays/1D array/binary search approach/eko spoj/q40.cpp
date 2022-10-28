#include <iostream>
#include <algorithm>
using namespace std;

bool isPossible(int arr[], int size, int mid, int woods)
{
    int woodMeasure = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] - mid > 0)
        {
            woodMeasure += (arr[i] - mid);
        }
    }

    if (woodMeasure >= woods)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int chopWood(int arr[], int size, int woods)
{
    int start = 0;
    int end = arr[size - 1];
    int mid = start + ((end - start) / 2);
    int ans = -1;

    while (start < end)
    {
        if (isPossible(arr, size, mid, woods))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }

    return ans;
}

int main()
{
    int n, m;
    cout << "enter the total meters of wood required : ";
    cin >> m;

    cout << "enter size of total wood to be cut : ";
    cin >> n;

    int wood[100];
    for (int i = 0; i < n; i++)
    {
        cin >> wood[i];
    }

    sort(wood, wood + n);

    cout << "The height at which the machine is to be set is : " << chopWood(wood, n, m);
}