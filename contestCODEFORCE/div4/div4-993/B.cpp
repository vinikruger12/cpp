#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        string nova;
        string def;

        for(int i = (s.size() - 1);i >= 0;i--){
            nova += s[i];

        }
        

        for(int i = 0;i < s.size();i++){
            if(nova[i] == 'p'){
                def += 'q';
            }else if(nova[i] == 'q'){
                def += 'p';
            }else if(nova[i] == 'w'){
                def += 'w';
            }
        }

        cout << def << endl;
    }
}