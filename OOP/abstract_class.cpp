#include<iostream>
using namespace std;

// Abstract Class
class Person {
public:
    // Pure Virtual Function (no definition here)
    virtual void show() = 0;  // Must be overridden in child class
};

// Derived Class
class Student : public Person {
public:
    // Implementation of pure virtual function
    void show() {
        cout << "This is Student" << endl;
    }
};

int main() {
    // Person p; ❌ Not allowed (cannot create object of abstract class)

    Student s;  // ✔ Allowed
    s.show();   // Calls overridden function

    cin.get();  // Pause screen
    return 0;
}
