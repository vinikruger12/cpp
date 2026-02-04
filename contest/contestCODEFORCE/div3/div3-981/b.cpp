#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<vector<int>> mat((n), vector<int> (n));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++) cin >> mat[i][j];
        }

        int res = 0;
        for(int i = 0;i < n;i++){
            int k = i;
            int menor = 1;
            for(int j = 0;j < n && k < n;j++){
                menor = min(menor, mat[k][j]);
                k++;
            }
            if(menor < 0) res += abs(menor);
        }

        for(int j = 1;j < n;j++){
            int k = j;
            int menor = 1;
            for(int i = 0;i < n && k < n;i++){
                menor = min(menor, mat[i][k]);
                k++;
            }
            if(menor < 0) res += abs(menor);
        }

        cout << res << endl;

    }
}