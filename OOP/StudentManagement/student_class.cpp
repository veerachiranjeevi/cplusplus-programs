#include<iostream>
#include<string>
using namespace std;

// Student class to store basic student details
class Student {
private:
    string name;
    int roll;
    int marks;

public:
    // Function to input student data
    void inputStudent() {
        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Marks: ";
        cin >> marks;

        cin.ignore(); // Clear buffer for next getline
    }

    // Function to display student data
    void displayStudent() {
        cout << "Name : " << name << endl;
        cout << "Roll : " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.inputStudent();
    s.displayStudent();

    cin.get(); // Pause screen
    return 0;
}
