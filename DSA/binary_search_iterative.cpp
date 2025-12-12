#include<iostream>
using namespace std;

int binary_search_iterative() {
    int arr[100], key, n, l, r, mid;

    cout << "Enter the array size: ";
    cin >> n;

    cout << "Enter the sorted array:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter key value: ";
    cin >> key;

    l = 0;
    r = n - 1;

    while(l <= r) {
        mid = (l + r) / 2;

        if(arr[mid] == key)
            return mid;
        else if(arr[mid] < key)
            l = mid + 1;
        else
            r = mid - 1;
    }

    return -1;
}

int main() {
    int index = binary_search_iterative();

    if(index != -1)
        cout << "Found at index " << index << endl;
    else
        cout << "Not found" << endl;

    return 0;
}
