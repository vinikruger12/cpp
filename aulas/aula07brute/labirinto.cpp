#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+5;

int main(){
    
    int n, m ; cin >> n >>  m;
    vector<vector<char>> mat((n), vector<char> (m));

    pair<int,int> inicio, final;

    for(int i = 0;i < n;i++){
        for(int j = 0; j < m;j++){
            cin >> mat[i][j];
            if(mat[i][j] == 'S') inicio = {i,j};
            if(mat[i][j] == 'T') final = {i,j};
        }
    }

    vector<vector<int>> dist(n, vector<int>(m,-1));
    queue<pair<int,int>> q;

    q.emplace(inicio);
    dist[inicio.first][inicio.second] = 0;

    int dx[] = {1,-1,0,0};
    int dy[] = {0,0,1,-1};

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int d = 0;d < 4;d++){
            int nx = x + dx[d];
            int ny = y + dy[d];

             if(nx >= 0 && nx < n && ny >= 0 && ny < m && dist[nx][ny] == -1 && mat[nx][ny] != '#'){
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});
            }

        }
    }

    int res = dist[final.first][final.second];
    cout << res << endl;




}