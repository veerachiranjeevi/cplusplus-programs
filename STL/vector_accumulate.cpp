#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric> // REQUIRED for accumulate
using namespace std;

int main() {
    vector<int> v;
    int n, x, sum;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter " << n << " elements\n";
    for(int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    sum = accumulate(v.begin(), v.end(), 0);

    cout << "The sum of vector v is: " << sum << endl;

    return 0;
}
