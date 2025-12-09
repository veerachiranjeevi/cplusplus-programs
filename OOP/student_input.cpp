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
    }

    void display() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name : " << name << endl;
        cout << "Roll : " << roll << endl;
    }
};

int main() {
    Student s1;
    s1.input();
    s1.display();

    return 0;
}
