#include<iostream>
using namespace std;

// Function to perform insertion sort
void insertion_sort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Shift elements greater than key
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Insert key at correct position
        arr[j + 1] = key;
    }
}

int main() {
    int arr[100], n;

    // Input array size
    cout << "Enter the array size: ";
    cin >> n;

    // Input array elements
    cout << "Enter the array elements:" << endl;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    // Call insertion sort
    insertion_sort(arr, n);

    // Display sorted array
    cout << "Sorted array:" << endl;
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
