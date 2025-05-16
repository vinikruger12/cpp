#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<pair<string,int>> pares(n);

    for(int i =0;i < n;i++){
        string st; cin >> st;
        pares[i].first = st;
        pares[i].second = i;
    }

    for(int i =0;i < n;i++){
        cout << pares[i].first << " " << pares[i].second << endl;
    }


}