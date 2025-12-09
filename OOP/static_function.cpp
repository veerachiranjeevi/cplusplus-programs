#include<iostream>
using namespace std;

class Student {
public:
    // Static data member - shared among all objects
    static int count;

    // Constructor
    // Runs automatically when object is created
    Student() {
        cout << "Object created" << endl;
        count++; // Increment count for each new object
    }

    // Static member function
    // Can access only static members
    static void showCount() {
        cout << "\nTotal Students: " << count << endl;
    }
};

// Definition of static variable outside class
int Student::count = 0;

int main() {
    // Creating objects
    Student s1;
    Student s2;
    Student s3;

    // Calling static function using class name
    Student::showCount();

    return 0;
}
