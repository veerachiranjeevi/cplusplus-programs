// File: 03_combinations_backtracking.cpp
// Generate all combinations of size k using backtracking

#include <iostream>
#include <vector>
using namespace std;

void solve(int index, vector<int>& arr,
           vector<int>& current,
           vector<vector<int>>& result, int k)
{
    // Valid combination formed
    if (current.size() == k) {
        result.push_back(current);
        return;
    }

    // No more elements to choose from
    if (index == arr.size())
        return;

    // TAKE the element
    current.push_back(arr[index]);
    solve(index + 1, arr, current, result, k);
    current.pop_back();  // undo

    // SKIP the element
    solve(index + 1, arr, current, result, k);
}

int main() {
    vector<int> arr = {1, 2, 3};
    int k = 2;

    vector<int> current;
    vector<vector<int>> result;

    solve(0, arr, current, result, k);

    // Print combinations
    for (const auto& comb : result) {
        cout << "{ ";
        for (int x : comb)
            cout << x << " ";
        cout << "}" << endl;
    }

    return 0;
}

