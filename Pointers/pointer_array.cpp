#include<iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr; // Pointer pointing to first element of array

    for(int i = 0; i < 5; i++) {
        cout << "Address of arr[" << i << "] = " << (p + i);
        cout << "  Value = " << *(p + i) << endl;
    }

    return 0;
}
