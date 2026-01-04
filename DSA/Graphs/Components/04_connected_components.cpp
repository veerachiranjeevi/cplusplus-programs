// File: 04_connected_components.cpp
// Count connected components in an undirected graph using DFS

#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited);
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

    int components = 0;

    for (int i = 0; i < vertices; i++) {
        if (!visited[i]) {
            dfs(i, adj, visited);
            components++;
        }
    }

    cout << "Number of connected components: " << components << endl;

    return 0;
}
