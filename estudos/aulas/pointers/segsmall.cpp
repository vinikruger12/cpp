#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n;
    ll s;
    cin >> n >> s;
    vector<int> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];

    ll conta = 0, r = 0, l = 0, soma = 0;

    while(r < n){

        if(soma + a[r] <= s){
            conta += (r-l + 1);
            soma += a[r];
            r++;
        }
        else{
            soma -= a[l];
            l++;
        }

    }

    cout << conta << endl;

}