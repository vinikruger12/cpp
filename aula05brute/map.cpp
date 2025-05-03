#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    map<int, int> freq;

    for(int u:v){
        freq[u]++;
    }

    for(auto a:freq){
        cout << a.first << ":" << a.second << endl;
    }
}