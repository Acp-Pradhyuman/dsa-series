#include <iostream>
using namespace std;

void replaceSpaces(char s[])
{
    int spaceCount = 0;
    int phrase = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
        {
            spaceCount++;
        }
        else
        {
            phrase++;
        }
    }

    int trailingSpace = phrase + spaceCount - 1;
    while (s[trailingSpace] == ' ')
    {
        spaceCount--;
        trailingSpace--;
    }

    int finalLength = phrase + spaceCount * 3;
    int index = finalLength;
    s[index--] = '\0';

    for (int j = (phrase + spaceCount - 1); j >= 0; j--)
    {
        if (s[j] == ' ')
        {
            s[index] = '0';
            s[index - 1] = '2';
            s[index - 2] = '%';
            index = index - 3;
        }
        else
        {
            s[index] = s[j];
            index--;
        }
    }
}

int main()
{
    char str[100];
    cout << "enter a string : ";
    cin.getline(str, 100);
    replaceSpaces(str);
    cout << "URLify a given string (Replace spaces with %20) : " << str;
}