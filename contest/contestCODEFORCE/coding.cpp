#include <bits/stdc++.h>
#define int long long
using namespace std;


signed main(){
   string s; cin >> s;
   if(isupper(s[0])) cout << s << endl;
   else{
      char k = toupper(s[0]);
      cout << k << s.substr(1, s.size()) << endl;
   } 
}   