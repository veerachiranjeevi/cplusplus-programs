#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int,int> m;
    int roll, marks, n;

    cout << "How many values: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Enter roll: ";
        cin >> roll;
        cout << "Enter marks: ";
        cin >> marks;

        m.insert({roll, marks});   // FIXED
    }

    cout << "\nAll data in map (sorted by roll):\n";
    for(auto p : m)
        cout << p.first << " " << p.second << endl;

    int key;
    cout << "\nEnter roll number to search: ";
    cin >> key;

    if(m.find(key) != m.end())
        cout << "Marks of roll " << key << " = " << m[key];
    else
        cout << "Roll not found";

    return 0;
}
