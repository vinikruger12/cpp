#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for(int i = 0;i < n;i++) cin >> a[i];
        sort(a.begin(), a.end());
        vector<bool> vis(n, false);

        int l = 0, r = (n-1);
        int res = 0;
        while(l < r){
            if(a[r] + a[l] == k){
                r--;
                l++;
                res++;
            }
            else if(a[r] + a[l] > k){
                r--;
            }
            else if(a[r] + a[l] < k){
                l++;
            }
        }

        cout << res << endl;
    }
}