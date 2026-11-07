#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    vector<int> adj[n];

    // Adding edges (undirected graph)
    adj[0].push_back(1);
    adj[1].push_back(0);

    adj[0].push_back(2);
    adj[2].push_back(0);

    adj[1].push_back(3);
    adj[3].push_back(1);

    adj[2].push_back(3);
    adj[3].push_back(2);

    adj[2].push_back(4);
    adj[4].push_back(2);

    // Printing the graph
    for (int i = 0; i < n; i++) {
        cout << i << " -> ";

        for (int j : adj[i]) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}