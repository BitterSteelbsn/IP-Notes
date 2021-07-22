#include<bits/stdc++.h>
using namespace std;

int matrix[1002][1002] = {0};
int vis[1002][1002] = {0};

int sx = {-1, -1, -1, 0, 1, 1, 1, 0};
int sy = {-1, 0, 1, 1, 1, 0, -1, -1};

bool isvalid(int x, int y) {
    if (x < 0 || x > r - 1 || y < 0 || y > c - 1) return false;
    else if (vis[x][y] == 1) return false;
    return true;
}

void bfs(int ci, int cj) {
    queue<pair<int, int>> q;
    q.push({ci, cj});
    vis[ci][cj] = 1;
    matrix[ci][cj] = 0;

    while (!q.empty()) {
        pair<int, int> cv = q.front(); q.pop();
        if (vis[cv.first][cv.second] == 0) {
            matrix[cv.first][cv.second] = matrix[cv.first][cv.second - 1] + 1;
            vis[cv.first][cv.second] = 1;
            for (int i = 0; i < 8; i++) {
                if (isvalid(cv.first + sx[i], cv.second + sy[i])) {
                    q.push({cv.first + sx[i], cv.second + sy[i]});
                }
            }
        }
    }

}




int main() {
    int r,c, ci, cj;
    cin >> r >> c >> ci >> cj;

    return 0;
}