// File: 02_dfs_traversal.cpp
// DFS traversal of an undirected graph using recursion

#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;
    cout << node << " ";

    for (int neighbour : adj[node]) {
        if (!visited[neighbour]) {
            dfs(neighbour, adj, visited);
        }
    }
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

    cout << "DFS Traversal: ";
    dfs(0, adj, visited);
    cout << endl;

    return 0;
}
