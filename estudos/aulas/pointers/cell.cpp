#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, m;
vector<int> cima, baixo;

int lb(int lbb){
    int r = m, l = 0, res = (m-1);
    while(r >= l){
        int mid = (l+r)/2;
        if(lbb <= baixo[mid]){
            res = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return res;
}

signed main(){
    cin >> n >> m;
    cima.resize(n);
    baixo.resize(m);

    for(int i = 0;i < n;i++) cin >> cima[i];
    for(int i = 0;i < m;i++) cin >> baixo[i];
    vector<int> res(n);
    int r = 0;
    
    while(r < n){
        int lbb = lb(cima[r]);
        if(lbb != 0) lbb--;
        int upp = lb(cima[r]);
        
        res[r] = min(abs(cima[r] - baixo[lbb]), abs(cima[r] - baixo[upp]));

        r++;
    }
    sort(res.begin(), res.end());

    cout << res[n-1] << endl;


}