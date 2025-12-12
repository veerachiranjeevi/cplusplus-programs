#include<iostream>
using namespace std;

int binary_search_recursive(int arr[], int l, int r, int key) {
    if(l > r)
        return -1;

    int mid = (l + r) / 2;

    if(arr[mid] == key)
        return mid;

    if(arr[mid] > key)
        return binary_search_recursive(arr, l, mid - 1, key);
    else
        return binary_search_recursive(arr, mid + 1, r, key);
}

int main() {
    int arr[100], key, n;

    cout << "Enter the array size: ";
    cin >> n;

    cout << "Enter the array in sorted order:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter key value: ";
    cin >> key;

    int index = binary_search_recursive(arr, 0, n - 1, key);

    if(index != -1)
        cout << "Found at index: " << index;
    else
        cout << "Not found";

    return 0;
}

