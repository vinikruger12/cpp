#include <bits/stdc++.h>

using namespace std;

int main(){
    double a, b; cin >> a >> b;
    double c, d;cin >> c >> d;

    double primeira = pow(a/2, 2) * b;
    double segunda = pow(c/2, 2) * d;

    double maior = max(primeira/segunda, segunda/primeira);
    double menor = min(primeira/segunda, segunda/primeira);

    int louco = maior;

    if(louco - maior != 0){
        cout << louco + 1 << endl;
    }else{
        cout << louco << endl;
    }
    
}