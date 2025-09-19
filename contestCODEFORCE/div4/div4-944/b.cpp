#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        map<char, int> freq;
        for(int i = 0;i < s.size();i++){
            freq[s[i]]++;
        }
        if(freq[s[0]] == s.size()){
            cout << "NO" << endl;
            continue;
        }
        
        for(int i = 1;i < s.size();i++){
            if(s[i-1] != s[i]) swap(s[i-1], s[i]);
        }
        
        cout << "YES" << endl;
        cout << s << endl;

    }
}