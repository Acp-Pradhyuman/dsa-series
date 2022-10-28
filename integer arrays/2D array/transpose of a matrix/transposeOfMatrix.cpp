#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void transposeOfMatrix(vector<vector<int>> &arr)
{
    int a = 0;

    while (a < arr.size())
    {
        for (int i = a, j = a; i < arr.size(), j < arr.size(); i++, j++)
        {
            swap(arr[a][j], arr[i][a]);
        }
        a++;
    }
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    transposeOfMatrix(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}