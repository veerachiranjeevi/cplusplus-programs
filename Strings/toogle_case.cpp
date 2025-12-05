#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
    string name;
    cout << "Enter any name: ";
    getline(cin, name); // Taking string input including spaces

    for(int i = 0; i < name.length(); i++)
    {
        if(islower(name[i])) // If character is lowercase
            name[i] = toupper(name[i]); // Convert to uppercase
        else if(isupper(name[i])) // If character is uppercase
            name[i] = tolower(name[i]); // Convert to lowercase
    }

    cout << "After case toggle: " << name << endl; // Display final output

    return 0;
}
