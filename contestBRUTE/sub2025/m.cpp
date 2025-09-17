#include <bits/stdc++.h>

using namespace std;

int n, k; 
vector<int> a;

bool f(int mid){

    int j = -1;
    for(int i = (n-1);i >= 0;i--){
        if(a[i] < mid){
            j = i;
            break;
        }
    }

    if(j == -1) return true;

    int o = k;
    vector<int> outro;
    for(int i = j;i >= 0;i--){
        
        if(o >= 0){ 
            outro.emplace_back(a[i] + o);
            o--;
        }
        else outro.emplace_back(a[i]);
        
    }

    reverse(outro.begin(), outro.end());

    for(int i = (outro.size() - 1);i >= 0;i--){
        if(outro[i] < mid) return false;
    }

    return true;
}



int main(){
    cin >> n >> k;
    a.resize(n);
    int minimo = 1e9, maximo = -1e9;
    for(int i = 0;i < n;i++){
        cin >> a[i];
        minimo = min(minimo, a[i]);
        maximo = max(maximo, a[i]);
    }
    int l = minimo, r = maximo + k;

    while(l < r){
        int mid = (l+r + 1)/2;
        if(f(mid)){
            l = mid;
        }
        else r = mid - 1;
        cout << l << ' ' << r << endl;
    }

    cout << l << endl;
}