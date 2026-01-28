#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x1, y1; cin >> x1 >> y1;
    int x2, y2; cin >> x2 >> y2;

    if(x1 > x2) cout << 0 << endl;
    else if(y2 >= y1) cout << -1 << endl;
    else{
        int sum1 = x1, sum2 = x2;
        int d = 0;
        while(sum1 <= sum2){
            sum1 += y1;
            sum2 += y2;
            d++;
        }
        cout << d << endl;
    }

}