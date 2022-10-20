#include <iostream>
#include <string>
using namespace std;

int getStringLength(string s)
{
    int stringLength;
    for (int i = 0; s[i] != '\0'; i++)
    {
        stringLength++;
    }
    return stringLength;
}

bool checkPalinedrome(string s, int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        if (((s[start] >= 97 && s[start] <= 122) || (s[start] >= 48 && s[start] <= 57)) && ((s[end] >= 97 && s[end] <= 122) || (s[end] >= 48 && s[end] <= 57)))
        {
            if (s[start] == s[end])
            {
                start++;
                end--;
            }
            else
            {
                return false;
            }
        }
        else
        {
            if (!(s[start] >= 97 && s[start] <= 122) && !(s[start] >= 48 && s[start] <= 57))
            {
                start++;
            }
            if (!(s[end] >= 97 && s[end] <= 122) && !(s[end] >= 48 && s[end] <= 57))
            {
                end--;
            }
        }
    }
    return true;
}

int main()
{
    string s;
    cout << "enter a string : ";
    // cin.getline(s, 100); only used for char array
    getline(cin, s);

    // for (int i = 0; s[i] != '\0'; i++)
    // {
    //     if ((s[i] >= 97 && s[i] <= 122) || (s[i] >= 65 && s[i] <= 90) || (s[i] >= 48 && s[i] <= 57))
    //     {
    //         reorderedString[k] = s[i];
    //         k++;
    //     }
    // }

    // cout << reorderedString<<endl;       

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] += 32;
        }
    }

    // cout << reorderedString;               

    // if (checkPalinedrome(s, getStringLength(s)))
    if (checkPalinedrome(s, s.length()))
    {
        cout << "The string is a palindrome";
    }
    else
    {
        cout << "The string is not a palindrome";
    }
    return 0;
}

// lec 22
// check palindrome codingNinjas
// valid palindrome leetcode