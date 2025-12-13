#include<iostream>
using namespace std;

int main() {
    int arr[100], n;
    int max, min;

    cout << "Enter the array size:";
    cin >> n;

    cout << "Enter the array:" << endl;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    max = arr[0];
    min = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    cout << "The maximum value is: " << max << endl;
    cout << "The minimum value is: " << min << endl;

    return 0;
}
