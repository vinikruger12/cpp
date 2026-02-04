#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, p; cin >> n >> m >> p;
    vector<vector<int>> mat((n), vector<int> (m));
    vector<int> linha(n);
    vector<int> coluna(m);
   
    
    for(int i = 0;i < n;i++){
        linha[i] = i;
        for(int j = 0;j < m;j++){
            coluna[j] = j;
            mat[i][j] = (m*i) + (j+1);
        }
    }


    while(p--){
        char c;
        int prim, segun;
        cin >> c >> prim >> segun;

        prim--;
        segun--;


        if(c == 'C'){
            swap(coluna[prim], coluna[segun]);
        }else{
            swap(linha[prim], linha[segun]);
        }

    }

    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cout << mat[linha[i]][coluna[j]] << " ";
        }
        cout << endl;
    }


}