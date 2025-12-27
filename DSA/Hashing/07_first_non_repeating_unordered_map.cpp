#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int> mp;
    int arr[] = {1, 2, 3, 2, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Count frequency
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    // Find first non-repeating element
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (mp[arr[i]] == 1)
        {
            cout << "First non-repeating element: " << arr[i];
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "No non-repeating element found";
    }

    return 0;
}
