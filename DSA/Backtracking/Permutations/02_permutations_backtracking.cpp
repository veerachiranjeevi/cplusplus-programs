// File: 02_permutations_backtracking.cpp
// Generate all permutations using backtracking

#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int>& arr,
           vector<int>& current,
           vector<bool>& used,
           vector<vector<int>>& result)
{
    // Base case: one permutation formed
    if (current.size() == arr.size()) {
        result.push_back(current);
        return;
    }

    // Try every unused element
    for (int i = 0; i < arr.size(); i++) {
        if (used[i]) continue;

        // TAKE
        current.push_back(arr[i]);
        used[i] = true;

        solve(arr, current, used, result);

        // UNDO
        used[i] = false;
        current.pop_back();
    }
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<int> current;
    vector<vector<int>> result;
    vector<bool> used(arr.size(), false);

    solve(arr, current, used, result);

    // Print permutations
    for (const auto& perm : result) {
        cout << "{ ";
        for (int x : perm)
            cout << x << " ";
        cout << "}" << endl;
    }

    return 0;
}
