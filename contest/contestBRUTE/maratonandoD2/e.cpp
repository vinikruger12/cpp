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
        int sum = 0;
        for(int i = 0;i < n;i++) sum += a[i];
        
        vector<int> res;
        if(sum % 2 == 0) cout << 0 << endl;
        else{
        
            for(int i = 0;i < n;i++){
                int x = a[i];      
                int z = sum;
                int y = 0;         
                while(sum % 2 != 0){
                    a[i] /= 2;
                    sum -= (x - a[i]);
                    y++;
                }

                res.emplace_back(y);
                sum = z;
            }
            sort(res.begin(), res.end());
            cout << res[0] << endl;
        }
        
    }
}