#include<iostream>
#include<map>
#include<string>
using namespace std;

int main() {
    map<int, string> m;
    int roll, n, key;
    string name;

    cout << "How many values: ";
    cin >> n;

    for(int i = 0; i < n; i++) {

        cout << "Enter the roll: ";
        cin >> roll;

        cout << "Enter the Name: ";
        cin.ignore();              // FIXED
        getline(cin, name);        // FIXED

        m.insert({roll, name});    // FIXED
    }

    cout << "\nCurrent map:\n";
    for(auto p : m)
        cout << p.first << " " << p.second << endl;

    cout << "\nEnter the key to erase: ";
    cin >> key;

    m.erase(key);                // FIXED erase

    cout << "\nAfter update:\n";
    for(auto p : m)
        cout << p.first << " " << p.second << endl;

    cout << "\nEnter the key to search: ";
    cin >> key;

    if(m.count(key)) {           // FIXED
        cout << key << " is present. Value = " << m[key];
    } else {
        cout << key << " is not present";
    }

    return 0;
}
