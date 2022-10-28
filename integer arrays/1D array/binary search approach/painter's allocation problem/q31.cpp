#include <iostream>
using namespace std;

int totalPaint(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

bool isPossible(int arr[], int size, int mid, int m)
{
    int painter = 1;
    int paintsum = 0;

    for (int i = 0; i < size; i++)
    {
        if (paintsum + arr[i] <= mid)
        {
            paintsum += arr[i];
        }
        else
        {
            painter++;
            if (painter > m || arr[i] > mid)
            {
                return false;
            }
            paintsum = arr[i];
        }
    }

    if (painter == m)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int painterAllocation(int arr[], int size, int painter)
{
    int start = 0;
    int end = totalPaint(arr, size);
    int mid = start + ((end - start) / 2);
    int ans = -1;

    while (start <= end)
    {
        if (isPossible(arr, size, mid, painter))
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
    cout << "enter the size of painter's partition array: ";
    cin >> n;
    cout << "enter the number of painters: ";
    cin >> m;

    int paint[100];
    for (int i = 0; i < n; i++)
    {
        cin >> paint[i];
    }

    cout << "The minimum time to paint is: " << painterAllocation(paint, n, m);
}