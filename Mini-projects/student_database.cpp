#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void add_student() {
    ofstream file("student.txt", ios::app);

    if(!file){
        cout << "Error opening file!" << endl;
        return;
    }

    int n, roll;
    string name;

    cout << "How many students: ";
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++) {
        cout << "\nEnter Name: ";
        getline(cin, name);
        cout << "Enter Roll: ";
        cin >> roll;
        cin.ignore();

        file << name << " " << roll << endl;
    }

    cout << "\nData saved successfully!" << endl;
    file.close();
}

void view_students() {
    ifstream file("student.txt");

    if(!file){
        cout << "File not found!" << endl;
        return;
    }

    string name;
    int roll;

    cout << "\n----- Student Records -----\n";
    while(file >> name >> roll) {
        cout << "Name: " << name << "   Roll: " << roll << endl;
    }

    file.close();
}

void search_student() {
    ifstream file("student.txt");

    if(!file){
        cout << "File not found!" << endl;
        return;
    }

    string searchName, name;
    int roll;
    
    cout << "Enter name to search: ";
    cin >> searchName;

    bool found = false;

    while(file >> name >> roll) {
        if(name == searchName) {
            cout << "\nRecord Found!" << endl;
            cout << "Name : " << name << endl;
            cout << "Roll : " << roll << endl;
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "\nStudent not found!" << endl;
    }

    file.close();
}

int main() {
    int ch;
    
    while(true) {
        cout << "\n===== Student Database Menu =====" << endl;
        cout << "1. Add Students" << endl;
        cout << "2. View Students" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> ch;

        switch(ch) {
            case 1: add_student(); break;
            case 2: view_students(); break;
            case 3: search_student(); break;
            case 4: 
                cout << "Thank you! Exiting program..." << endl;
                return 0;
            default:
                cout << "Invalid choice!" << endl;
        }
    }
}
