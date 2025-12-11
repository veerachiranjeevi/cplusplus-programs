#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> v;      // vector declaration
    int n, x, mx, mn;

    cout << "Enter size: ";
    cin >> n;

    // taking input
    cout << "Enter " << n << " elements:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    // printing original vector
    cout << "The given vector is: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // sorting in ascending order
    sort(v.begin(), v.end());
    cout << "Ascending order: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // sorting in descending order
    reverse(v.begin(), v.end());
    cout << "Descending order: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // finding max element
    mx = *max_element(v.begin(), v.end());
    cout << "The max element is: " << mx << endl;

    // finding min element
    mn = *min_element(v.begin(), v.end());
    cout << "The min element is: " << mn << endl;

    cin.ignore();
    cin.get();
    return 0;
}
