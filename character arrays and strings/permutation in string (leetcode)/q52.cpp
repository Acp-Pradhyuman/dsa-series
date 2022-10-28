#include <iostream>
using namespace std;

bool checkEqual(int arr1[], int arr2[])
{
    for (int i = 0; i < 26; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return false;
        }
    }

    return true;
}

bool checkInclusion(string s1, string s2)
{
    int count1[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        count1[s1[i] - 97]++;
    }

    int i = 0;
    int windowSize = s1.length();
    int count2[26] = {0};

    while (i < windowSize && i < s2.length())
    {
        count2[s2[i] - 97]++;
        i++;
    }

    if (checkEqual(count1, count2))
    {
        return true;
    }

    while (i < s2.length())
    {
        count2[s2[i] - 97]++;
        count2[s2[i - windowSize] - 97]--;
        if (checkEqual(count1, count2))
        {
            return true;
        }
        i++;
    }

    return false;
}

int main()
{
    string s1, s2;
    cout << "enter the subtring to be searched : ";
    cin >> s1;
    cout << "enter the string : ";
    cin >> s2;

    if (checkInclusion(s1, s2))
    {
        cout << "A combination of the substring is available in the given string";
    }
    else
    {
        cout << "Substring not found!";
    }
}