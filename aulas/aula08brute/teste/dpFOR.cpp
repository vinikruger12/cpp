#include <bits/stdc++.h>

using namespace std;

int main(){
    int dp[1000];
    dp[0] = 1;
    dp[1] = 1;

    int n; cin >> n;

    for(int i = 2;i <= n;i++){
        dp[i] = dp[i - 2] + dp[i - 1];
    }

    cout << 0 << endl;
    for(int i = 0;i < (n-1);i++){
        cout << dp[i] << ' ';
    }

    cout << endl;
}