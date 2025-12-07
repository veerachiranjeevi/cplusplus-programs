#include<iostream>
#include<string>
using namespace std;

// Structure for marks
struct Marks {
    int math, phys, chem;
};

// Structure for student with nested struct
struct Student {
    string name;
    int roll;
    Marks m;
    int total;
    float percent;
    char grade;
};

int main() {
    Student s;

    cout << "Enter student name: ";
    getline(cin, s.name);

    cout << "Enter roll number: ";
    cin >> s.roll;

    cout << "Enter marks (Math, Physics, Chemistry): ";
    cin >> s.m.math >> s.m.phys >> s.m.chem;

    // Calculations
    s.total = s.m.math + s.m.phys + s.m.chem;
    s.percent = s.total / 3.0;

    // Grade decision
    if (s.percent >= 90)
        s.grade = 'A';
    else if (s.percent >= 75)
        s.grade = 'B';
    else if (s.percent >= 60)
        s.grade = 'C';
    else if (s.percent >= 50)
        s.grade = 'D';
    else
        s.grade = 'F';

    // Display Report
    cout << "\n------ Student Result Report ------\n";
    cout << "Name       : " << s.name << endl;
    cout << "Roll       : " << s.roll << endl;
    cout << "Math       : " << s.m.math << endl;
    cout << "Physics    : " << s.m.phys << endl;
    cout << "Chemistry  : " << s.m.chem << endl;
    cout << "Total      : " << s.total << endl;
    cout << "Percentage : " << s.percent << "%" << endl;
    cout << "Grade      : " << s.grade << endl;
    cout << "-----------------------------------\n";

    return 0;
}
