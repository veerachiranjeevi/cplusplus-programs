#include<iostream>
#include<string>
using namespace std;

struct Student {
    string name;
    int roll;
    int marks;
};

int main() {
    Student s; // Structure variable

    cout << "Enter Name: ";
    cin >> s.name;

    cout << "Enter Roll: ";
    cin >> s.roll;

    cout << "Enter Marks: ";
    cin >> s.marks;

    cout << "\n--- Student Details ---\n";
    cout << "Name: " << s.name << endl;
    cout << "Roll: " << s.roll << endl;
    cout << "Marks: " << s.marks << endl;

    return 0;
}

