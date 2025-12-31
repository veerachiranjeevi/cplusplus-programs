// File: subsets_backtracking.cpp
// Generate all subsets of an array using backtracking

#include <iostream>
#include <vector>
using namespace std;

void solve(int index, vector<int>& arr,
           vector<int>& current,
           vector<vector<int>>& result)
{
    // Base case: all elements processed
    if (index == arr.size()) {
        result.push_back(current);   // store current subset
        return;
    }

    // TAKE the element
    current.push_back(arr[index]);
    solve(index + 1, arr, current, result);
    current.pop_back();              // undo

    // NOT TAKE the element
    solve(index + 1, arr, current, result);
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<int> current;
    vector<vector<int>> result;

    solve(0, arr, current, result);

    // Print all subsets
    for (const auto& subset : result) {
        cout << "{ ";
        for (int x : subset)
            cout << x << " ";
        cout << "}" << endl;
    }

    return 0;
}
