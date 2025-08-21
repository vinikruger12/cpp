#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        set<ll> s;

        ll pot10 = 10;
        while(pot10 <= n) {
            ll d = pot10 + 1;
            if(n % d == 0) {
                s.insert(n / d);
            }
            if(pot10 > LLONG_MAX / 10) break;
            pot10 *= 10;
        }

        if(s.empty()) {
            cout << 0 << "\n";
        } else {
            cout << s.size() << "\n";
            for(auto x : s) cout << x << " ";
            cout << "\n";
        }
    }
}
