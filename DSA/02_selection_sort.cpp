#include<iostream>
#include<algorithm> // for swap
using namespace std;

void selection_sort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int minIndex = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int arr[100], n;

    cout << "Enter the array size: ";
    cin >> n;

    cout << "Enter the array:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    selection_sort(arr, n);

    cout << "The sorted array is:\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
    return 0;
}
