#include <bits/stdc++.h>
#define int long long
using namespace std;


signed main(){
    int n, k; cin >> n >> k;
    int q = n % 2 == 0 ? (int)n/2 : (int)n/2 + 1;
    if(k <= q){
       cout << 2*k - 1 << endl; 
    }
    else{
       cout << 2*(k - q) << endl;
    }

}   