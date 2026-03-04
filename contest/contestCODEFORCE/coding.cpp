#include <bits/stdc++.h>
#define int long long
using namespace std;


signed main(){
   int n, m, a; cin >> n >> m >> a;
   int b = 0;
   if(n % a == 0) b = n/a;
   else b = (n/a) + 1; 

   int c = 0;
   int k = m - a;
   int j = 0;
   if(k > 0){
      if(k % a == 0) j = k/a;
      else j = k/a + 1;
   }

   cout << b + (b*j) << endl;

}   