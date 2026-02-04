#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;cin >> t;

    while(t--){
    int n,m,l,r;

    cin >> n >> m >> l >> r;
    int a = 0, b = 0;

     while(m--){
         if(m % 2 == 0){
          if(a > l) a--;
          else b++;
          }
          else if(m % 2 != 0){
              if(b < r) b++;
              else a--;
          }
         }
         cout << a << " " << b << endl;
    }
}