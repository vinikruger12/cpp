#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+5;
int dp[maxn], h[maxn];


int main(){
    int n,k; cin >> n >> k;
    for(int i = 0;i < n;i++) cin >> h[i];
    for(int i = 0;i < n;i++) dp[i] = 1e9;

    dp[0] = 0;

    for(int i = 0;i < n;i++){
        
        for(int j = 1;j <= k;j++){
            dp[j] = min(dp[j],dp[i] + abs(h[j] - h[i]));
            dp[i] = min(dp[i],dp[j] + abs(h[j] - h[i]));
        }

    }
    
    cout << dp[n-1] << endl;

}