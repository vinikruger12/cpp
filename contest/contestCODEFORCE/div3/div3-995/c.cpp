#include <bits/stdc++.h>

using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n, m, k; cin >> n >> m >> k;
        vector<int> a(m), q(k);
        map<int, int> mapa;
        for(int i = 0;i < m;i++) cin >> a[i];
        for(int i = 0;i < k;i++){
            cin >> q[i];
            mapa[q[i]]++;
        }   
        string s = "";
        if(n == k){
            for(int i = 0;i < m;i++) s += '1';
        }
        else if(n - k >= 2){
            for(int i = 0;i < m;i++) s += '0';
        }
        else{
            for(int i = 0;i < m;i++){
                if(mapa[a[i]] == 0) s += '1';
                else s += '0';
            }
        }

        cout << s << endl;
        
        
    }

}