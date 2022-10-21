#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char ch1[100] = "name2";
    int len = strlen(ch1);
    cout << len << endl;

    char ch2[100] = "name1";
    cout << strcmp(ch1, ch2) << endl;

    char ch3[100];
    strcpy(ch3, ch2);
    cout << ch3 << endl;

    string s1 = "string";
    cout << s1.length() << endl;
    string s2;
    s2 = s1;
    cout << s2;
}