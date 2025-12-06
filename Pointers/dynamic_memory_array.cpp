#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n; // Taking dynamic size

    int *arr = new int[n]; // Dynamic memory allocation for array

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; // Storing values
    }

    cout << "Array elements are: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Displaying values
    }
    cout << endl;

    delete[] arr; // Freeing memory

    return 0;
}
