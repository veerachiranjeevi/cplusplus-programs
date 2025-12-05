#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name;
    int count;    

    cout << "Enter your name: ";
    getline(cin, name);     // Taking string input

    count = name.length();   // Finding length of string

    cout << "Length of the string is: " << count << endl;    // Displaying length

    return 0;
}



