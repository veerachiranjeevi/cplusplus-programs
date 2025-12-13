#include<iostream>
using namespace std;

int main() {
    int arr[100], n;
    int largest, second;

    cout << "Enter the array size:";
    cin >> n;

    cout << "Enter the array:" << endl;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    largest = arr[0];
    second = -1e9;   // very small number

    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > second) {
            second = arr[i];
        }
    }

    cout << "The second largest element is: " << second << endl;
    return 0;
}
#include<iostream>
using namespace std;

int main() {
    int arr[100], n;
    int largest, second;

    cout << "Enter the array size:";
    cin >> n;

    cout << "Enter the array:" << endl;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    largest = arr[0];
    second = -1e9;   // very small number

    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > second) {
            second = arr[i];
        }
    }

    cout << "The second largest element is: " << second << endl;
    return 0;
}
