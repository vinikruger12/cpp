#include <bits/stdc++.h>
#define l long long
using namespace std;

int n, m;
map<int, pair<int,int>> pessoa;

bool f(int mid){
    
}


int main(){
    cin >> m >> n;

    for(int i = 0;i < n;i++){
        int t, z, y; cin >> t >> z >> y;
        pessoa[t] = {z,y};
    }

    ll l = 0, r = 1e9;

    while(r - l > 1){
        ll mid = (l+r)/2;
        if(f(mid)){
            l = mid;
        }
        else r = mid;
    }

    cout << l << endl;

}