#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name;
    int i, j = 0;
    bool flag = true;

    cout << "Enter any name: ";
    getline(cin, name);     // Taking input string from user

    i = name.length() - 1;     // Initializing two pointers: one at start and one at end

    while (i > j)
    {
        if (name[i] != name[j]) {    // Checking characters from both ends
            flag = false;     // If mismatch found, string is not palindrome
            break;
        }
        j++;
        i--;
    }

    if (flag)       // Display result
        cout << name << " is a palindrome" << endl;
    else
        cout << name << " is not a palindrome" << endl;

    return 0;
}










