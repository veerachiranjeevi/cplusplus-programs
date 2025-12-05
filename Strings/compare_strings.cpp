#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1); // Taking first string

    cout << "Enter second string: ";
    getline(cin, str2); // Taking second string

    // Comparing two strings
    if(str1 == str2)
        cout << "Both strings are equal" << endl;
    else
        cout << "Both strings are not same" << endl;

    return 0;
}
