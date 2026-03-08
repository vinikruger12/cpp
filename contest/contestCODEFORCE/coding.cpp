#include <bits/stdc++.h>
#define int long long
using namespace std;


signed main(){
   string s; cin >> s;
   bool ok = 0;
   int k = 1;
   for(int i = 1;i < s.size();i++){
      if(s[i] == s[i-1]) k++;
      else{
         if(k == 7) ok = 1;
         k = 1;
      }
   }

   if(ok) cout << "YES" << endl;
   else cout << "NO" << endl;
}   