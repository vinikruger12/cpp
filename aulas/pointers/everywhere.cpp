#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    map<char, bool> vis;
    for(int i = 0;i < n;i++){
        vis[s[i]] = 0;
    }
    int conta = 0;
    for(int i = 0;i < n;i++){
        if(!vis[s[i]]){
            conta++;
            vis[s[i]] = 1;
        }
        
    }


    int l = 0, r = 0, res = 1e9, ver = 0;        
    map<char,int> freq;
    while(l < n){

        freq[s[r]]++;
        if(freq[s[r]] == 1) ver++;

        while(ver >= conta){
            res = min(res, (r - l + 1));
            if(freq[s[l]] == 1) ver--;
            freq[s[l]]--;
            l++;
        }
    
            if(r != (n-1)) r++;
            else{
                freq[s[l]]++;
                if(freq[s[l]] == 1) ver++;
                l++;
            }
        } 


    cout << res << endl;
}