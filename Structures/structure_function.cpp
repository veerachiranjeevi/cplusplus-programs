#include<iostream>
#include<string>
using namespace std;

struct Student {
    string name;
    int roll;
};

// Function receives entire structure
void disp(Student s) {
    cout << "\n--- Student Details ---" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll: " << s.roll << endl;
}

int main() {
    Student s;

    cout << "Enter your name: ";
    cin.ignore(); // To fix getline skip issue
    getline(cin, s.name);

    cout << "Enter roll: ";
    cin >> s.roll;

    disp(s); // Passing structure to function

    return 0;
}
