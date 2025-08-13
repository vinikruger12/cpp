#include <bits/stdc++.h>

using namespace std;


int main(){
    int n, i, p; cin >> n >> i >> p;

    while(p != 0){
        p--;
        i++;
        if(i > n) i = 1;
    }

    cout << i << endl;
}