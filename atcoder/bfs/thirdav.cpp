#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e5+5;

int main() {
    int h, w;
    cin >> h >> w;

    vector<vector<char>> mat(h, vector<char>(w));
    pair<int, int> inicio, final;

    // Armazena as posições das letras minúsculas para teletransporte
    vector<vector<pair<int, int>>> letras(26);

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> mat[i][j];
            if (mat[i][j] == 'S') inicio = {i, j};
            if (mat[i][j] == 'G') final = {i, j};
            if (islower(mat[i][j])) {
                letras[mat[i][j] - 'a'].emplace_back(i, j);
            }
        }
    }

    vector<vector<int>> dist(h, vector<int>(w, maxn));
    vector<vector<pair<int, int>>> pai(h, vector<pair<int, int>>(w, {-1, -1}));
    vector<bool> usado(26, false); // controla se já usou o teletransporte para uma letra

    dist[inicio.first][inicio.second] = 0;
    queue<pair<int, int>> q;
    q.push(inicio);

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || ny < 0 || nx >= h || ny >= w) continue;
            if (mat[nx][ny] == '#') continue;
            if (dist[nx][ny] != maxn) continue;

            dist[nx][ny] = dist[x][y] + 1;
            pai[nx][ny] = {x, y};
            q.push({nx, ny});
        }

        if (islower(mat[x][y])) {
            int idx = mat[x][y] - 'a';
            if (!usado[idx]) {
                for (auto [nx, ny] : letras[idx]) {
                    if (dist[nx][ny] == maxn) {
                        dist[nx][ny] = dist[x][y] + 1;
                        pai[nx][ny] = {x, y};
                        q.push({nx, ny});
                    }
                }
                usado[idx] = true;
            }
        }
    }

    if (dist[final.first][final.second] == maxn) {
        cout << -1 << endl;
    } else {
        cout << dist[final.first][final.second] << endl;
    }

    return 0;
}
