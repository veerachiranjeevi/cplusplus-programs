#include<iostream>
using namespace std;

int main() {
    int arr[100], n;
    int prefix[100];

    cout << "Enter the array size:";
    cin >> n;

    cout << "Enter the array:" << endl;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    prefix[0] = arr[0];
    for(int i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] + arr[i];

    cout << "Prefix array: ";
    for(int i = 0; i < n; i++)
        cout << prefix[i] << " ";

    cout << endl;
    cout << "Sum of array elements: " << prefix[n - 1] << endl;

    return 0;
}
