#include<iostream>
using namespace std;

// Base class
class Person {
public:
    // Parent version of show()
    void show() {
        cout << "This is Person" << endl;
    }
};

// Derived class
class Student : public Person {
public:
    // Overriding show() of parent class
    void show() {
        cout << "This is Student" << endl;
    }
};

int main() {
    Student s1;  // Child object created

    s1.show();   // Calls overridden function in Student class
    
    cin.ignore();
    cin.get(); // Pause screen
    return 0;
}
