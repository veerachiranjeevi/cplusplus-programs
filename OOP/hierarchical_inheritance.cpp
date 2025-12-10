#include<iostream>
#include<string>
using namespace std;

// Base class Person
class Person {
public:
    string name;

    // Input name
    void inputP() {
        cout << "Enter name: ";
        getline(cin, name);
    }

    // Display name
    void displayP() {
        cout << "Name: " << name << endl;
    }
};

// Derived class Student inheriting Person
class Student : public Person {
public:
    int roll;

    // Input roll number
    void inputR() {
        cout << "Enter roll: ";
        cin >> roll;
        cin.ignore(); // Clear buffer for next getline()
    }

    // Display roll
    void displayR() {
        cout << "Roll: " << roll << endl;
    }
};

// Derived class Teacher inheriting Person
class Teacher : public Person {
public:
    string subject;

    // Input subject
    void inputS() {
        cout << "Enter Subject: ";
        getline(cin, subject);
    }

    // Display subject
    void displayS() {
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Student s1;
    Teacher t1;

    cout << "--- Enter Student Details ---" << endl;
    s1.inputP();
    s1.inputR();

    cout << "\n--- Enter Teacher Details ---" << endl;
    t1.inputP();
    t1.inputS();

    cout << "\n==== Displaying Details ====" << endl;

    cout << "\n---- Student Details ----" << endl;
    s1.displayP();
    s1.displayR();

    cout << "\n---- Teacher Details ----" << endl;
    t1.displayP();
    t1.displayS();

    cin.get(); // Pause screen
    return 0;
}
