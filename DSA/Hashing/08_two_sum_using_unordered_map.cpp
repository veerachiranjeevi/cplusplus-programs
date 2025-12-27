#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int> mp;
    int arr[100], n;
    int target;
    bool found = false;

    cout << "Enter array size: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter target sum: ";
    cin >> target;

    for (int i = 0; i < n; i++)
    {
        int need = target - arr[i];

        if (mp.find(need) != mp.end())
        {
            cout << "Pair found: " << need << " + " << arr[i];
            found = true;
            break;
        }
        else
        {
            mp[arr[i]] = i;   // store value as key
        }
    }

    if (!found)
    {
        cout << "No pair found";
    }

    return 0;
}
