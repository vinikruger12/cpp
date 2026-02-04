#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        map<int, int> conta;
        for(int i = 0;i < n;i++){
            int x; cin >> x;
            conta[x]++;
        }

        vector<int> vec;
        for(auto &v : conta){
        if(v.first != 0) vec.emplace_back(v.second);
        }

        bool tringulo = 0;

        if(vec.size() == 1) cout << "SQUARE" << endl;
        else cout << "TRIANGLE" << endl;

    }
}