#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;cin >> s;
    int t; cin >> t;

    
    string nova;
    string total;
 
        for(int i = (s.size()-1);i >= (s.size()-t);i--){
            nova += s[i];
        }

        s = s.erase(s.size() - t);

        total = nova + s;
        
    

    cout << total << endl;
}