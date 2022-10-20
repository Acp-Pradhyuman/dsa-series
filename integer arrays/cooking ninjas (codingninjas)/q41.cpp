#include <iostream>
#include <algorithm>
using namespace std;

bool isPossible(int arr[], int size, int dishes, int mid)
{
    int dishCount = 0;
    int time = 0;

    for (int i = 0; i < size; i++)
    {
        time = arr[i];
        int j = 2;
        while (time <= mid)
        {
            dishCount++;
            time += arr[i] * j;
            j++;
        }
        if (dishCount >= dishes)
        {
            return true;
        }
    }
    return false;
}

int minTimeToCook(int arr[], int size, int dishes)
{
    int start = 0;
    int end = arr[size - 1] * (dishes * ((dishes + 1) / 2));
    int mid = start + ((end - start) / 2);
    int ans = -1;

    while (start <= end)
    {
        if (isPossible(arr, size, dishes, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + ((end - start) / 2);
    }

    return ans;
}

int main()
{
    int n, m;
    cout << "enter the number of dishes : ";
    cin >> m;
    cout << "enter the number of cooks and their ranks : ";
    cin >> n;

    int cooks[100];
    for (int i = 0; i < n; i++)
    {
        cin >> cooks[i];
    }

    sort(cooks, cooks + n);

    cout << "The minimum time required to prepare the dishes is : " << minTimeToCook(cooks, n, m);
}