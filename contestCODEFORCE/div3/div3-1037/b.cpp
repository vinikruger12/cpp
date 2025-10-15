#include <bits/stdc++.h>

using namespace std;
const int maxn = 1e5+5;
int dp[maxn];

int main(){
  int t; cin >> t;
  while(t--){
    int n, k; cin >> n >> k;
    vector<int> a(n);
    int res = 0;
    int arm = 0;
    for(int i = 0;i < n;i++) cin >> a[i];
        
    for(int i = 0;i < n;i++){
        if(a[i] == 0) arm++;
        else arm = 0;
        if(arm == k){
            res++;
            arm = 0;
            i++;
        }
    }
        cout << res << endl;
    }  
}