#include<iostream>
#include<vector>
#include<algorithm>
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

    cout << "Enter required element: ";
    cin >> element;

    auto it = find(v.begin(), v.end(), element);

    if(it != v.end()) {
        cout << element << " found at index " << (it - v.begin());
    } else {
        cout << element << " not found";
    }

    return 0;
}
