#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 1, 2, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int freq[10] = {0};

    // Count frequency
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    // Count distinct elements
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (freq[i] > 0)
            count++;
    }

    cout << "Total distinct elements are: " << count;
    return 0;
}
