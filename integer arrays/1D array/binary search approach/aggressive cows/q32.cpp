#include <iostream>
#include <algorithm>
using namespace std;

bool isPossible(int arr[], int size, int mid, int cows)
{
    int cowCount = 1;
    int lastpos = arr[0];

    for (int i = 0; i < size; i++)
    {
        if ((arr[i] - lastpos) >= mid)
        {
            cowCount++;
            if (cowCount == cows)
            {
                return true;
            }
            lastpos = arr[i];
        }
    }
    return false;
}

int aggressiveCows(int arr[], int size, int cows)
{
    sort(arr, arr + size);
    // cout << "sorted array: " << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << endl;
    // }
    int start = arr[1] - arr[0];
    int max = arr[size - 1];
    int min = arr[0];

    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i] > max)
    //     {
    //         max = arr[i];
    //     }
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i] < min)
    //     {
    //         min = arr[i];
    //     }
    // }

    int end = max - min;
    int mid = start + ((end - start) / 2);
    int ans = -1;

    while (start <= end)
    {
        if (isPossible(arr, size, mid, cows))
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
    // if (ans == 0)
    // {
    //     return -1;
    // }
    // else
    // {
    //     return ans;
    // }
    return ans;
}

int main()
{
    int k, n;
    cout << "enter the number of cows: ";
    cin >> k;

    int stalls[100];
    cout << "enter the size of stall points array: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> stalls[i];
    }

    cout << "the cows are to be placed at a distance: " << aggressiveCows(stalls, n, k);
}