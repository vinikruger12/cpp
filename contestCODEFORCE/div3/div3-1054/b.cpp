#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0;i < n;i++) cin >> a[i];
        sort(a.begin(), a.end());
        vector<int> res;
        for(int i = 0;i < n;i += 2){
            res.emplace_back(a[i+1] - a[i]);
        }
        sort(res.begin(), res.end());
        cout << res[res.size() - 1] << endl;
    }
}