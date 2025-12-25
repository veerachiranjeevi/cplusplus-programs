#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 1, 2, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int freq[10] = {0};

    // Step 1: Count frequency
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    // Step 2: Find first repeating element
    for (int i = 0; i < n; i++)
    {
        if (freq[arr[i]] > 1)
        {
            cout << "First repeating element is: " << arr[i];
            break;
        }
    }

    return 0;
}
