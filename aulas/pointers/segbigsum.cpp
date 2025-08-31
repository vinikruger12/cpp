#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n;
    ll s;
    cin >> n >> s;
    vector<int> a(n);

    for(int i = 0;i < n;i++) cin >> a[i];

    ll r = 0, l = 0, sum = 0, conta = 0;

    while(r < n){
       
       if(sum + a[r] < s){
        sum += a[r];
        r++;
       }
       else{
        conta += (n - r);
        sum -= a[l];
        l++;
       }
    }

    cout << conta << endl;

}