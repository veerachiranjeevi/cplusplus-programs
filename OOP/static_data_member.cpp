#include<iostream>
#include<string>
using namespace std;

class Student {
public:
    static int count;

    Student() {
        cout << "Object created" << endl;
        count++;
    }
};

int Student::count = 0;

int main() {
    Student s1;
    Student s2;
    Student s3;

    cout << "\nTotal Students: " << Student::count << endl;
    
    return 0;
}
