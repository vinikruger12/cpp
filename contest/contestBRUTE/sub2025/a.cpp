#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<vector<int>> mat((n), vector<int> (m));
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cin >> mat[i][j];
        }
    }

    int soma = 0;
    int maior = 0;
    for(int j = 0;j < m;j++){
        maior = 0;
        for(int i = 0;i < n;i++){
          maior = max(maior, mat[i][j]);
        }
        soma += maior;
    }

    cout << soma << endl;

    
}