#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        vector<int> a(m);
        int mat[n][m];

        for(int i = 0;i < n;i++){
            
            for(int j = 0;j < m;j++){
                cin >> a[j];
            }

            sort(a.begin(), a.end());

            for(int j = 0;j < m;j++){
                mat[i][j] = a[j];
            }

        }
    
        bool ok = 1;
        for(int i = 0;i < n;i++){
            for(int j = 1;j < m;j++){
                if(mat[i][j] != mat[i][j-1] + n) ok = 0;
            }
        }
        
        if(!ok) cout << -1 << endl;
        else{
            vector<int> b(n);
            int k = 0;
            for(int i = 0;k < n;i++){
                if(mat[i][0] == k){
                b[k] = i+1;
                k++;
                i = -1;
                }
            }

            for(int i = 0;i < n;i++) cout << b[i] << ' ';
            cout << endl;
        }
    }
}
