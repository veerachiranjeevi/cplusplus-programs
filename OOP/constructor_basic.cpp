#include<iostream>
#include<string>
using namespace std;

class Student {
public:
    string name;
    int roll;

    // Default constructor giving initial values
    Student() {
        name = "Unknown";
        roll = 0;
    }

    void display() {
        cout << "Name : " << name << endl;
        cout << "Roll : " << roll << endl;
    }
};

int main() {
    Student s1; // constructor runs automatically
    s1.display();
    
    return 0;
}
