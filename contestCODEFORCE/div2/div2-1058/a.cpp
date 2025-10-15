#include <bits/stdc++.h>
    
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        map<int, int> freq;
        for(int i = 0;i < n;i++){
            int u; cin >> u;
            freq[u]++;
        }
        int res = n;
        for(int i = 0;i < n;i++){
            if(freq[i] == 0){
                res = i;
                break;
            }
        }
        cout << res << endl;
    }

}