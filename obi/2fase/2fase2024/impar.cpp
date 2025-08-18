#include <bits/stdc++.h>

using namespace std;

bool par(int u){
    if(u % 2 == 0) return true;
    else return false;
}

int main(){
    int n, m; cin >> n >> m;
    vector<vector<int>> mat((n), vector<int> (m));
    vector<vector<int>> nova((n), vector<int> (m));


    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cin >> mat[i][j];
        }
    }

    int a = mat[0][0];

    if(a % 2 == 0) a = 0;
    else a = 1;
    int conta = 0;

    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            if(a == 0){
                if(i % 2 == 0){
                    if(j % 2 == 0){
                        if(!par(mat[i][j])){
                         mat[i][j] = mat[i][j] + 1;
                         conta++;
                        }
                    }
                    else if(j % 2 != 0){
                        if(par(mat[i][j])){
                            mat[i][j] = mat[i][j] + 1;
                            conta++;
                        }
                    }
                }
                else if(i % 2 != 0){
                     if(j % 2 == 0){
                        if(par(mat[i][j])){
                         mat[i][j] = mat[i][j] + 1;
                         conta++;
                        }
                    }
                    else if(j % 2 != 0){
                        if(!par(mat[i][j])){
                            mat[i][j] = mat[i][j] + 1;
                            conta++;
                        }
                    }
                }
            }
            else if(a == 1){
                if(i % 2 == 0){
                    if(j % 2 == 0){
                        if(par(mat[i][j])){
                         mat[i][j] = mat[i][j] + 1;
                         conta++;
                        }
                    }
                    else if(j % 2 != 0){
                        if(!par(mat[i][j])){
                            mat[i][j] = mat[i][j] + 1;
                            conta++;
                        }
                    }
                }
                else if(i % 2 != 0){
                    if(j % 2 == 0){
                        if(!par(mat[i][j])){
                         mat[i][j] = mat[i][j] + 1;
                         conta++;
                        }
                    }
                    else if(j % 2 != 0){
                        if(par(mat[i][j])){
                            mat[i][j] = mat[i][j] + 1;
                            conta++;
                        }
                    }
                }
            }
        }
    }


    cout << conta << endl;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cout << mat[i][j] << ' ';
        }
        cout << endl;
    }
    
    
}