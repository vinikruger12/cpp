#include <bits/stdc++.h>
using namespace std;

int a;
int b;
int c;
int n;

void f(){
    a = n / 3;
    b = (n + 1) / 3;
    c = n - a - b;      
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while(t--){
        cin >> n;
        long long res = 0;
        while(n > 2){
            f();           
            res += a;      
            n = c;         
        }

        cout << res << endl;
    }
}
