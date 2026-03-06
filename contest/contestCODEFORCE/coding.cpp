#include <bits/stdc++.h>
#define int long long
using namespace std;

bool f(int x){
   string s = to_string(x);
   sort(s.begin(), s.end());
   bool ok = 1;
   for(int i = 1;i < 4;i++){
      if(s[i] == s[i-1]) ok = 0;
   }
   return ok;
}

signed main(){
   int x; cin >> x;
   int k = 1;
   while(1){
      if(f(k + x)) break;
      else k++; 
   }

   cout << x + k << endl;
}   