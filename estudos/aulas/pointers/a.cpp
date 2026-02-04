#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<int> N(n+m);

    for(int i = 0;i < n;i++) cin >> N[i];
    for(int i = n;i < (m+n);i++) cin >> N[i];

    sort(N.begin(), N.end());
    for(int i = 0;i < (n+m);i++) cout << N[i] << ' ';
    cout << endl;



    
}