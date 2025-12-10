#include<iostream>
#include<string>
#include<fstream>
using namespace std;

// Student class to handle search operation
class Student {
private:
    int searchRoll;
    string name;
    int roll;
    int marks;
    bool found;

public:
    // Input roll number to search
    void input() {
        cout << "Enter Roll Number to Search: ";
        cin >> searchRoll;
    }

    // Search and display matched record
    void searchStudent() {
        ifstream file("student.txt");
        if (!file) {
            cout << "Error! File not found." << endl;
            return;
        }

        found = false;

        // Read each record
        while (file >> name >> roll >> marks) {

            // If record found
            if (roll == searchRoll) {
                found = true;
                cout << "\nRecord Found!" << endl;
                cout << "Name : " << name << endl;
                cout << "Roll : " << roll << endl;
                cout << "Marks: " << marks << endl;
                break;
            }
        }

        if (!found) {
            cout << "\nRecord Not Found!" << endl;
        }

        file.close();
    }
};

int main() {
    Student s1;
    s1.input();
    s1.searchStudent();

    cin.ignore();
    cin.get(); // Pause screen
    return 0;
}
