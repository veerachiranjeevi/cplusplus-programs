#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> v;
    int n, x, el;
    bool flag;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter " << n << " elements\n";
    for(int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    cout << "Enter element to search: ";
    cin >> el;

    flag = binary_search(v.begin(), v.end(), el);

    if(flag)
        cout << el << " is present";
    else
        cout << el << " is not present";

    return 0;
}
