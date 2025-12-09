#include<iostream>
#include<string>
using namespace std;

class Student {
public:
    string name;
    int roll;

    // Parameterized constructor
    Student(string n, int r) {
        name = n;
        roll = r;
    }

    void display() {
        cout << "Name : " << name << endl;
        cout << "Roll : " << roll << endl;
    }
};

int main() {
    Student s1("Chiru", 123);
    Student s2("Arjun", 56);

    s1.display();
    cout << endl;
    s2.display();

    return 0;
}
