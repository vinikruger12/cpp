#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s, w; cin >> s >> w;
        int l = 0, r = 0;
        string nova = "";
        int conta = 0;
        while(l < s.size()){
            
            if(s[l] == w[r]){
                conta++;
                nova += s[l];
                l++;
                if(r + 1 != w.size()) r++;
            }
            else if(s[l] == '?'){
                conta++;
                nova += w[r];
                l++;
                if(r + 1 != w.size()) r++;
            }
            else{
                nova += s[l];
                l++;
            }

        }

        
        if(conta >= w.size()){
            cout << "YES" << endl;
            cout << nova << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
    }
    
}