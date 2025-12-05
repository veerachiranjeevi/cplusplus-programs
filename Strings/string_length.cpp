#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name;
    int count;

    cout << "Enter your name: ";
    getline(cin, name);

    count = name.length();

    cout << "Length of the string is: " << count << endl;

    return 0;
}
