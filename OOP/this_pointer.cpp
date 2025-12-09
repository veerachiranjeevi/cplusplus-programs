#include<iostream>
#include<string>
using namespace std;

class Student {
public:
    string name;
    int roll;

    Student(string name, int roll) {
        this->name = name;
        this->roll = roll;
    }

    void display() {
        cout << "Name : " << name << endl;
        cout << "Roll : " << roll << endl;
        cout << endl;
    }
};

int main() {
    Student s1("Chiranjeevi", 28);
    Student s2("Basavaraj", 49);

    s1.display();
    s2.display();

    return 0;
}
