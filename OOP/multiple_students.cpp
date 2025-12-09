#include<iostream>
#include<string>
using namespace std;

class Student {
public:
    string name;
    int roll;

    void input() {
        cout << "Enter student name: ";
        getline(cin, name);

        cout << "Enter roll number: ";
        cin >> roll;
        cin.ignore(); // to handle newline for next getline
    }

    void display() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name : " << name << endl;
        cout << "Roll : " << roll << endl;
    }
};

int main() {
    Student s1, s2;

    cout << "\nEnter details for Student 1:\n";
    s1.input();

    cout << "\nEnter details for Student 2:\n";
    s2.input();

    cout << "\nDisplaying Details:\n";
    s1.display();
    s2.display();

    return 0;
}
