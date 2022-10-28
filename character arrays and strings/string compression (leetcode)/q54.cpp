#include <iostream>
#include <string>
#include <vector>
using namespace std;

int compress(vector<char> &chars)
{
    vector<char> occurrence;
    int count = 0;
    int index = 0;
    int i = 0;
    int j = i + 1;
    while (i < chars.size())
    {
        int j = i + 1;
        while (j < chars.size() && chars[i] == chars[j])
        {
            j++;
        }
        count = j - i;
        chars[index++] = chars[i];

        if (count > 1)
        {
            string str = to_string(count);
            for (char ch : str)
            {
                chars[index++] = ch;
            }
        }

        i = j;
    }
    chars[index] = '\0';
    return index;
}

int main()
{
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    // vector<char> chars = {'a', 'a', 'b', 'a', 'b', 'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'c', 'c', 'c'};
    // vector<char> chars = {'a', 'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'c', 'c', 'c'};
    int res = compress(chars);
    cout << res << endl;

    // for (char ch : chars) // auto ch
    // {
    //     cout << ch;
    // }
    for (int i = 0; chars[i] != '\0'; i++)
    {
        cout << chars[i];
    }
}