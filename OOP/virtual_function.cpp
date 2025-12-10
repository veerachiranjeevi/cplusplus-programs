#include<iostream>
using namespace std;

// Base class
class Person {
public:
    // Virtual function -> Late binding / Runtime polymorphism
    virtual void show() {
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
    Person *ptr;   // Base class pointer
    Student obj;

    ptr = &obj;    // Pointer pointing to child object

    // Because show() is virtual -> Student's show() will run
    ptr->show();   

    cin.ignore();
    cin.get(); // Pause screen
    return 0;
}
