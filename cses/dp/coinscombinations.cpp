#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9+7;
const int maxc = 1e6+6;
int dp[maxc];
int c[maxc];

int main(){
    int n, x; cin >> n >> x;

    for(int i = 1;i <= x;i++) dp[i] = -1;

    for(int i = 0;i < n;i++){
        cin >> c[i];
    }

    dp[0] = 0;

    for(int i = 1;i <= x;i++){
        for(int j = 0;j < n;j++){
            if(i - c[j] >= 0) dp[i] = max(dp[i - c[j]] + 1, dp[i]);
        }
    }

    for(int i = 0;i <= x;i++){
        cout << dp[x] << ' ';
    }


}