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

    while(r != n){
        
        if(sum < s){
            sum += vec[r];
            r++;
        }
        else{
            menor = (r - l);
            sum -= vec[l];
            l++;
            res = min(menor,res);
        }

        cout << res << ' ' << menor << ' ' <<  sum  << ' ' << l << ' ' << r << endl;
    }

    cout << res << endl;


}