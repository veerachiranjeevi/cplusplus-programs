#include<iostream>
#include<string>
#include<fstream>
using namespace std;

// Student class (same structure as Step-1)
class Student {
private:
    string name;
    int roll;
    int marks;

public:
    // Input student details
    void inputStudent() {
        cin.ignore(); // Clear input buffer
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Roll No: ";
        cin >> roll;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    // Function to write student data into file
    void saveToFile() {
        ofstream file("student.txt", ios::app); // Append mode
        if (!file) {
            cout << "Error opening file!" << endl;
            return;
        }

        // Writing data in one line for easy search/update/delete
        file << name << " " << roll << " " << marks << endl;
        file.close();

        cout << "Student Record Added Successfully!" << endl;
    }
};

int main() {
    Student s;
    s.inputStudent();
    s.saveToFile();

    cin.ignore();
    cin.get();
    return 0;
}
