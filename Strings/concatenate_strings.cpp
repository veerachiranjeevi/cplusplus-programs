#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1, str2;

    cout << "Enter the first string: ";
    getline(cin, str1); // Taking first string input

    cout << "Enter the second string: ";
    getline(cin, str2); // Taking second string input

    // Concatenation and display
    cout << "With space: " << str1 + " " + str2 << endl;
    cout << "Without space: " << str1 + str2 << endl;

    return 0;
}
