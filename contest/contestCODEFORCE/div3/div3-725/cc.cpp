#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n;
vector<int> a;

int lb(int soma1){
    int l = 0, r = (n-1), res = n;
    while(l <= r){
        int mid = (l+r)/2;
        if(soma1 <= a[mid]){
            res = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return res;
}

int up(int soma2){
    int l = 0, r = (n-1), res = n;
    while(l <= r){
        int mid = (l+r)/2;
        if(soma2 < a[mid]){
            res = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
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
        ll soma1 = 0, soma2 = 0, res = 0;
        for(int i = 0;i < n;i++){
            soma1 = l - a[i];
            soma2 = r - a[i];

            int low = lb(soma1);
            int upper = up(soma2);
            if(a[i] + a[i] >= l && a[i] + a[i] <= r) res--;
            res += (upper - low);
           
        }
        cout << res / 2 << endl;
    }
}
