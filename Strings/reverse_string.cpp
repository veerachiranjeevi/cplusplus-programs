#include<iostream>
#include<string>
using namespace std;

int main()
{
    string stri;
    cout << "Enter a string: ";
    getline(cin, stri);

    int i = 0;
    int j = stri.length() - 1;
    char temp;

    while(i < j)
    {
        temp = stri[i];
        stri[i] = stri[j];
        stri[j] = temp;
        
        i++;
        j--;
    }

    cout << "Reverse of string is: " << stri << endl;

    return 0;
}
