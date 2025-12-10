#include<iostream>
#include<string>
using namespace std;

// Base class (Grandparent)
class Person {
public:
    string name;

    // Input name from user
    void input() {
        cout << "Enter name: ";
        getline(cin, name);
    }

    // Display name
    void displayP() {
        cout << "Name: " << name << endl;
    }
};

// Derived class (Parent) inherits Person
class Student : public Person {
public:
    int roll;

    // Input roll number
    void inputS() {
        cout << "Enter roll: ";
        cin >> roll;
        cin.ignore(); // Clear input buffer before reading next string
    }

    // Display roll
    void displayS() {
        cout << "Roll: " << roll << endl;
    }
};

// Derived class (Child) inherits Student
class Marks : public Student {
public:
    int marks;

    // Input marks
    void inputM() {
        cout << "Enter Marks: ";
        cin >> marks;
    }

    // Display marks
    void displayM() {
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Marks s1; // Child object can access all parent functions

    s1.input();   // Person class function
    s1.inputS();  // Student class function
    s1.inputM();  // Marks class function

    cout << "\n--- Student Details ---\n";
    s1.displayP();  
    s1.displayS();
    s1.displayM();

    cin.ignore();
    cin.get(); // Pause screen
    return 0;
}
