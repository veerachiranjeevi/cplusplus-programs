#include<iostream>
#include<string>
#include<fstream>
using namespace std;

// Student class to handle update operation
class Student {
private:
    string name, newName;
    int roll, marks;
    int searchRoll, newMarks;
    bool found = false;

public:
    // Ask which record to update
    void inputUpdate() {
        cout << "Enter Roll Number to Update: ";
        cin >> searchRoll;
    }

    // Update logic with temp file method
    void updateStudent() {
        ifstream fin("student.txt");
        ofstream fout("temp.txt");

        if (!fin) {
            cout << "File not found!" << endl;
            return;
        }

        while (fin >> name >> roll >> marks) {
            if (roll == searchRoll) {
                found = true;

                // Ask new details only when record found
                cin.ignore();
                cout << "Enter New Name: ";
                getline(cin, newName);

                cout << "Enter New Marks: ";
                cin >> newMarks;

                // Write updated record
                fout << newName << " " << roll << " " << newMarks << endl;
            }
            else {
                // Write original record
                fout << name << " " << roll << " " << marks << endl;
            }
        }

        fin.close();
        fout.close();

        if (found) {
            remove("student.txt"); // Remove old file
            rename("temp.txt", "student.txt"); // Rename temp as original
            cout << "\nRecord Updated Successfully!" << endl;
        } else {
            remove("temp.txt"); // Delete temp if no update done
            cout << "\nRecord Not Found!" << endl;
        }
    }
};

int main() {
    Student s;
    s.inputUpdate();
    s.updateStudent();

    cin.ignore();
    cin.get();
    return 0;
}
