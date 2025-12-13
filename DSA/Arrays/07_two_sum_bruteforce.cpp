#include<iostream>
using namespace std;

int main() {
    int arr[100], n, target;
    bool found = false;

    cout << "Enter the array size:";
    cin >> n;

    cout << "Enter the array:" << endl;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter target value:";
    cin >> target;

    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                cout << "Indices: " << i << ", " << j << endl;
                found = true;
                break;
            }
        }
        if(found)
            break;
    }

    if(!found)
        cout << "No pair found" << endl;

    return 0;
}
