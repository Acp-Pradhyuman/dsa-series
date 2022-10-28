#include <iostream>
using namespace std;

string removeDuplicates(string s)
{
    // int i = 0;
    // while (i < s.length() && (i + 1) < s.length() && s.length() != 0)
    // {
    //     if (s[i] == s[i + 1])
    //     {
    //         s.erase(i, 2);
    //         i = 0;
    //     }
    //     else
    //     {
    //         i++;
    //     }
    // }
    // return s;
    int i = 0, n = s.length();
    for (int j = 0; j < n; ++j, ++i)
    {
        s[i] = s[j];
        if (i > 0 && s[i - 1] == s[i])
        {
            i -= 2;
        }
    }
    return s.substr(0, i);
}

int main()
{
    string s;
    cout << "enter a string: ";
    cin >> s;
    cout << "String after removing adjacent duplicates : " << removeDuplicates(s);
}