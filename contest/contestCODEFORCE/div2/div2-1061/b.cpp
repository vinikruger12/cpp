#include <bits/stdc++.h>

using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--){
        int n, q; cin >> n >> q;
        string s; cin >> s;
        vector<int> a(q);
        map<char, int> mapa;
        for(int i = 0;i < q;i++) cin >> a[i];
        for(int i = 0;i < n;i++) mapa[s[i]]++;

        vector<int> res(q);
        if(mapa['B'] == 0){
            for(int i = 0;i < q;i++) res[i] = a[i];
        }
        else{
        for(int i = 0;i < q;i++){
            for(int j = 0;j <= n;j++){
                if(j == n){ 
                    if(a[i] != 0) j = 0;
                    else if(s[j-1] == 'B' && a[i] == 1) break;
                    else break;
                }
                if(s[j] == 'A'){
                    if(a[i] == 0) break;
                    else{
                        a[i]--;
                        res[i]++;
                    }
                }
                else if(s[j] == 'B'){
                    if(a[i] == 0) break;
                    else{
                    a[i] /= 2; 
                    res[i]++;
                    }
                }
            }
        }
        }

        for(int i = 0;i < q;i++){
            cout << res[i] << endl;
        }
    }

}