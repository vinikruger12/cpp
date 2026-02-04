#include <bits/stdc++.h>

using namespace std;

int v[10010];

int up(int l, int r, int x){
    int res = -1;

    while(l <= r){
        int mid = (l+r)/2;
        if(v[mid] > x){
            res = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    return res;
}

int main(){
    int n; cin >> n;
    for(int i = 0;i < n;i++) cin >> v[i];
    set<int> st;

    for(int i = 0;i < n;i++) st.insert(v[i]);

    int x;
    while(cin >> x){
        cout << up(0, n-1, x) << ' ';
        cout << upper_bound(v, v+n, x) - v << endl;

        auto p = st.upper_bound(x);
        cout << *p << endl;
    }
}