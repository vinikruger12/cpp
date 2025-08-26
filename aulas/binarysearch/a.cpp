#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    for(int i = 0;i < n;i++) cin >> vec[i];
    
    
    for(int i = 0;i < k;i++){
    int tem; cin >> tem;
    int l = 0, r = (n-1);
    bool ok = 0;

    while(l <= r){
        int mid = (l+r)/2;

        if(vec[mid] == tem){
        ok = 1;
        break;
        }
        else if(vec[mid] > tem) r = mid - 1;
        else l = mid + 1;
    }

    if(ok) cout << "YES" << endl;
    else cout << "NO" << endl; 
    }
}