#include<iostream>
#include<string>
using namespace std;

class Student {
public:
    string name;
    int roll;

    // Default constructor
    Student() {
        name = "Unknown";
        roll = 0;
    }

    // Parameterized constructor
    Student(string n, int r) {
        name = n;
        roll = r;
    }

    void display() {
        cout << "Name : " << name << endl;
        cout << "Roll : " << roll << endl;
        cout << endl;
    }
};

int main() {
    Student s1;                  // default constructor
    Student s2("Chiru", 123);    // parameterized
    Student s3("Raju", 45);      // parameterized

    cout << "--- Student 1 ---" << endl;
    s1.display();

    cout << "--- Student 2 ---" << endl;
    s2.display();

    cout << "--- Student 3 ---" << endl;
    s3.display();

    return 0;
}
