#include <iostream>
#include <vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int nCols)
{
    vector<int> ans;
    for (int j = 0; j < nCols; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < nRows; i++)
            {
                ans.push_back(arr[i][j]);
            }
        }
        else
        {
            for (int i = (nRows - 1); i >= 0; i--)
            {
                ans.push_back(arr[i][j]);
            }
        }
    }
    return ans;
}

int main()
{
    // vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    vector<vector<int>> arr = {{1, 2, 4, 5}, {3, 6, 8, 10}, {11, 12, 13, 15}, {16, 14, 9, 7}};

    vector<int> res = wavePrint(arr, 4, 4);

    cout << "wave print : " << endl;
    for (int i = 0; i < res.size(); i++)
    {
        cout << res.at(i) << endl;
    }
}