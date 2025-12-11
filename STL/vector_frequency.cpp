#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> v;
    int c, n, x, el;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter " << n << " elements\n";
    for(int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    cout << "Enter element to count: ";
    cin >> el;

    c = count(v.begin(), v.end(), el);

    cout << "Element frequency is: " << c;

    return 0;
}
