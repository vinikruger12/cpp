#include <bits/stdc++.h>

using namespace std;



signed main(){
    int fibo[40];

    fibo[0] = 0;
    fibo[1] = 1;

    for(int i = 2;i < 40;i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }

    for(int i = 0;i < 40;i++){
        cout << fibo[i] << ' ';
    }

    cout << '\n';

}
