#include <bits/stdc++.h>
#define int long long
using namespace std;


signed main(){
   string s; cin >> s;
   int many = 0;
   for(int i = 0;i < s.size();i++){
      if(s[i] == '7' || s[i] == '4') many++;
   }

   string k = to_string(many);

   bool ok = 1;
   for(int i = 0;i < k.size();i++){
      if(k[i] != '7' && k[i] != '4') {
         ok = 0;
         break;
      }
   }

   if(ok) cout << "YES" << endl;
   else cout << "NO" << endl;
   

}   