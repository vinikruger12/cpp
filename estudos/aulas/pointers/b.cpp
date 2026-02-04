#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m), res(m);

    for(int i = 0;i < n;i++) cin >> a[i];
    for(int i = 0;i < m;i++) cin >> b[i];

    int up = 0, down = 0;

    while(down < m){

        if(up < n && a[up] < b[down]) up++;
        else{
            res[down] = up;
            down++;
        }
    }


    for(int i = 0;i < m;i++){
        cout << res[i] << ' ';
    }
    cout << endl;


    
}