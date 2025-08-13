#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<pair<int,bool>> pares;

    for(int i = 0;i < n;i++){
        int u, v; cin >> u >> v;
        pares.push_back({u, true});
        pares.push_back({v,false});
    }

    sort(pares.begin(),pares.end());

    int res = 0;
    int maior = 0;

    for(int i = 0;i < n*2;i++){
        if(pares[i].second) maior += 20;
        else maior -= 20;

        res = max(maior, res);
    }

    cout << res << endl;
}