#include<iostream>
using namespace std;

int main() {
    int arr[100], key, n;

    cout << "Enter the array size: ";
    cin >> n;

    cout << "Enter the array:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter key value: ";
    cin >> key;

    int index = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            index = i;
            break;
        }
    }

    if(index != -1)
        cout << "Found at index " << index;
    else
        cout << "Not found";

    return 0;
}
