#include <bits/stdc++.h>

using namespace std;

int main(){
    int a;
    int f = 1;
    cin >> a;
    for(int i = 1; i <= a; i++){
        f *= i;
    }
    cout << f;
}