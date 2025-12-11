#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<pair<int,int>> v;
    int a, b, n;

    cout << "Enter how many pairs: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Enter two numbers for pair " << i+1 << ": ";
        cin >> a >> b;
        v.push_back({a, b});
    }

    cout << "Pairs before sorting:\n";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i].first << " " << v[i].second << endl;
    }

    sort(v.begin(), v.end()); // sorts by first, then second

    cout << "Pairs after sorting:\n";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i].first << " " << v[i].second << endl;
    }

    return 0;
}
