#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t; cin >> t;
    
    while(t--){
        ll n; cin >> n;
        vector<ll> res;
        ll d = 11;

        while(n >= d){
            if(n % d == 0)
                res.emplace_back(n / d);
             d = (d-1) * 10 + 1;
        }

            cout << res.size() << endl;
            for(int i = res.size() - 1;i >= 0;i--){
                cout << res[i] << ' ';
            }
            cout << endl;
    }
}