#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9+7;

int main(){
    int n, x; cin >> n >> x;
    vector<vector<int>> dp((n+1), vector<int> (x+1));
    vector<int> c(n);

    for(int i = 0;i < n;i++){
        cin >> c[i];
    }

    for(int i = 0;i < n;i++){
        dp[i][0] = 1;
    }


    for(int i = n-1;i >= 0;i--){
        for(int j = 1;j <= x;j++){
            int a = dp[i + 1][j];
            int b = 0;
            if(c[i] <= j){
                b = dp[i][j - c[i]];
            }
            dp[i][j] = (a + b) % MOD;
        }
    }

    cout << dp[0][x] << endl;
}