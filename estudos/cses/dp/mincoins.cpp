#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e6;
const int inf = 1e9;
int dp[maxn];
int vec[100];

int main(){
    int n, x; cin >> n >> x;
    
    for(int i = 1;i <= x;i++) dp[i] = inf;
 
    for(int i = 0;i < n;i++){
        cin >> vec[i];
    }

    dp[0] = 0;

    for(int i = 1;i <= x;i++){
        for(int j = 0;j < n;j++){
            if(i - vec[j] >= 0){
                dp[i] = min(dp[i], (dp[i - vec[j]] + 1));
            }
        }
    }

    if(dp[x] == inf) cout << -1 << endl;
    else cout << dp[x] << endl;
}