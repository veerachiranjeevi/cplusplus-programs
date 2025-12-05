#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name;

    cout << "Enter your full name: " << endl;
    getline(cin, name); // Input full name including spaces

    cout << "Hello " << name << endl;      // Displaying the input name


    return 0;
}
