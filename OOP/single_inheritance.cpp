#include<iostream>
#include<string>
using namespace std;

class Person {
public:
    string name;

    void input() {
        cout << "Enter name: ";
        getline(cin, name);
    }

    void displayP() {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person {
public:
    int roll;

    void inputS() {
        cout << "Enter roll: ";
        cin >> roll;
    }

    void displayS() {
        cout << "Roll: " << roll << endl;
    }
};

int main() {
    Student s1;

    // Input from parent class method
    s1.input();

    // Input from child class method
    s1.inputS();

    // Display from parent class
    s1.displayP();

    // Display from child class
    s1.displayS();

    cin.ignore();
    cin.get();
    return 0;
}
