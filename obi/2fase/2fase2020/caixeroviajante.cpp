#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+5;
int dp[maxn];

int main(){
    int n; cin >> n;
    int nl = n * (n - 1) / 2;


    vector<vector<int>> mat((nl), vector<int> (n));


    for(int i = 0;i < nl;i++){
        int a, b, t; cin >> a >> b >> t;
        mat[a][b] = t;
        mat[b][a] = t;
    }

    f


}   