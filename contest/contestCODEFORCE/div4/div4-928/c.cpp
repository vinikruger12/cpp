#include <bits/stdc++.h>

using namespace std;
const int maxn = 2e5+5;
#define int long long
int dp[maxn];

int s(int a){
    string s = to_string(a);
    int res = 0;
    for(int i = 0;i < s.size();i++){
        res += (s[i] - '0');
    }
    return res;
}


signed main(){
    int t; cin >> t;
    dp[0] = 0;

    for(int i = 1;i < maxn;i++){
        dp[i] = dp[i-1] + s(i);
    }

    while(t--){
        int n; cin >> n;
        cout << dp[n] << endl;
    }
}