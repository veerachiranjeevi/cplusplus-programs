#include<iostream>
#include<string>
using namespace std;

class Student {
private:
    string name;
    int roll;

public:
    // Parameterized constructor
    Student(string n, int r) {
        name = n;
        roll = r;
    }

    // Copy constructor
    Student(const Student &obj) {
        name = obj.name;
        roll = obj.roll;
    }

    // Display function
    void display() {
        cout << "Name : " << name << endl;
        cout << "Roll : " << roll << endl;
        cout << endl;
    }
};

int main() {
    Student s1("Chiru", 28);  // Original object
    Student s2(s1);           // Copy constructor called

    cout << "--- Original Student ---" << endl;
    s1.display();

    cout << "--- Copied Student ---" << endl;
    s2.display();

    return 0;
}
