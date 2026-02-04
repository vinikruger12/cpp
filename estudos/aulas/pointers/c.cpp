#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<int> a, b;
    map<int,int> freq, freq2;

    for(int i = 0;i < m;i++){
        int c; cin >> c;
        if(freq2[c] < 1) a.emplace_back(c);
        freq2[c]++;
    }   
    
    for(int i = 0;i < m;i++){
        int c; cin >> c;
        if(freq[c] < 1) b.emplace_back(c);
        freq[c]++;
    }   

    int up = 0, down = 0;
    int conta = 0;
    int res = 0;

    for(auto v:b){
        res += freq[v] * freq2[v];
    }

    cout << res << endl;

}