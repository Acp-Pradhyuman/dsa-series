#include <iostream>
#include <string>
using namespace std;

char maxOccurrence(string s)
{
    int countAlphabet[36] = {0};
    int index = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            index = s[i] - 97;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            index = s[i] - 65;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            index = s[i] - '0' + 26;
        }
        countAlphabet[index]++;
    }

    int maxi = INT_MIN;
    int ans = -1;
    for (int i = 0; i < 36; i++)
    {
        if (maxi < countAlphabet[i])
        {
            ans = i;
            maxi = countAlphabet[i];
        }
    }

    if (ans < 26)
    {
        return (97 + ans);
    }
    else
    {
        return (48 + ans - 26);
    }
}

int main()
{
    string str;
    cout << "enter a string : ";
    cin >> str;
    cout << "Max occurence element is : " << maxOccurrence(str);
}