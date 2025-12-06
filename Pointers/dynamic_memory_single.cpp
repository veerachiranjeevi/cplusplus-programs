#include<iostream>
using namespace std;

int main() {
    int *p = new int; // Dynamic memory allocation in heap

    cout << "Enter a number: ";
    cin >> *p; // Storing value in allocated memory

    cout << "Value stored in memory: " << *p << endl;
    cout << "Address stored in pointer: " << p << endl;

    delete p; // Freeing allocated memory
    p = nullptr; // Avoiding dangling pointer

    cout << "Memory deleted successfully!" << endl;

    return 0;
}
