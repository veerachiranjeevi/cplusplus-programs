#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int arr[100], n;
    int l, r;

    cout << "Enter the array size:";
    cin >> n;

    cout << "Enter the array:" << endl;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    l = 0;
    r = n - 1;

    // Reverse the array using two pointers
    while(l < r) {
        swap(arr[l], arr[r]);
        l++;
        r--;
    }

    cout << "The reversed array is: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
    return 0;
}
