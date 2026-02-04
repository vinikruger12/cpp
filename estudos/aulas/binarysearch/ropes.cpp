#include <bits/stdc++.h>

using namespace std;

int n, k;
vector<int> a;

bool f(double mid){
    int soma = 0;
    for(int i = 0;i < n;i++){
        soma += floor(a[i]/mid);
    }

    return soma >= k;
}


int main(){
    cin >> n >> k;
    a.resize(n);
    for(int i = 0;i < n;i++) cin >> a[i];

    double l = 0, r = 1e8;
    for(int i = 0;i < 100;i++){
        double mid = (l+r)/2;
        if(f(mid)){
            l = mid;
        }
        else r = mid;
    }

    cout << setprecision(20) << l << endl;

}