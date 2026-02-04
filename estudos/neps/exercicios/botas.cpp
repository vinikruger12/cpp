#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    map<int, pair<int,int>> pares;
    
    for(int i = 0;i < n;i++){
        char c; int a;
        cin >> a >> c;

        if(c == 'D'){
            pares[a].second += 1;
        }
        else if(c == 'E'){
            pares[a].first += 1;
        }

    }

    int conta = 0;
    for(auto u:pares){
        if(u.second.first == u.second.second){
            conta += u.second.first; 
        }

        else{
            int menor = min(u.second.first,u.second.second);
            conta += menor;
        }
    }

    cout << conta << endl;
}
