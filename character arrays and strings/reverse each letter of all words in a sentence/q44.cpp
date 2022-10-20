#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverseWords(vector<char> &s)
{
    int i = 0;
    // while (s[i] != '\0')
    while (i < s.size())
    {
        int start, end;
        if (s[i] != ' ')
        {
            start = i;
            int j = i + 1;
            end = start;
            while (s[j] != ' ' && s[j] != '\0')
            {
                end++;
                j++;
            }
            while (start < end)
            {
                swap(s[start], s[end]);
                start++;
                end--;
            }
            i = j + 1;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    // vector<char> phrase = {'M', 'y', ' ', 'n', 'a', 'm', 'e', ' ', 'i', 's', ' ', 'l', 'o', 'v', 'e'};
    vector<char> phrase = {'t', 'h', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 's', 'k', 'y', ' ', 'i', 's', ' ', 'b', 'l', 'u', 'e'};
    // vector<char> phrase = {'Z'};
    cout << phrase.size() << endl;
    reverseWords(phrase);
    for (int i = 0; i < phrase.size(); i++)
    {
        cout << phrase[i];
    }
}