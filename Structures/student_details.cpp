#include<iostream>
#include<string>
using namespace std;

struct Student {
    string name;
    string branch;
    int roll;
    float cgpa;
}; // Structure must end with semicolon

int main() {
    Student s;

    cout << "Enter your name: ";
    cin.ignore(); // Clear input buffer before getline
    getline(cin, s.name);

    cout << "Enter branch: ";
    getline(cin, s.branch);

    cout << "Enter roll: ";
    cin >> s.roll;

    cout << "Enter CGPA: ";
    cin >> s.cgpa;

    cout << "\n--- Student Details ---\n";
    cout << "Name: " << s.name << endl;
    cout << "Branch: " << s.branch << endl;
    cout << "Roll: " << s.roll << endl;
    cout << "CGPA: " << s.cgpa << endl;

    return 0;
}
