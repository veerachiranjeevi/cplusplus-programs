#include<iostream>
#include<algorithm>  // for swap
using namespace std;

void bubble_sort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }
}

int main() {
    int arr[100], n;

    cout << "Enter the array size: ";
    cin >> n;

    cout << "Enter the array:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    bubble_sort(arr, n);

    cout << "The sorted array is:\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
    return 0;
}
