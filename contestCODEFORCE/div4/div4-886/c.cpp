#include <bits/stdc++.h>

using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        string s = "";
        for(int i = 0;i < 8;i++){
            for(int j = 0;j < 8;j++){
                char c; cin >> c;
                if(c != '.') s += c;
            }
        }
        cout << s << endl;
    }


}