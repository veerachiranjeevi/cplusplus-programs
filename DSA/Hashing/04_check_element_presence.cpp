#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 1, 2, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int freq[10] = {0};

    // Build frequency hash
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    int x;
    cout << "Enter element to search: ";
    cin >> x;

    if (freq[x] > 0)
        cout << "Element is present";
    else
        cout << "Element is not present";

    return 0;
}
