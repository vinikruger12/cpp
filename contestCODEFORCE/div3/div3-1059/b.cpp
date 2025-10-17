#include <bits/stdc++.h>

using namespace std;




int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        string aux = s;
        reverse(aux.begin(), aux.end());
        if(s == aux){
            cout << 0 << endl;
            cout << ' ' << endl;
        }
        else{
           int res = 0;
           for(int i = 0;i < n;i++) if(s[i] == '0') res++;
           cout << res << endl;
           for(int i = 0;i < n;i++){
            if(s[i] == '0'){
                cout << i + 1<< ' ';
            }
           }
           cout << endl;
        }

    }
}
    
