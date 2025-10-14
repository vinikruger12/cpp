#include <bits/stdc++.h>

using namespace std;

string binario(int a){
    string s;
    int b = a;
    while(b != 0){
        int aux = b % 2;
        if(aux == 1) s += '1';
        if(aux == 0) s += '0';
        b /= 2;
    }
    
    return s;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int x, y, z; cin >> x >> y >> z;
        string sx, sy, sz;
        sx = binario(x);
        sy = binario(y);
        sz = binario(z);

        int ok = 1;
        int smax = max(max(sy.size(), sz.size()), sx.size());
        int smin = min(min(sy.size(), sz.size()), sx.size());

        for(int i = (smin-1);i < smax;i++){
            if(i >= sx.size()) sx += '0';
            if(i >= sy.size()) sy += '0';
            if(i >= sz.size()) sz += '0';
        }
 
        for(int i = 0;i < smax ;i++){
            int r = 0;
            r += sx[i] - '0';
            r += sy[i] - '0';
            r += sz[i] - '0';
            if(r == 2) ok = 0;
        }

        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
