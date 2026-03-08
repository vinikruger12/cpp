#include <bits/stdc++.h>
#define int long long
using namespace std;


signed main(){
   string s; cin >> s;
   bool ok = 0;
   map<char, int> mapa;
   char c = s[0];
   int a = 0, b = 0;
   for(int i = 0;i < s.size();i++){
      if(s[i] == '1') a = 1;
      if(s[i] == '0') b = 1;
   }

   for(int i = 0;i < s.size();i++){

      if(mapa[s[i]] >= 7){
         if(s[i] == '1') if(b) ok = 1;
         if(s[i] == '0') if(a) ok = 1;
      }

      if(s[i] != c){
         if(mapa[c] >= 7) ok = 1;
         mapa[c] = 0;
      }
      mapa[s[i]]++;
      c = s[i];
   }

   if(mapa[c] >= 7){
         if(c == '1') if(b) ok = 1;
         if(c == '0') if(a) ok = 1;
      }

   if(ok) cout << "YES" << endl;
   else cout << "NO" << endl;
}   