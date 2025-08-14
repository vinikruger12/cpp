#include <bits/stdc++.h>

using namespace std;

int main(){
    float c, d, t; cin >> c >> d >> t;
    float res = (d/c) - t;

    if(res < 0) cout << 0 << '.' << 0 << endl;
    else cout << fixed << setprecision(1) << res << endl;
}