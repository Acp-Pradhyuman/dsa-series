#include <iostream>
#include <algorithm>
using namespace std;

void reverseOfArray(int arr[], int size, int index)
{
    int start = index + 1;
    int end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int n, m;
    cout << "enter the size of the array: ";
    cin >> n;
    cout << "enter index after which you want to reverse: ";
    cin >> m;

    int num[100];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    reverseOfArray(num, n, m);
    cout << "reveresed array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << endl;
    }
}