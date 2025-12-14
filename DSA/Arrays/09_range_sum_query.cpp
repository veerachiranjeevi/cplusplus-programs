#include<iostream>
using namespace std;

int main() {
    int arr[100], n, l, r;
    int prefix[100];

    cout << "Enter the array size:";
    cin >> n;

    cout << "Enter the array:" << endl;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    // Build prefix sum array
    prefix[0] = arr[0];
    for(int i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] + arr[i];

    cout << "Enter the range (l r):";
    cin >> l >> r;

    if(l < 0 || r >= n || l > r) {
        cout << "Invalid indices";
        return 0;
    }

    int sum;
    if(l == 0)
        sum = prefix[r];
    else
        sum = prefix[r] - prefix[l - 1];

    cout << "Sum from index " << l << " to " << r << " is: " << sum << endl;

    return 0;
}
