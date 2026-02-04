#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<vector<int>> mat(n, vector<int> (n));

    for(int i = 0; i < n;i++){
        for(int j = 0; j < n;j++){
            cin >> mat[i][j];
        }
    }

    vector<int> somal(n);
    vector<int> somac(n);
    int somad1 = 0;
   int somad2 = 0;
   

    for(int i = 0; i < n;i++){

    for(int j = 0;j < n;j++){    //soma linha//
        somal[i] += mat[i][j];
    }
    }

    for(int i = 0; i < n;i++){

    for(int j = 0;j < n;j++){    //soma coluna//
        somac[j] += mat[i][j];
    }
    }

    for(int i = 0;i < n;i++){                  
      somad1 += mat[i][i];   //soma dig 1 //
    }

    for(int j = 0; j < n;j++){

            somad2 += mat[j][n-1-j];  //soma dig 2//

        }

        int sm = somal[0];
    bool linha = true;
    bool coluna = true;

    for(int i = 1; i < n; i++){
        if(somal[i] != sm){
            linha = false;
            break;
        }
    
    }

    for(int i = 1; i < n; i++){
        if(somac[i] != sm){
            coluna = false;
            break;
        }
    
    }

    

    if(somad1 == sm && somad2 == sm && coluna == true && linha == true){
        cout << sm;
    }
    else{
        cout << "-1";
    }

}