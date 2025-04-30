#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> mat(3, vector<int> (3));

    for(int i = 0; i < 3;i++){
        for(int j = 0; j < 3;j++){
            cin >> mat[i][j];
        }
    }

    cout <<  (mat[0][0]*mat[1][1]*mat[2][2] +
        mat[0][1]*mat[1][2]*mat[2][0] +
        mat[0][2]*mat[1][0]*mat[2][1]) -
       (mat[0][2]*mat[1][1]*mat[2][0] +
        mat[0][0]*mat[1][2]*mat[2][1] +
        mat[0][1]*mat[1][0]*mat[2][2]) << endl;

}