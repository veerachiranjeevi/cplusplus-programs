#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> v;
    int n, x;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter " << n << " elements\n";
    for(int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    cout << "The given vector is: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    sort(v.begin(), v.end());
    cout << "Ascending order: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    sort(v.begin(), v.end(), greater<int>());
    cout << "Descending order: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "Max element: " << *max_element(v.begin(), v.end()) << endl;
    cout << "Min element: " << *min_element(v.begin(), v.end()) << endl;

    return 0;
}
