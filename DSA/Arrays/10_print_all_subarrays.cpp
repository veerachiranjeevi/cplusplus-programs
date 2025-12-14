#include<iostream>
using namespace std;

int main() {
    int arr[100], n;

    cout << "Enter the array size:";
    cin >> n;

    cout << "Enter the array:" << endl;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Printing all subarrays:" << endl;

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            cout << "[";
            for(int k = i; k <= j; k++)
                cout << " " << arr[k];
            cout << " ]" << endl;
        }
    }

    return 0;
}
