#include <bits/stdc++.h>
//questao PASSATEMPO, fazer
using namespace std;

int main(){
    int l, c; cin >> l >> c;
    vector<vector<string>> mat(l, vector<string> (c));
    vector<int> vecC(l);
    vector<int> vecL(c);
    map<string, int> valores;

    for(int i = 0;i < l;i++){
        for(int j = 0;j < c;j++){
            cin >> mat[i][j];
        }
        cin >> vecC[i];
    }

    for(int i = 0;i < c;i++){
        cin >> vecL[i];
    }

    bool verificaLINHA = true;
    int a = 0;
    for(int i = 1;i < l;i++){
        for(int j = 1;j < c;j++){
            if(mat[i-1][j-1] != mat[i][j]){
                verificaLINHA = false;
            }
            a = j;
        }
        if(verificaLINHA = false){
            verificaLINHA = true;
        }
        else{
            valores[mat[i-1][a-1]] = vecC[i-1]/c;
            break; 
        }
    }

    bool verificaCOLUNA = true;
    int b = 0;
    for(int j = 1;j < c;j++){
        for(int i = 1;i < l;i++){
            if(mat[i-1][j-1] != mat[i][j]){
                verificaCOLUNA = false;
            }
        b = i;
        }
        if(!verificaCOLUNA){
            verificaCOLUNA = true;
        }else{
            valores[mat[j-1][b-1]] = vecL[j-1]/l; 
        }
    }

    for(auto u:valores){
        cout << u.first << " " << u.second << endl;
    }
}