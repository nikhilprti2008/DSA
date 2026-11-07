#include<iostream>
#include<unordered_map>
#include<list>

using namespace std;

class graph{
    public:
    
    unordered_map<int ,list<int>> adj;

    void addAdj(int u, int v, bool direction){
        adj[u].push_back(v);

        // direction : 0 --> (undirected graph)
        // direction : 1 --> (directed graph)

        if(direction == 0){
            adj[v].push_back(u);
        }
    }

    void displayList(){
        for(auto i : adj){
            cout << i.first << "-->";
            for(auto j : i.second){
                cout << j << ",";
            } 
            cout << endl;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of nodes : ";
    cin>>n;

    int m;
    cout<<"Enter the number of edges : ";
    cin>>m;

    Graph g;

    for (int i=0; i<m; i++) {
        int u, v;
        cout<<"Enter the edge : ";
        cin>>u>>v;

        g.addAdj(u, v, 0);
    }

    g.diplayAdjList();

    return 0;
}