#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
    string name;
    int i, count = 0;  // initialize count to 0

    cout << "Enter a name: ";
    getline(cin, name);

    for(i = 0; i < name.length(); i++)
    {
        char ch = tolower(name[i]); // convert to lowercase
        
        // checking vowels
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            count++;       // Count vowels
        }
    }

    cout << "Number of vowels: " << count << endl;

    return 0;
}
