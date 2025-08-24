#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<vector<int>> mat(n, vector<int> (n));

    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            char c; cin >> c;
            if(c == '*') mat[i][j] = 1;
            else mat[i][j] = 0;
        }
    }

    vector<vector<int>> pref(n, vector<int> (n));
    pref[0][0] = mat[0][0];

    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            pref[i][j] = mat[i][j];
            if(i > 0) pref[i][j] += pref[i-1][j];
            if(j > 0) pref[i][j] += pref[i][j-1];
            if(j > 0 && i > 0) pref[i][j] -= pref[i-1][j-1];
        }
    }

    for(int i = 0;i < m;i++){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        a--;
        b--;
        c--;
        d--;
        int res = pref[c][d];
        if(a > 0) res -= pref[a-1][d];
        if(b > 0) res -= pref[c][b-1];
        if(b > 0 && a > 0) res += pref[a-1][b-1];

        cout << res << endl;
    }
}