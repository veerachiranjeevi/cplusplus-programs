#include<iostream>
using namespace std;

// Function to maintain max heap property at index i
void heapify(int arr[], int n, int i) {
    int largest = i;           // Assume current node is largest
    int left = 2*i + 1;        // Left child index
    int right = 2*i + 2;       // Right child index

    // If left child is larger than root
    if(left < n && arr[left] > arr[largest])
        largest = left;

    // If right child is larger than largest so far
    if(right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root
    if(largest != i) {
        swap(arr[i], arr[largest]);
        // Recursively heapify the affected subtree
        heapify(arr, n, largest);
    }
}

// Function to perform heap sort
void heap_sort(int arr[], int n) {
    // Step 1: Build max heap
    for(int i = n/2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Step 2: Extract elements one by one
    for(int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);      // Move current root to end
        heapify(arr, i, 0);        // Restore heap property
    }
}

int main() {
    int arr[100], n;

    cout << "Enter the array size: ";
    cin >> n;

    cout << "Enter the array elements:" << endl;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    heap_sort(arr, n);

    cout << "Sorted array:" << endl;
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
    return 0;
}
