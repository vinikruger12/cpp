#include <bits/stdc++.h>

using namespace std;

int main(){
    int dp[1000];
    dp[1] = 1;
    dp[0] = 1;
    int n; cin >> n;
    for(int i = 2;i <= n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout << dp[n] << endl;
}