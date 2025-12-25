#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 1, 2, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int freq[10] = {0};

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    cout << "Element -> Frequency\n";
    for (int i = 0; i < 10; i++)
    {
        if (freq[i] > 0)
            cout << i << " -> " << freq[i] << endl;
    }

    return 0;
}
