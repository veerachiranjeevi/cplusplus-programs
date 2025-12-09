#include<iostream>
using namespace std;

class Student {
public:
    Student() {
        cout << "Constructor Called" << endl;
    }

    ~Student() {
        cout << "Destructor Called" << endl;
    }
};

int main() {
    cout << "--- Creating Objects ---" << endl;
    Student s1;
    Student s2;

    cout << "--- End of main ---" << endl;

    return 0;
}
