#include<iostream>
#include<string>
using namespace std;

// Structure for marks
struct Marks {
    int math;
    int physics;
    int chemistry;
};

// Student structure that contains Marks structure
struct Student {
    string name;
    int roll;
    Marks m; // Nested structure object
};

int main() {
    Student s;

    cout << "Enter your name: ";
    getline(cin, s.name);

    cout << "Enter roll: ";
    cin >> s.roll;

    cout << "Enter Maths marks: ";
    cin >> s.m.math;

    cout << "Enter Physics marks: ";
    cin >> s.m.physics;

    cout << "Enter Chemistry marks: ";
    cin >> s.m.chemistry;

    cout << "\n--- Student Mark Details ---\n";
    cout << "Name: " << s.name << endl;
    cout << "Roll: " << s.roll << endl;
    cout << "Math: " << s.m.math << endl;
    cout << "Physics: " << s.m.physics << endl;
    cout << "Chemistry: " << s.m.chemistry << endl;

    return 0;
}
