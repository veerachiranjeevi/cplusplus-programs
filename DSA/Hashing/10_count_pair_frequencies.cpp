#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int> mp;
    int arr[100], n, k;

    cout << "Enter array size: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter target sum: ";
    cin >> k;

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int need = k - arr[i];

        if (mp.find(need) != mp.end())
        {
            count += mp[need];
        }

        mp[arr[i]]++;   // always insert current element
    }

    cout << "Count of pairs: " << count << endl;
    return 0;
}
