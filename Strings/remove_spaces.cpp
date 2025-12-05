#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name, result;

    cout << "Enter the string: ";
    getline(cin, name); // Taking input including spaces

    // Removing spaces from the string
    for(int i = 0; i < name.length(); i++)
    {
        if(name[i] != ' ') // Check if not a space
        {
            result += name[i]; // Add to result string
        }
    }

    // Display string without spaces
    cout << "String without spaces: " << result << endl;

    return 0;
}
