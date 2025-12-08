#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
    ifstream file("student.txt"); 

    if(!file){ // Check if file opens
        cout << "File not found!" << endl;
        return 0;
    }

    string searchName, name;
    int roll;

    cout << "Enter name to search: ";
    cin >> searchName;

    bool found = false;

    while(file >> name >> roll) {
        if(name == searchName) {
            found = true;
            cout << "Record Found!" << endl;
            cout << "Name : " << name << endl;
            cout << "Roll : " << roll << endl;
            break;
        }
    }

    if(!found) {
        cout << searchName << " not found!" << endl;
    }

    cin.ignore();
    cin.get();
    return 0;
}
