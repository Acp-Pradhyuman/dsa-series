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
    return true;
}

int main()
{
    string s;
    cout << "enter a string : ";
    // cin.getline(s, 100); only used for char array
    getline(cin, s);
    char reorderedString[100];
    int k = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 97 && s[i] <= 122) || (s[i] >= 65 && s[i] <= 90) || (s[i] >= 48 && s[i] <= 57))
        {
            reorderedString[k] = s[i];
            k++;
        }
    }
    reorderedString[k] = '\0';

    // cout << reorderedString<<endl;       

    for (int i = 0; reorderedString[i] != '\0'; i++)
    {
        if (reorderedString[i] >= 65 && reorderedString[i] <= 90)
        {
            reorderedString[i] += 32;
        }
    }

    // cout << reorderedString;               

    if (checkPalinedrome(reorderedString, getStringLength(reorderedString)))
    {
        cout << "The string is a palindrome";
    }
    else
    {
        cout << "The string is not a palindrome";
    }
    return 0;
}