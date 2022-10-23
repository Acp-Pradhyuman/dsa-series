#include <iostream>
using namespace std;

int totalBookPages(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

bool isPossible(int arr[], int size, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < size; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            // pageSum = 0;
            // pageSum += arr[i];
            pageSum = arr[i];
        }
    }

    if (studentCount == m)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int bookAllocation(int arr[], int size, int m)
{
    int start = 0;
    int end = totalBookPages(arr, size);
    int mid = start + ((end - start) / 2);
    int ans = -1;

    while (start <= end)
    {
        if (isPossible(arr, size, m, mid))
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
    cout << "enter the number of books to be alloted: ";
    cin >> n;
    cout << "enter number of students: ";
    cin >> m;

    int book[100];
    for (int i = 0; i < n; i++)
    {
        cin >> book[i];
    }

    cout << "book allocation: " << bookAllocation(book, n, m);
}