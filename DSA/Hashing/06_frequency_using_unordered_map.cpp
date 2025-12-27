#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int> mp;
    int arr[] = {1, 2, 3, 2, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    cout << "Element -> Frequency\n";
    for (auto it : mp)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}
