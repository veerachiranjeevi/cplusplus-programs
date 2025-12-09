#include<iostream>
#include<string>
using namespace std;

class Student {
public:
    string name;
    int roll;

    void display() {
        cout << "Name : " << name << endl;
        cout << "Roll : " << roll << endl;
    }
};

int main() {
    Student s1;

    cout << "Enter student name: ";
    getline(cin, s1.name);

    cout << "Enter roll number: ";
    cin >> s1.roll;

    s1.display();

    return 0;
}
