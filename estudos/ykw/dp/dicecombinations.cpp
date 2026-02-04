#include <bits/stdc++.h>
 
using namespace std;
 
const int maxn = 1e6;
int dp[maxn];
long long mod = 1e9 + 7;

int main(){
    long long n; cin >> n;
    dp[0] = 1;
 
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= i && j <= 6;j++) dp[i] = (dp[i] + dp[i-j]) % mod;
    }
    
    cout << dp[n] << endl;
}