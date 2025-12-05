#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name;
    
    cout << "Enter a string: ";
    getline(cin, name); // Taking string input from user

    string copy = name; // Copying string to another variable

    cout << "The copied string is: " << copy << endl; // Display copied string

    return 0;
}
