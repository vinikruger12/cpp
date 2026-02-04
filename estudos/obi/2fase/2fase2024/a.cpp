#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int face = (n*n) - (n+((n-1)*2) + (n-2));
    int um = face*6;
    int dois = (n-2) * 12;
    int zero = pow(n,3) - dois - um - 8;

    cout << zero << endl;
    cout << um << endl;
    cout << dois << endl;
    cout << 8 << endl;
}