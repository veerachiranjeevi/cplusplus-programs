#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name;
    int freq[256] = {0}; // Frequency array for all ASCII characters

    cout << "Enter a string: ";
    getline(cin, name); // Taking input including spaces

    // Counting frequency of characters
    for(int i = 0; i < name.length(); i++)
    {
        freq[(unsigned char)name[i]]++;
    }

    cout << "Character Frequency:\n";

    // Displaying characters and their frequency
    for(int i = 0; i < 256; i++)
    {
        if(freq[i] > 0 && i != 32) // Ignoring space (ASCII 32)
        {
            cout << char(i) << " --> " << freq[i] << endl;
        }
    }

    return 0;
}
