#include<bits/stdc++.h>
using namespace std;
#define N 100000
int main() {
    vector<int> G[N];
    int n;
    cin >> n;
    int a, b;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    
    int level[N];
    int visited[N];
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
        level[i] = 0;
    }

    bfs(G, )

    return 0;
}