#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
    int n, x, element;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter " << n << " elements\n";
    for(int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    cout << "Enter element to search: ";
    cin >> element;

    bool found = false;

    for(int i = 0; i < v.size(); i++) {
        if(v[i] == element) {
            cout << "Found at index " << i << endl;
            found = true;
        }
    }

    if(!found) {
        cout << "Element not found";
    }

    return 0;
}
