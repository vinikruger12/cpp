#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> a, b;
int n, k, q;

int lb(int c){
    int l = 0, r = (k-1);
    int res = k;
    while(l <= r){
        int mid = (l+r)/2;
        if(c <= a[mid]){
            res = mid;
            r = mid - 1;
        }
        else l = mid+1;
    }
    return res;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        cin >> n >> k >> q;
        a.resize(k);
        b.resize(k);
        for(int i = 0;i < k;i++) cin >> a[i];
        for(int i = 0;i < k;i++) cin >> b[i];

        while(q--){
            int query; cin >> query;
            int x = lb(query);

            if(query == 0){
                cout << 0 << endl;
                continue;
            }

            if(x == 0){
            cout << (query * b[0]) / a[0] << endl;
            continue;
            }

            if(x == k){
                cout << b[x-1] << endl;
            }
            if(a[x] == query) cout << b[x] << endl;
            else{
            int numer = (query - a[x-1]) * (b[x] - b[x-1]);
            int denom = (a[x] - a[x-1]);
            int res = b[x-1] + numer / denom;
            cout << res << endl;
            }
        }
    }   
}