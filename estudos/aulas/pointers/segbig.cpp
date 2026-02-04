#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n;
    ll s;
    cin >> n >> s;
    vector<int> vec(n);
    for(int i = 0;i < n;i++) cin >> vec[i];

    ll r = 0, l = 0;
    ll sum = 0, menor = 0, res = 1e9;

    while(r < n){

        if(sum + vec[r] < s){
            sum += vec[r];
            r++;
        }
        else{
            menor = (r - l);
            res = min(menor, res);
            sum -= vec[l];
            l++;
        }
        
    }

    if(res >= 1e9) cout << -1 << endl;
    else cout << res + 1 << endl;


}