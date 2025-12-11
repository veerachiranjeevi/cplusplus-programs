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

    sort(v.begin(), v.end());

    cout << "Enter the element: ";
    cin >> x;

    auto lb = lower_bound(v.begin(), v.end(), x);
    auto ub = upper_bound(v.begin(), v.end(), x);

    cout << "Lower bound index: " << (lb - v.begin()) << endl;
    cout << "Upper bound index: " << (ub - v.begin()) << endl;
    cout << "Frequency: " << (ub - lb) << endl;

    return 0;
}
