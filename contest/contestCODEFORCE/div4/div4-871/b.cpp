#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0;i < n;i++) cin >> a[i];
        int res = 0;
        int r = 0, l = 0;
        int arm = 0;
        for(int i = 0;i < n;i++){
            if(a[i] == 0) arm++;
            else if(a[i] == 1) arm = 0;

            res = max(arm, res);
        }

        cout << res << endl;
    }

}