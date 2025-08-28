#include <bits/stdc++.h>
#define ll long long
using namespace std;

double c;
const double eps = 1e-6;

bool f(double mid){
    return (mid*mid) + sqrt(mid) <= c;
}

int main(){
    cin >> c;
    double l = 0, r = 1e18;

    while(r - l > eps){
        double mid = (l+r)/2;
        if(f(mid)){
            l = mid;
        }
        else r = mid;
    }

    cout << setprecision(20) << l << endl;
}