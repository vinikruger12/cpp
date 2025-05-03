#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int c = 0;

    for(int i = 2; i <= n;i++){
       
        if(pow(2,i) <= n){
            c++;
        }

    }
    cout << n - c;
}