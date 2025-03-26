#include <bits/stdc++.h>

using namespace std;

int main(){
    int a;
    double b;
    double res;

    cin >> a;
   

    while(a >= 1){
        cin >> b;
        res = sqrt(b);
        a--;
        cout << fixed << setprecision(4) << res << endl;
    }

    
}