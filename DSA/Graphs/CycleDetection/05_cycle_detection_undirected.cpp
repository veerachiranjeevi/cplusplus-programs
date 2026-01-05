// File: 05_cycle_detection_undirected.cpp
// Detect cycle in an undirected graph using DFS

#include <iostream>
#include <vector>
using namespace std;

bool dfs(int node, int parent,
         vector<vector<int>>& adj,
         vector<bool>& visited)
{
    visited[node] = true;

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            if (dfs(neighbor, node, adj, visited))
                return true;
        }
        else if (neighbor != parent) {
            return true;   // cycle found
        }
    }
    return false;
}

int main() {
    int vertices, edges;
    int x, y;

    cout << "Enter number of vertices: ";
    cin >> vertices;

    cout << "Enter number of edges: ";
    cin >> edges;

    vector<vector<int>> adj(vertices);
    vector<bool> visited(vertices, false);

    cout << "Enter edges (u v):" << endl;
    for (int i = 0; i < edges; i++) {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    bool hasCycle = false;

    for (int i = 0; i < vertices; i++) {
        if (!visited[i]) {
            if (dfs(i, -1, adj, visited)) {
                hasCycle = true;
                break;
            }
        }
    }

    if (hasCycle)
        cout << "Cycle detected" << endl;
    else
        cout << "No cycle detected" << endl;

    return 0;
}
