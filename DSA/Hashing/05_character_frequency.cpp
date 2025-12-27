#include <iostream>
using namespace std;

int main()
{
    char str[] = "alice";
    int n = sizeof(str) / sizeof(str[0]) - 1; // exclude '\0'

    int freq[256] = {0};

    // Count character frequency
    for (int i = 0; i < n; i++)
    {
        freq[str[i]]++;
    }

    cout << "Character -> Frequency\n";
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > 0)
        {
            cout << (char)i << " -> " << freq[i] << endl;
        }
    }

    return 0;
}
