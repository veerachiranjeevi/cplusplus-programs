#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
    string name;
    int roll;

    ofstream file;
    file.open("student.txt");

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter roll: ";
    cin >> roll;

    file << "Name: " << name << endl;
    file << "Roll: " << roll << endl;

    file.close();

    cout << "Data saved successfully!" << endl;
    return 0;
}
