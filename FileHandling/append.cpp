#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
    string name;
    int roll;

    ofstream file;
    file.open("student.txt", ios::app);  // Append mode

    if(!file){
        cout << "File not found!" << endl;
        return 0;
    }

    cin.ignore(); // to clear buffer before getline

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter roll: ";
    cin >> roll;

    file << "Name: " << name << endl;
    file << "Roll: " << roll << endl;
    file << "-------------------" << endl;

    file.close();

    cout << "Data appended successfully!" << endl;
    
    return 0;
}
