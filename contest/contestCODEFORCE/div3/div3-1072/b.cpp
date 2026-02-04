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
        vector<bool> vis(n, 0);
        int k = 0;

        for(int i = 0;i < n;i++){
        
            for(int j = (n-1);j > i;j--){
                if(a[i] > a[j] && vis[j] == 0){
                    k++;
                    vis[j] = 1;
                }
            }
            
        }

        cout << k << endl;

    }
}