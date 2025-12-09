#include<iostream>
#include<string>
using namespace std;

class Student {
public:
    string name;
    int roll;

    void input() {
        cout << "\nEnter student name: ";
        getline(cin, name);

        cout << "Enter roll number: ";
        cin >> roll;
        cin.ignore(); // Prepare for next getline
    }

    void display() {
        cout << "Name : " << name << endl;
        cout << "Roll : " << roll << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    cin.ignore(); // before first getline

    Student s[n];

    for(int i = 0; i < n; i++) {
        cout << "\n--- Student " << i+1 << " ---" << endl;
        s[i].input();
    }

    cout << "\n===== Displaying Student Details =====\n";
    for(int i = 0; i < n; i++) {
        cout << "\nStudent " << i+1 << ":" << endl;
        s[i].display();
    }

    return 0;
}
