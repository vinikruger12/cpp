#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, a, b; cin >> m >> a >> b;
    int louco = a + b;
    int res = m - louco;

    int maior = max(a,b);
    int maismaior = max(maior, res); 

    cout << maismaior << endl;
}