#include<bits/stdc++.h>
using namespace std;
#define V 5

void addEdge(vector<pair<int, int>> graph[], int u, int v, int w) {
    if (u < V) {
        graph[u].push_back({v, w});
    }
}

void dfs(vector<pair<int, int>> graph[], int visited[], int cnode) {
    //cout << visited[cnode] << " ";
    if (visited[cnode] == 0) {
        cout << cnode << " ";
        visited[cnode] = 1;
        for (int i = 0; i < graph[cnode].size(); i++) {
            dfs(graph, visited, graph[cnode][i].first);
        }
    }
}

void bfs(vector<pair<int, int>> graph[], int sv) {
    queue<int> q;
    int visited[] = {0,0,0,0,0};

    q.push(sv);

    while (!q.empty()) {
        int cnode = q.front();
        q.pop();

        if (!visited[cnode]) {
            cout << cnode << " ";
            visited[cnode] = 1;

            for (int i = 0; i < graph[cnode].size(); i++) {
                q.push(graph[cnode][i].first);
            }
        }
    }
}



void printGraph(vector<pair<int, int>> graph[]) {
    for (int i = 0; i < V; i++) {
        cout << i << ": ";
        for (int j = 0; j < graph[i].size(); j++) {
            cout << "(" << graph[i][j].first << ", " << graph[i][j].second << ")" << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<pair<int, int>> graph[V];

    addEdge(graph, 0, 2, 1);
    addEdge(graph, 0, 3, 1);
    addEdge(graph, 1, 0, 1);
    addEdge(graph, 2, 1, 1);
    addEdge(graph, 3, 4, 1);
    printGraph(graph);

    cout <<"DFS: ";
    int visited[] = {0,0,0,0,0};
    dfs(graph, visited, 1);
    cout << endl;

    cout << "BFS: ";
    bfs(graph, 0);

    






    return 0;
}