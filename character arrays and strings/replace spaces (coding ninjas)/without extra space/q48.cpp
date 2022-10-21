#include <iostream>
#include <string>
using namespace std;

void replaceSpaces(string &str)
{
    // string temp = "";
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ')
        {
            // temp.push_back('@');
            // temp.push_back('4');
            // temp.push_back('0');
            str.replace(i, 1, "@40");
        }
        // else
        // {
        //     temp.push_back(str[i]);
        // }
    }
    // return temp;
}

int main()
{
    string s;
    cout << "enter a string : ";
    getline(cin, s);

    // cout << "spaces replaced with @40 : " << replaceSpaces(s);
    replaceSpaces(s);
    cout << "spaces replaced with @40 : " << s;
}