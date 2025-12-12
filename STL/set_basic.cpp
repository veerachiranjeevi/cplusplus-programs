#include<iostream>
#include<set>
using namespace std;

int main() {
    set<int> s;
    int x, n;

    cout << "How many values: ";
    cin >> n;

    cout << "Enter all values:\n";
    for(int i = 0; i < n; i++) {
        cin >> x;
        s.insert(x);
    }

    for(auto x : s)
        cout << x << " ";
    
    cout << endl;

    cout << "Enter key to search: ";
    cin >> x;

    if(s.count(x))
        cout << "Found!";
    else
        cout << "Not Found";

    return 0;
}
