#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        bool um = 0;
        bool dois = 0;
        for(int i = 3;i < n;i++){
            if(s[i - 3] == '2' && s[i - 2] == '0' && s[i - 1] == '2' && s[i] == '5') um = 1;
            if(s[i - 3] == '2' && s[i - 2] == '0' && s[i - 1] == '2' && s[i] == '6') dois = 1;
        }
        
        if(um && !dois) cout << 1 << endl;
        else cout << 0 << endl;
        
    }
}
