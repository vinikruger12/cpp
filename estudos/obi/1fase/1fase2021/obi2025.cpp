#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> vec(n);
    int maior = 0;

    for(int i = 0;i < n;i++){
        cin >> vec[i];
        maior = max(maior, vec[i]);
    }
    

    vector<vector<int>> mat(n, vector<int> (maior));

    for(int i = 0;i < maior;i++){

        for(int j = 0;j < n;j++){
            if(vec[j] + i >= maior){
                mat[i][j] = 1;
            }else{
                mat[i][j] = 0;
            }
        }
    }


    for(int i = 0;i < maior;i++){
        for(int j = 0;j < n;j++){
            cout << mat[i][j] << " "; 
        }
        cout << endl;
    }
    
}