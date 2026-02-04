#include <bits/stdc++.h>

using namespace std;

vector<int> a;
int l, n;

int f(double mid){
    double atual = 0;
    
    for(int i = 0;i < n;i++){
        if(a[i] - mid > atual) return 0;
        atual = max(atual, a[i] + mid);
    }


    if(atual >= l) return 1;

    return 0;

}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> l;
    a.resize(n);
    for(int i = 0;i < n;i++) cin >> a[i];

    sort(a.begin(), a.end());

    double lo = 0, ro = (double)l;
    
    for(int i = 0;i < 100;i++){
        double mid = (ro+lo)/2;
        if(f(mid)){
            ro = mid;
        }
        else{
            lo = mid;
        }
    }
    
    cout << setprecision(10) << fixed << ro << endl;
}
