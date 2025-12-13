#include<iostream>
using namespace std;

int main() {
    int arr[100], n;
    bool visited[100] = {false};

    cout << "Enter the array size:";
    cin >> n;

    cout << "Enter the array:" << endl;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n; i++) {
        if(visited[i])
            continue;

        int count = 1;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                visited[j] = true;
            }
        }

        cout << arr[i] << " ---> " << count << endl;
    }

    return 0;
}

