#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int> mp;
    int arr[100], n, k;
    bool found = false;

    cout << "Enter array size: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter target sum: ";
    cin >> k;

    int prefixSum = 0;
    mp[0] = 1;   // important initialization

    for (int i = 0; i < n; i++)
    {
        prefixSum += arr[i];

        if (mp.find(prefixSum - k) != mp.end())
        {
            found = true;
            break;
        }

        mp[prefixSum]++;
    }

    if (found)
        cout << "Subarray with given sum exists";
    else
        cout << "No subarray with given sum";

    return 0;
}
