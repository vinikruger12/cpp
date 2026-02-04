#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> mat[i][j];
        }
    }


    int a = 0, b = 0;
    int maior = 0;
    int res = 0;

    while(b != n){

        if(a == n){
            a = 0;
            b++;
        }

        for(int i = 0;i < n;i++){
            if(a != i){
            res += mat[i][b];
            }
        }

        for(int j = 0;j < n;j++){
            if(b != j){
                res += mat[a][j];
            }
        }

        maior = max(maior, res);
        res = 0;
        a++;

    }   

    cout << maior << endl;

}
