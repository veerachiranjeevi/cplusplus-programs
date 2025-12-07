#include<iostream>
#include<string>
using namespace std;

struct Student {
    string name;
    string branch;
    int roll;
    float cgpa;
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[n]; // Array of structures

    for(int i = 0; i < n; i++) {
        cout << "\nEnter details of student " << i + 1 << endl;

        cin.ignore(); // Clear buffer before getline
        cout << "Enter Name: ";
        getline(cin, s[i].name);

        cout << "Enter Branch: ";
        getline(cin, s[i].branch);

        cout << "Enter Roll: ";
        cin >> s[i].roll;

        cout << "Enter CGPA: ";
        cin >> s[i].cgpa;
    }

    cout << "\n--- Displaying Student Details ---\n";
    for(int i = 0; i < n; i++) {
        cout << i + 1 << ") "
             << s[i].name << " | "
             << s[i].branch << " | "
             << "Roll: " << s[i].roll << " | "
             << "CGPA: " << s[i].cgpa << endl;
    }

    return 0;
}
