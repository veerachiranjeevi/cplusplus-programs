// File: 01_graph_adjacency_list.cpp
// Undirected graph representation using adjacency list

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int vertices, edges;
    int x, y;

    cout << "Enter number of vertices: ";
    cin >> vertices;

    cout << "Enter number of edges: ";
    cin >> edges;

    // Create adjacency list
    vector<vector<int>> adj(vertices);

    cout << "Enter edges (u v):" << endl;
    for (int i = 0; i < edges; i++) {
        cin >> x >> y;

        // Undirected graph: add both ways
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    // Print adjacency list
    cout << "Adjacency List:" << endl;
    for (int i = 0; i < vertices; i++) {
        cout << i << " -> ";
        for (int neighbor : adj[i]) {
            cout << neighbor << " ";
        }
        cout << endl;
    }

    return 0;
}
