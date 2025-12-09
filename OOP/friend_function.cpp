#include<iostream>
#include<string>
using namespace std;

class Student {
private:
    string name;
    int roll;

public:
    // Constructor to initialize values
    Student(string n, int r) {
        name = n;
        roll = r;
    }

    // Friend function declaration
    friend void show(Student s);
};

// Friend function definition (outside class)
void show(Student s) {
    cout << "Name : " << s.name << endl;
    cout << "Roll : " << s.roll << endl;
}

int main() {
    // Object creation
    Student s1("Chiru", 28);
    Student s2("Raju", 45);

    // Calling friend function
    show(s1);
    show(s2);

    return 0;
}
