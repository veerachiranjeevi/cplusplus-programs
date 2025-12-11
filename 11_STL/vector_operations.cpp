#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3}; // initial vector
    int x;

    // Adding an element
    cout << "Enter element to add: ";
    cin >> x;
    v.push_back(x);

    // Display vector
    cout << "Vector after push_back: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Removing last element
    cout << "Removing last element..." << endl;
    v.pop_back();

    cout << "Vector after pop_back: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Insert at index 2
    cout << "Enter element to insert at index 2: ";
    cin >> x;
    v.insert(v.begin() + 2, x);

    cout << "Vector after insert: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Erase element at index 1
    cout << "Erasing element at index 1..." << endl;
    v.erase(v.begin() + 1);

    cout << "Vector after erase: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
