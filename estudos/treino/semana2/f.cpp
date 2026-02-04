#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;

    ll ans = 0;
    unordered_map<int, ll> freq;

    int mask = 0;
    freq[0] = 1;

    for(char c : s){
        int d = c - '0';
        mask ^= (1 << d);

        ans += freq[mask];
        freq[mask]++;
    }
   

    cout << ans << endl;

}