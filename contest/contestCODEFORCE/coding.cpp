#include <bits/stdc++.h>
#define int long long
using namespace std;


signed main(){
   int mat[5][5];
   int m = 0, n = 0;
   for(int i = 0;i < 5;i++){
      for(int j = 0;j < 5;j++){
         int x; cin >> x;
         if(x == 1){
            m = i;
            n = j;
         }
      }
   }

   cout << (abs(m - 2) + abs(n - 2)) << endl;


}   