#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;  // create an empty vector
    int n, x;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter " << n << " numbers:" << endl;

    // taking input into vector
    for(int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x); // add element at end
    }

    // displaying vector elements
    cout << "Vector elements: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}
