#include <bits/stdc++.h>

using namespace std;

int v[10010];

int lb(int l, int r, int x){
    int res = -1;

    while(l <= r){
        int mid = (l+r)/2;
        if(v[mid] >= x){
            r = mid - 1;
            res = mid;
        }
        else l = mid + 1;
    }
    return res;
}

int main(){
    int n; cin >> n;
    for(int i = 0;i < n;i++) cin >> v[i];

    int x;
    while(cin >> x){
       cout << lb(0, n-1, x) << ' ';
       cout << lower_bound(v, v+n, x) - v << endl;
    }
}