#include <iostream>
using namespace std;

void removeOccurences(string &s, string &part)
{
    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    // return s;
}

int main()
{
    string s, part;
    cout << "enter the string : ";
    cin >> s;
    cout << "enter the part : ";
    cin >> part;

    removeOccurences(s, part);
    cout << "The result of removing all the parts form the string : " << s;
}