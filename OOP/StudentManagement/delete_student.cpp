#include<iostream>
#include<string>
#include<fstream>
using namespace std;

// Student class to handle delete operation
class Student {
private:
    string name;
    int roll, marks;
    int searchRoll;
    bool found = false;

public:
    // Ask roll number to delete
    void inputDelete() {
        cout << "Enter Roll Number to Delete: ";
        cin >> searchRoll;
    }

    // Delete student record using temp file
    void deleteStudent() {
        ifstream fin("student.txt");
        ofstream fout("temp.txt");

        if (!fin) {
            cout << "File not found!" << endl;
            return;
        }

        // Read all records and write except the one to delete
        while (fin >> name >> roll >> marks) {
            if (roll == searchRoll) {
                found = true;
                continue;  // Skip writing the record to be deleted
            }
            fout << name << " " << roll << " " << marks << endl;
        }

        fin.close();
        fout.close();

        if (found) {
            remove("student.txt");
            rename("temp.txt", "student.txt");
            cout << "\nRecord Deleted Successfully!" << endl;
        } 
        else {
            remove("temp.txt");
            cout << "\nRecord Not Found!" << endl;
        }
    }
};

int main() {
    Student s;
    s.inputDelete();
    s.deleteStudent();

    cin.ignore();
    cin.get();
    return 0;
}
