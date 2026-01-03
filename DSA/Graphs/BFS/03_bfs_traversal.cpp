// File: 03_bfs_traversal.cpp
// BFS traversal of an undirected graph using a queue

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(int start, vector<vector<int>>& adj, vector<bool>& visited) {
    queue<int> q;

    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        cout << node << " ";

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
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
        adj[y].push_back(x);   // undirected
    }

    cout << "BFS Traversal: ";
    bfs(0, adj, visited);
    cout << endl;

    return 0;
}
