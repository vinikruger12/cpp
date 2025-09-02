#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n;
vector<int> a;

int up(int b){
    int l = 0, r = (n-1);

    int res = n;
    while(r >= l){
        int mid = (l+r)/2;
        if(a[mid] > b){
            res = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    return res;

}

int lb(int b){
    int l = 0, r = (n-1);
    
    int res = n;
    while(r >= l){
        int mid = (l+r)/2;
        if(a[mid] >= b){
            res = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    return res;

}


int main(){
    int t; cin >> t;

    while(t--){
        int l, r; cin >> n >> l >> r;
        a.resize(n);

        for(int i = 0;i < n;i++) cin >> a[i];
        sort(a.begin(), a.end());

        ll left = 0, right = 0, res = 0;
        ll soma1 = 0, soma2 = 0;
        
        for(int i = 0;i < n;i++){
            soma1 = l - a[i];
            soma2 = r - a[i];

            int lbb = lb(soma1);
            int upp = up(soma2);
            if(a[i] + a[i] <= r && a[i] + a[i] >= l) res--;
            res += upp - lbb;

        }

        cout << res / 2<< endl;
    }
}