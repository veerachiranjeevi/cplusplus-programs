#include<iostream>
#include<algorithm>
using namespace std;

// Partition function using last element as pivot
int partition(int arr[], int l, int r) {
    int pivot = arr[r];
    int i = l - 1;

    for(int j = l; j < r; j++) {
        if(arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[r]);
    return i + 1;
}

// Quick sort recursive function
void quick_sort(int arr[], int l, int r) {
    if(l < r) {
        int pivot_index = partition(arr, l, r);
        quick_sort(arr, l, pivot_index - 1);
        quick_sort(arr, pivot_index + 1, r);
    }
}

int main() {
    int arr[100], n;

    cout << "Enter the array size:";
    cin >> n;

    cout << "Enter the array:" << endl;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    quick_sort(arr, 0, n - 1);

    cout << "The sorted array is" << endl;
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
    return 0;
}
