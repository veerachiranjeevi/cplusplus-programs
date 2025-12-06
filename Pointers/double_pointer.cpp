#include<iostream>
using namespace std;

int main() {
    int a;
    int *p;
    int **pp;

    cout << "Enter a number: ";
    cin >> a; // input

    p = &a;   // p stores address of 'a'
    pp = &p;  // pp stores address of 'p'

    cout << "Value of a: " << a << endl;
    cout << "Value using pointer *p: " << *p << endl;
    cout << "Value using double pointer **pp: " << **pp << endl;

    cout << "Address of a (&a): " << &a << endl;
    cout << "Address stored in p: " << p << endl;
    cout << "Address stored in pp: " << pp << endl;
    cout << "Value stored in *pp (which is p): " << *pp << endl;

    return 0;
}
