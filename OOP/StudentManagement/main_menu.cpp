#include<iostream>
#include<string>
#include<fstream>
using namespace std;

// Student class with all features
class Student {
private:
    string name, newName;
    int roll, marks;
    int searchRoll, newMarks;
    bool found;

public:

    // Function to add student details to file
    void addStudent() {
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Roll No: ";
        cin >> roll;

        cout << "Enter Marks: ";
        cin >> marks;

        ofstream fout("student.txt", ios::app);
        fout << name << " " << roll << " " << marks << endl;
        fout.close();

        cout << "Student Added Successfully!\n";
    }

    // Function to view all students
    void viewStudents() {
        ifstream fin("student.txt");
        if (!fin) {
            cout << "File not found!\n";
            return;
        }

        cout << "\n--- Student Records ---\n";
        found = false;
        while (fin >> name >> roll >> marks) {
            found = true;
            cout << "Name : " << name << endl;
            cout << "Roll : " << roll << endl;
            cout << "Marks: " << marks << endl;
            cout << "----------------------\n";
        }

        if (!found)
            cout << "No Records Found!\n";

        fin.close();
    }

    // Function to search a student
    void searchStudent() {
        cout << "Enter Roll Number to Search: ";
        cin >> searchRoll;

        ifstream fin("student.txt");
        found = false;

        while (fin >> name >> roll >> marks) {
            if (roll == searchRoll) {
                found = true;
                cout << "\nRecord Found!\n";
                cout << "Name : " << name << endl;
                cout << "Roll : " << roll << endl;
                cout << "Marks: " << marks << endl;
                break;
            }
        }

        if (!found)
            cout << "Record Not Found!\n";

        fin.close();
    }

    // Function to update a student record
    void updateStudent() {
        cout << "Enter Roll Number to Update: ";
        cin >> searchRoll;

        ifstream fin("student.txt");
        ofstream fout("temp.txt");
        found = false;

        while (fin >> name >> roll >> marks) {
            if (roll == searchRoll) {
                found = true;
                cin.ignore();
                cout << "Enter New Name: ";
                getline(cin, newName);

                cout << "Enter New Marks: ";
                cin >> newMarks;

                fout << newName << " " << roll << " " << newMarks << endl;
            } else {
                fout << name << " " << roll << " " << marks << endl;
            }
        }
        fin.close();
        fout.close();

        if (found) {
            remove("student.txt");
            rename("temp.txt", "student.txt");
            cout << "Record Updated Successfully!\n";
        } else {
            remove("temp.txt");
            cout << "Record Not Found!\n";
        }
    }

    // Function to delete a student record
    void deleteStudent() {
        cout << "Enter Roll Number to Delete: ";
        cin >> searchRoll;

        ifstream fin("student.txt");
        ofstream fout("temp.txt");
        found = false;

        while (fin >> name >> roll >> marks) {
            if (roll == searchRoll) {
                found = true;
                continue;
            }
            fout << name << " " << roll << " " << marks << endl;
        }
        fin.close();
        fout.close();

        if (found) {
            remove("student.txt");
            rename("temp.txt", "student.txt");
            cout << "Record Deleted Successfully!\n";
        } else {
            remove("temp.txt");
            cout << "Record Not Found!\n";
        }
    }
};

int main() {
    Student s;
    int choice;

    while (true) {
        cout << "\n======== Student Management System ========\n";
        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: s.addStudent(); break;
            case 2: s.viewStudents(); break;
            case 3: s.searchStudent(); break;
            case 4: s.updateStudent(); break;
            case 5: s.deleteStudent(); break;
            case 6: 
                cout << "Thank you! Exiting...\n";
                return 0;

            default:
                cout << "Invalid Choice! Try Again.\n";
        }
    }

    return 0;
}
