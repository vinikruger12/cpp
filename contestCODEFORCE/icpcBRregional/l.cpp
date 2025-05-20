#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;cin >> s;
    int t; cin >> t;

    int i = s.size() - t;
    string nova = s.substr(i+t);
    s = s.substr(i);
 
    string total = nova + s;
        
    

    cout << total << endl;
}