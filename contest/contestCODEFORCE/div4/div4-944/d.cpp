#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        string sorted = s;
        sort(sorted.begin(), sorted.end());
        if(s == sorted){
            cout << 1 << endl;
            continue;
        }
        else{
            int res = 1;
            bool achou = 0;

            for(int i = 1;i < s.size();i++){
                if(s[i-1] != s[i]){
                    if(s[i-1] == '0' && s[i] == '1'){
                        if(!achou) achou = 1;
                        else res++;
                    }
                    else res++;
                }
                
            }
            cout << res << endl;
        }
           
        }
         
}
