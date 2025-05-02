#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    set<pair<string, string>> flores;
    
    for(int i = 0;i < n;i++){
        string flor, cor;
        cin >> flor >> cor;
        flores.insert({flor, cor});
       
    }

    cout << flores.size() << endl;

    
}