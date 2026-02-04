#include <bits/stdc++.h>

using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        string s; cin >> s;
        bool zero = 0;
        int posicao = 0;
        for(int i = 0;i < n;i++){
            if(s[i] == '1'){ 
                zero = 1;
                posicao = i;
                break;
            }
        }
        if(!zero) cout << 0 << endl;
        else{
            int res = 1;
            int o = k;
            
            for(int i = posicao+1;i < n;i++){
                o--;
                if(o <= 0){
                    if(s[i] == '1'){
                    res++;
                    o = k;
                    }
                }
                else{
                    if(s[i] == '1'){
                        o = k;
                    }
                }
            }
            cout << res << endl;
        }
    }
}