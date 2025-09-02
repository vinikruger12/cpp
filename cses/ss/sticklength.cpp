#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> res, a;
int n;

void f(ll mid){
    for(int i = 0;i < n;i++){
        res[mid] += abs(a[i] - mid);
    }
}


int main(){
    cin >> n;
    a.resize(n);
    for(int i = 0;i < n;i++) cin >> a[i];
    sort(a.begin(), a.end());
    int menor = a[0], maior = a[n-1];
    int diff = maior - menor + 1;
    res.resize(diff);
    for(int i = menor; i <= maior;i++){
        f(i);
    }

    sort(res.begin(), res.end());
    for(int i = 0;i < res.size();i++){
        cout << res[i] << ' ';
    }
}