#include<iostream>
#include<string>
#include<fstream>
using namespace std;

// Student class to handle view operation
class Student {
private:
    string name;
    int roll;
    int marks;

public:
    // Function to read and display all records
    void viewStudents() {
        ifstream file("student.txt"); // Open file in read mode

        if (!file) {
            cout << "Error! File not found." << endl;
            return;
        }

        cout << "\n--- Student Records ---\n";

        bool found = false;

        // Read name, roll, marks line by line
        while (file >> name >> roll >> marks) {
            found = true;
            cout << "Name : " << name << endl;
            cout << "Roll : " << roll << endl;
            cout << "Marks: " << marks << endl;
            cout << "----------------------" << endl;
        }

        if (!found) {
            cout << "No Records Found!" << endl;
        }

        file.close();
    }
};

int main() {
    Student s1;
    s1.viewStudents();

    cin.ignore();
    cin.get(); // Pause screen
    return 0;
}
