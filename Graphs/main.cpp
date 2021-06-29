#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> graph[], int u, int v) {
    graph[u].push_back(v);
    graph[v].push_back(u);
}

void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v)
    {
        cout << "\n Adjacency list of vertex "
             << v << "\n head ";
        for (auto x : adj[v])
           cout << "-> " << x;
        printf("\n");
    }
}

vector<int>bfsOfGraph(int V, vector<int> adj[]) {
    queue<int> q;
    int* varr = new int[V];
    vector<int> ans;

    for (int i = 0; i < V; i++) {
        if (varr[i] == 0) {
            q.push(i);
            cout << i << endl;
            while(!q.empty()) {
                cout << "--" << endl;
                int cv = q.front();
                q.pop();
                ans.push_back(cv);
                cout << "cv = " << cv << endl;
                varr[cv] = 1;
                for (int j = 0; j < adj[cv].size(); j++) {
                    if (varr[adj[cv][j]] == 0) {
                        q.push(adj[cv][j]);
                    }
                }
            }
        }
    }

    return ans;
}

int main(int argc, char const *argv[]) {
    
    vector<int> graph[10];
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);
    bfsOfGraph(10, graph);
    
    return 0;
}
