#include<iostream>
#include<algorithm>
using namespace std;

void rev(int arr[], int l, int r) {
    while(l < r) {
        swap(arr[l], arr[r]);
        l++;
        r--;
    }
}

int main() {
    int arr[100], n, k;

    cout << "Enter the array size:";
    cin >> n;

    cout << "Enter the array:" << endl;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter k value:";
    cin >> k;

    k = k % n;

    // Right rotation using reverse method
    rev(arr, 0, n - 1);
    rev(arr, 0, k - 1);
    rev(arr, k, n - 1);

    cout << "Rotated array:" << endl;
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
    return 0;
}
